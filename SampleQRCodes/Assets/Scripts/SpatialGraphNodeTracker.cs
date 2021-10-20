using UnityEngine;
using System.Collections;
using Microsoft.MixedReality.Toolkit.Utilities;

#if MIXED_REALITY_OPENXR
using Microsoft.MixedReality.OpenXR;
#else
using QRTracking.WindowsMR;
#endif

namespace QRTracking
{
    public class SpatialGraphNodeTracker : MonoBehaviour
    {
        //public static SpatialGraphNodeTracker sNode;

        //private Transform QRtransform;

        //[Windows.Foundation.Metadata.Overload("CreateCoordinateSystemForNode")]
        //public static SpatialCoordinateSystem CreateCoordinateSystemForNode(Guid nodeId);

        private System.Guid _id;
        private SpatialGraphNode node;

        public System.Guid Id
        {
            get => _id;

            set
            {
                if (_id != value)
                {
                    _id = value;
                    InitializeSpatialGraphNode(force: true);
                }
            }
        }

        // Use this for initialization
        void Start()
        {
            InitializeSpatialGraphNode();
        }

        // Update is called once per frame
        void Update()
        {
            InitializeSpatialGraphNode();
            if (node != null && node.TryLocate(FrameTime.OnUpdate, out Pose pose))
            {
                // If there is a parent to the camera that means we are using teleport and we should not apply the teleport
                // to these objects so apply the inverse
                if (CameraCache.Main.transform.parent != null)
                {
                    pose = pose.GetTransformedBy(CameraCache.Main.transform.parent);
                }

                gameObject.transform.SetPositionAndRotation(pose.position, pose.rotation);
                //setQRposition(pose.position, pose.rotation);
                //Debug.Log("Id= " + id + " QRPose = " +  pose.position.ToString("F7") + " QRRot = "  +  pose.rotation.ToString("F7"));
            }
        }

        private void InitializeSpatialGraphNode(bool force = false)
        {
            if (node == null || force)
            {
                node = (Id != System.Guid.Empty) ? SpatialGraphNode.FromStaticNodeId(Id) : null;
                Debug.Log("Initialize SpatialGraphNode Id= " + Id);
            }
        }


        //void MyApplication::OnAddedQRCode(const QRCodeAddedEventArgs& args)
        //{
        //    QRCode code = args.Code();
        //    std::vector<float3> qrVertices = CreateRectangle(code.PhysicalSideLength(), code.PhysicalSideLength());
        //    std::vector<unsigned short> qrCodeIndices = TriangulatePoints(qrVertices);
        //    XMFLOAT3 qrAreaColor = XMFLOAT3(DirectX::Colors::Aqua);

        //    SpatialCoordinateSystem qrCoordinateSystem = SpatialGraphInteropPreview::CreateCoordinateSystemForNode(code.SpatialGraphNodeId());
        //    std::shared_ptr<SceneObject> m_qrShape =
        //        std::make_shared<SceneObject>(
        //            m_deviceResources,
        //            qrVertices,
        //            qrCodeIndices,
        //            qrAreaColor,
        //            qrCoordinateSystem);

        //    m_sceneController->AddSceneObject(m_qrShape);
        //}


        //public void setQRposition(Vector3 QRposition, Quaternion QRrotation)
        //{
        //    QRtransform.position = QRposition;
        //    QRtransform.rotation = QRrotation;
        //}

        //public void getQRposition()
        //{
        //    return QRtransform;
        //}
    }
}