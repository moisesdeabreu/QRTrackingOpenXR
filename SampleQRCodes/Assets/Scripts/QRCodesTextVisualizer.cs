using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.QR;
using UnityEngine.UI;

namespace QRTracking
{
    public class QRCodesTextVisualizer : MonoBehaviour
    {
        //private SortedDictionary<System.Guid, GameObject> qrCodesObjectsList;
        //private bool clearExisting = false;
        public InputField qrCodeInput;
        public string qrModelStartWith = "MOD";

        struct ActionData
        {
            public enum Type
            {
                Added,
                Updated,
                Removed
            };
            public Type type;
            public Microsoft.MixedReality.QR.QRCode qrCode;

            public ActionData(Type type, Microsoft.MixedReality.QR.QRCode qRCode) : this()
            {
                this.type = type;
                qrCode = qRCode;
            }
        }

        private System.Collections.Generic.Queue<ActionData> pendingActions = new Queue<ActionData>();
        void Awake()
        {

        }

        // Use this for initialization
        void Start()
        {
            QRCodesManager.Instance.QRCodeAdded += Instance_QRCodeAdded;
            QRCodesManager.Instance.QRCodeUpdated += Instance_QRCodeUpdated;

            qrCodeInput.onValueChanged.AddListener(delegate { QRCodeChanged(); });
            
            Invoke("ResetText", 0.5f); // El sistema almacena el QR anterior o lo carga al iniciar, si es el mismo qr no buscará el qr en el server
        }

        private void ResetText()
        {
            qrCodeInput.text = ""; 
        }

        private void QRCodeChanged()
        {
            // Hacer la llamada a la api para obtener los datos
            Debug.Log("Se ha cambiado el Código QR");
        }

        private void Instance_QRCodeAdded(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeAdded");
            Debug.Log("******* ADD: " + e.Data.Data.Substring(0, 3).ToUpper() + " != " + qrModelStartWith.ToUpper());
            if (e.Data.Data.Substring(0,3).ToUpper() != qrModelStartWith.ToUpper())
            {
                lock (pendingActions)
                {
                    pendingActions.Enqueue(new ActionData(ActionData.Type.Added, e.Data));
                }

            }
        }

        private void Instance_QRCodeUpdated(object sender, QRCodeEventArgs<Microsoft.MixedReality.QR.QRCode> e)
        {
            Debug.Log("QRCodesVisualizer Instance_QRCodeUpdated");
            Debug.Log("******* UPDATE: " + e.Data.Data.Substring(0, 3).ToUpper() + " != " + qrModelStartWith.ToUpper());
            if (e.Data.Data.Substring(0,3).ToUpper() != qrModelStartWith.ToUpper())
            {
                lock (pendingActions)
                {
                    pendingActions.Enqueue(new ActionData(ActionData.Type.Updated, e.Data));
                }
            }
        }

        private void HandleEvents()
        {
            lock (pendingActions)
            {
                while (pendingActions.Count > 0)
                {
                    var action = pendingActions.Dequeue();
                    if (action.type == ActionData.Type.Added)
                    {
                        qrCodeInput.text = action.qrCode.Data;
                    }
                    else if (action.type == ActionData.Type.Updated && qrCodeInput.text != action.qrCode.Data)
                    {
                        qrCodeInput.text = action.qrCode.Data;
                    }
                }
            }
        }

        void Update()
        {
            HandleEvents();
        }
    }

}
