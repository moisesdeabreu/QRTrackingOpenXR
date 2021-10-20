using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace QRTracking
{
    public class HideAndShow : MonoBehaviour
    {
        public void lockIt(GameObject obj){
            obj.SetActive(true);
            //QRCode.qrCodeStatic.setLockStatus(true);
        }

        public void relocateIt(GameObject obj){
            obj.SetActive(true);
            // obj.SetActive(false)
            //obj.transform.position = QRCode.qrCodeStatic.getQRGlobalPosition();
        }
    }
}
