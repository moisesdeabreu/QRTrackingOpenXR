using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QRManager : MonoBehaviour
{
    QRTracking.QRCode qrCode;
    Vector3 qrPosition;
    Quaternion qrRotation;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GetPosition()
    {
        
        //qrCode = GameObject.Find("TableAnchor").GetComponent<QRTracking.QRCode>();
        qrCode = (QRTracking.QRCode)FindObjectOfType<QRTracking.QRCode>();
        if(qrCode==null)
        {
            Debug.Log("No QR Code Detected");
            return;
        }
        qrPosition = qrCode.getQRGlobalPosition();
        qrRotation = qrCode.getQRGlobalRotation();

    }

    public void UpdatePosition(GameObject gameObject)
    {
        gameObject.transform.position = qrPosition;
        gameObject.transform.rotation = qrRotation;

    }
}
