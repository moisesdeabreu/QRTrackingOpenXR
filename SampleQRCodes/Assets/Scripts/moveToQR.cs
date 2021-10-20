using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class moveToQR : MonoBehaviour
{
    public Transform qrLocation;

    // Update is called once per frame
    void Update()
    {
        transform.position = qrLocation.position;
        transform.rotation = qrLocation.rotation;
    }

}
