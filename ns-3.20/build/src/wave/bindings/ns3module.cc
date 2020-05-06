#include "ns3module.h"
static PyMethodDef wave_FatalImpl_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef wave_FatalImpl_moduledef = {
    PyModuleDef_HEAD_INIT,
    "wave.FatalImpl",
    NULL,
    -1,
    wave_FatalImpl_functions,
};
#endif

static PyObject *
initwave_FatalImpl(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&wave_FatalImpl_moduledef);
    #else
    m = Py_InitModule3((char *) "wave.FatalImpl", wave_FatalImpl_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
static PyMethodDef wave_Hash_Function_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashFunctionFnv1a_Type;


PyTypeObject *_PyNs3HashFunctionHash32_Type;


PyTypeObject *_PyNs3HashFunctionHash64_Type;


PyTypeObject *_PyNs3HashFunctionMurmur3_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef wave_Hash_Function_moduledef = {
    PyModuleDef_HEAD_INIT,
    "wave.Hash.Function",
    NULL,
    -1,
    wave_Hash_Function_functions,
};
#endif

static PyObject *
initwave_Hash_Function(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&wave_Hash_Function_moduledef);
    #else
    m = Py_InitModule3((char *) "wave.Hash.Function", wave_Hash_Function_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Function::Fnv1a' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionFnv1a_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Fnv1a");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash32' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash32_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash32");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Hash64' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionHash64_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hash64");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Hash::Function::Murmur3' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashFunctionMurmur3_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Murmur3");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    return m;
}
static PyMethodDef wave_Hash_functions[] = {
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3HashImplementation_Type;

#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef wave_Hash_moduledef = {
    PyModuleDef_HEAD_INIT,
    "wave.Hash",
    NULL,
    -1,
    wave_Hash_functions,
};
#endif

static PyObject *
initwave_Hash(void)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&wave_Hash_moduledef);
    #else
    m = Py_InitModule3((char *) "wave.Hash", wave_Hash_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    /* Import the 'ns3::Hash::Implementation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return NULL;
        }
        _PyNs3HashImplementation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Implementation");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    submodule = initwave_Hash_Function();
    if (submodule == NULL) {
        return NULL;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Function", submodule);
    return m;
}
static PyMethodDef wave_internal_functions[] = {
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef wave_internal_moduledef = {
    PyModuleDef_HEAD_INIT,
    "wave.internal",
    NULL,
    -1,
    wave_internal_functions,
};
#endif

static PyObject *
initwave_internal(void)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&wave_internal_moduledef);
    #else
    m = Py_InitModule3((char *) "wave.internal", wave_internal_functions, NULL);
    #endif
    if (m == NULL) {
        return NULL;
    }
    return m;
}
/* --- module functions --- */


PyObject *
_wrap_wave_MakeOrganizationIdentifierChecker()
{
    PyObject *py_retval;
    ns3::Ptr< ns3::AttributeChecker const > retval;
    PyNs3AttributeChecker *py_AttributeChecker;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = ns3::MakeOrganizationIdentifierChecker();
    if (!(const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_AttributeChecker = NULL;
    } else {
        py_AttributeChecker = (PyNs3AttributeChecker *) wrapper_lookup_iter->second;
        Py_INCREF(py_AttributeChecker);
    }
    
    if (py_AttributeChecker == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval)))), &PyNs3AttributeChecker_Type);
        py_AttributeChecker = PyObject_New(PyNs3AttributeChecker, wrapper_type);
    
        py_AttributeChecker->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval))->Ref();
        py_AttributeChecker->obj = const_cast<ns3::AttributeChecker *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_AttributeChecker->obj] = (PyObject *) py_AttributeChecker;
    }
    py_retval = Py_BuildValue((char *) "N", py_AttributeChecker);
    return py_retval;
}
PyObject * _wrap_wave_MakeOrganizationIdentifierChecker();

static PyMethodDef wave_functions[] = {
    {(char *) "MakeOrganizationIdentifierChecker", (PyCFunction) _wrap_wave_MakeOrganizationIdentifierChecker, METH_NOARGS, NULL },
    {NULL, NULL, 0, NULL}
};
/* --- classes --- */


PyTypeObject *_PyNs3Address_Type;
std::map<void*, PyObject*> *_PyNs3Address_wrapper_registry;


PyTypeObject *_PyNs3AsciiTraceHelper_Type;
std::map<void*, PyObject*> *_PyNs3AsciiTraceHelper_wrapper_registry;


PyTypeObject *_PyNs3AsciiTraceHelperForDevice_Type;
std::map<void*, PyObject*> *_PyNs3AsciiTraceHelperForDevice_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionList_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionList_wrapper_registry;


PyTypeObject *_PyNs3AttributeConstructionListItem_Type;
std::map<void*, PyObject*> *_PyNs3AttributeConstructionListItem_wrapper_registry;


PyTypeObject *_PyNs3Bar_Type;
std::map<void*, PyObject*> *_PyNs3Bar_wrapper_registry;


PyTypeObject *_PyNs3BlockAckAgreement_Type;
std::map<void*, PyObject*> *_PyNs3BlockAckAgreement_wrapper_registry;


PyTypeObject *_PyNs3BlockAckCache_Type;
std::map<void*, PyObject*> *_PyNs3BlockAckCache_wrapper_registry;


PyTypeObject *_PyNs3BlockAckManager_Type;
std::map<void*, PyObject*> *_PyNs3BlockAckManager_wrapper_registry;


PyTypeObject *_PyNs3Buffer_Type;
std::map<void*, PyObject*> *_PyNs3Buffer_wrapper_registry;


PyTypeObject *_PyNs3BufferIterator_Type;
std::map<void*, PyObject*> *_PyNs3BufferIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3ByteTagList_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagList_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIterator_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIterator_wrapper_registry;


PyTypeObject *_PyNs3ByteTagListIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3ByteTagListIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3CallbackBase_Type;
std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;


PyTypeObject *_PyNs3CapabilityInformation_Type;
std::map<void*, PyObject*> *_PyNs3CapabilityInformation_wrapper_registry;


PyTypeObject *_PyNs3EventId_Type;
std::map<void*, PyObject*> *_PyNs3EventId_wrapper_registry;


PyTypeObject *_PyNs3Hasher_Type;
std::map<void*, PyObject*> *_PyNs3Hasher_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv4Mask_Type;
std::map<void*, PyObject*> *_PyNs3Ipv4Mask_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Address_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Address_wrapper_registry;


PyTypeObject *_PyNs3Ipv6Prefix_Type;
std::map<void*, PyObject*> *_PyNs3Ipv6Prefix_wrapper_registry;


PyTypeObject *_PyNs3Mac48Address_Type;
std::map<void*, PyObject*> *_PyNs3Mac48Address_wrapper_registry;


PyTypeObject *_PyNs3MacLowBlockAckEventListener_Type;
std::map<void*, PyObject*> *_PyNs3MacLowBlockAckEventListener_wrapper_registry;


PyTypeObject *_PyNs3MacLowDcfListener_Type;
std::map<void*, PyObject*> *_PyNs3MacLowDcfListener_wrapper_registry;


PyTypeObject *_PyNs3MacLowTransmissionListener_Type;
std::map<void*, PyObject*> *_PyNs3MacLowTransmissionListener_wrapper_registry;


PyTypeObject *_PyNs3MacLowTransmissionParameters_Type;
std::map<void*, PyObject*> *_PyNs3MacLowTransmissionParameters_wrapper_registry;


PyTypeObject *_PyNs3NetDeviceContainer_Type;
std::map<void*, PyObject*> *_PyNs3NetDeviceContainer_wrapper_registry;


PyTypeObject *_PyNs3NodeContainer_Type;
std::map<void*, PyObject*> *_PyNs3NodeContainer_wrapper_registry;


PyTypeObject *_PyNs3ObjectBase_Type;
std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;


PyTypeObject *_PyNs3ObjectDeleter_Type;
std::map<void*, PyObject*> *_PyNs3ObjectDeleter_wrapper_registry;


PyTypeObject *_PyNs3ObjectFactory_Type;
std::map<void*, PyObject*> *_PyNs3ObjectFactory_wrapper_registry;


PyTypeObject *_PyNs3OriginatorBlockAckAgreement_Type;


PyTypeObject *_PyNs3PacketMetadata_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadata_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItem_wrapper_registry;


PyTypeObject *_PyNs3PacketMetadataItemIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketMetadataItemIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIterator_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIterator_wrapper_registry;


PyTypeObject *_PyNs3PacketTagIteratorItem_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagIteratorItem_wrapper_registry;


PyTypeObject *_PyNs3PacketTagList_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagList_wrapper_registry;


PyTypeObject *_PyNs3PacketTagListTagData_Type;
std::map<void*, PyObject*> *_PyNs3PacketTagListTagData_wrapper_registry;


PyTypeObject *_PyNs3PcapFile_Type;
std::map<void*, PyObject*> *_PyNs3PcapFile_wrapper_registry;


PyTypeObject *_PyNs3PcapHelper_Type;
std::map<void*, PyObject*> *_PyNs3PcapHelper_wrapper_registry;


PyTypeObject *_PyNs3PcapHelperForDevice_Type;
std::map<void*, PyObject*> *_PyNs3PcapHelperForDevice_wrapper_registry;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map;


PyTypeObject *_PyNs3Simulator_Type;
std::map<void*, PyObject*> *_PyNs3Simulator_wrapper_registry;


PyTypeObject *_PyNs3StatusCode_Type;
std::map<void*, PyObject*> *_PyNs3StatusCode_wrapper_registry;


PyTypeObject *_PyNs3Tag_Type;


PyTypeObject *_PyNs3TagBuffer_Type;
std::map<void*, PyObject*> *_PyNs3TagBuffer_wrapper_registry;


PyTypeObject *_PyNs3TimeWithUnit_Type;
std::map<void*, PyObject*> *_PyNs3TimeWithUnit_wrapper_registry;


PyTypeObject *_PyNs3TypeId_Type;
std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;


PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;


PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;


PyTypeObject *_PyNs3WifiHelper_Type;
std::map<void*, PyObject*> *_PyNs3WifiHelper_wrapper_registry;


PyTypeObject *_PyNs3WifiMacHelper_Type;
std::map<void*, PyObject*> *_PyNs3WifiMacHelper_wrapper_registry;


PyTypeObject *_PyNs3WifiMode_Type;
std::map<void*, PyObject*> *_PyNs3WifiMode_wrapper_registry;


PyTypeObject *_PyNs3WifiModeFactory_Type;
std::map<void*, PyObject*> *_PyNs3WifiModeFactory_wrapper_registry;


PyTypeObject *_PyNs3WifiPhyHelper_Type;
std::map<void*, PyObject*> *_PyNs3WifiPhyHelper_wrapper_registry;


PyTypeObject *_PyNs3WifiPhyListener_Type;
std::map<void*, PyObject*> *_PyNs3WifiPhyListener_wrapper_registry;


PyTypeObject *_PyNs3WifiRemoteStation_Type;
std::map<void*, PyObject*> *_PyNs3WifiRemoteStation_wrapper_registry;


PyTypeObject *_PyNs3WifiRemoteStationInfo_Type;
std::map<void*, PyObject*> *_PyNs3WifiRemoteStationInfo_wrapper_registry;


PyTypeObject *_PyNs3WifiRemoteStationState_Type;
std::map<void*, PyObject*> *_PyNs3WifiRemoteStationState_wrapper_registry;


PyTypeObject *_PyNs3WifiTxVector_Type;
std::map<void*, PyObject*> *_PyNs3WifiTxVector_wrapper_registry;


PyTypeObject *_PyNs3Empty_Type;
std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;


PyTypeObject *_PyNs3Int64x64_t_Type;
std::map<void*, PyObject*> *_PyNs3Int64x64_t_wrapper_registry;


PyTypeObject *_PyNs3Chunk_Type;


PyTypeObject *_PyNs3Header_Type;


PyTypeObject *_PyNs3MgtAddBaRequestHeader_Type;


PyTypeObject *_PyNs3MgtAddBaResponseHeader_Type;


PyTypeObject *_PyNs3MgtAssocRequestHeader_Type;


PyTypeObject *_PyNs3MgtAssocResponseHeader_Type;


PyTypeObject *_PyNs3MgtDelBaHeader_Type;


PyTypeObject *_PyNs3MgtProbeRequestHeader_Type;


PyTypeObject *_PyNs3MgtProbeResponseHeader_Type;


PyTypeObject *_PyNs3NqosWifiMacHelper_Type;


PyTypeObject *_PyNs3Object_Type;


PyTypeObject *_PyNs3ObjectAggregateIterator_Type;
std::map<void*, PyObject*> *_PyNs3ObjectAggregateIterator_wrapper_registry;


PyTypeObject *_PyNs3PcapFileWrapper_Type;


PyTypeObject *_PyNs3QosWifiMacHelper_Type;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;


PyTypeObject *_PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt___Type;
pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map;


PyTypeObject *_PyNs3Time_Type;
std::map<void*, PyObject*> *_PyNs3Time_wrapper_registry;


PyTypeObject *_PyNs3TraceSourceAccessor_Type;


PyTypeObject *_PyNs3Trailer_Type;


PyTypeObject *_PyNs3WifiActionHeader_Type;


PyTypeObject *_PyNs3WifiActionHeaderActionValue_Type;
std::map<void*, PyObject*> *_PyNs3WifiActionHeaderActionValue_wrapper_registry;


PyTypeObject *_PyNs3WifiInformationElement_Type;


PyTypeObject *_PyNs3WifiMac_Type;


PyTypeObject *_PyNs3WifiMacHeader_Type;


PyTypeObject *_PyNs3WifiMacQueue_Type;


PyTypeObject *_PyNs3WifiPhy_Type;


PyTypeObject *_PyNs3WifiRemoteStationManager_Type;


PyTypeObject *_PyNs3AttributeAccessor_Type;


PyTypeObject *_PyNs3AttributeChecker_Type;


PyTypeObject *_PyNs3AttributeValue_Type;


PyTypeObject *_PyNs3CallbackChecker_Type;


PyTypeObject *_PyNs3CallbackImplBase_Type;


PyTypeObject *_PyNs3CallbackValue_Type;


PyTypeObject *_PyNs3CtrlBAckRequestHeader_Type;


PyTypeObject *_PyNs3CtrlBAckResponseHeader_Type;


PyTypeObject *_PyNs3Dcf_Type;


PyTypeObject *_PyNs3EdcaTxopN_Type;


PyTypeObject *_PyNs3EmptyAttributeValue_Type;


PyTypeObject *_PyNs3EventImpl_Type;


PyTypeObject *_PyNs3ExtendedSupportedRatesIE_Type;


PyTypeObject *_PyNs3HtCapabilities_Type;


PyTypeObject *_PyNs3HtCapabilitiesChecker_Type;


PyTypeObject *_PyNs3HtCapabilitiesValue_Type;


PyTypeObject *_PyNs3Ipv4AddressChecker_Type;


PyTypeObject *_PyNs3Ipv4AddressValue_Type;


PyTypeObject *_PyNs3Ipv4MaskChecker_Type;


PyTypeObject *_PyNs3Ipv4MaskValue_Type;


PyTypeObject *_PyNs3Ipv6AddressChecker_Type;


PyTypeObject *_PyNs3Ipv6AddressValue_Type;


PyTypeObject *_PyNs3Ipv6PrefixChecker_Type;


PyTypeObject *_PyNs3Ipv6PrefixValue_Type;


PyTypeObject *_PyNs3Mac48AddressChecker_Type;


PyTypeObject *_PyNs3Mac48AddressValue_Type;


PyTypeObject *_PyNs3MacLow_Type;


PyTypeObject *_PyNs3MgtBeaconHeader_Type;


PyTypeObject *_PyNs3NetDevice_Type;


PyTypeObject *_PyNs3NixVector_Type;


PyTypeObject *_PyNs3Node_Type;


PyTypeObject *_PyNs3ObjectFactoryChecker_Type;


PyTypeObject *_PyNs3ObjectFactoryValue_Type;


PyTypeObject *_PyNs3OutputStreamWrapper_Type;


PyTypeObject *_PyNs3Packet_Type;


PyTypeObject *_PyNs3PointerChecker_Type;


PyTypeObject *_PyNs3PointerValue_Type;


PyTypeObject *_PyNs3RegularWifiMac_Type;


PyTypeObject *_PyNs3Ssid_Type;


PyTypeObject *_PyNs3SsidChecker_Type;


PyTypeObject *_PyNs3SsidValue_Type;


PyTypeObject *_PyNs3SupportedRates_Type;


PyTypeObject *_PyNs3TimeValue_Type;


PyTypeObject *_PyNs3TypeIdChecker_Type;


PyTypeObject *_PyNs3TypeIdValue_Type;


PyTypeObject *_PyNs3UintegerValue_Type;


PyTypeObject *_PyNs3WifiModeChecker_Type;


PyTypeObject *_PyNs3WifiModeValue_Type;


PyTypeObject *_PyNs3AddressChecker_Type;


PyTypeObject *_PyNs3AddressValue_Type;


PyTypeObject *_PyNs3DcaTxop_Type;


std::map<void*, PyObject*> PyNs3OrganizationIdentifier_wrapper_registry;


static int
_wrap_PyNs3OrganizationIdentifier__tp_init__0(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3OrganizationIdentifier *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::OrganizationIdentifier(*((PyNs3OrganizationIdentifier *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3OrganizationIdentifier__tp_init__1(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::OrganizationIdentifier();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3OrganizationIdentifier__tp_init(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3OrganizationIdentifier__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3OrganizationIdentifier__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_Serialize(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    self->obj->Serialize(*((PyNs3BufferIterator *) start)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_Deserialize(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    retval = self->obj->Deserialize(*((PyNs3BufferIterator *) start)->obj);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_IsNull(PyNs3OrganizationIdentifier *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsNull();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_GetType(PyNs3OrganizationIdentifier *self)
{
    PyObject *py_retval;
    ns3::OrganizationIdentifier::OrganizationIdentifierType retval;
    
    retval = self->obj->GetType();
    py_retval = Py_BuildValue((char *) "i", retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_GetManagementId(PyNs3OrganizationIdentifier *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetManagementId();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_GetSerializedSize(PyNs3OrganizationIdentifier *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifier_SetType(PyNs3OrganizationIdentifier *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::OrganizationIdentifier::OrganizationIdentifierType type;
    const char *keywords[] = {"type", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &type)) {
        return NULL;
    }
    self->obj->SetType(type);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3OrganizationIdentifier__copy__(PyNs3OrganizationIdentifier *self)
{

    PyNs3OrganizationIdentifier *py_copy;
    py_copy = PyObject_New(PyNs3OrganizationIdentifier, &PyNs3OrganizationIdentifier_Type);
    py_copy->obj = new ns3::OrganizationIdentifier(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3OrganizationIdentifier_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3OrganizationIdentifier_methods[] = {
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsNull", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_IsNull, METH_NOARGS, NULL },
    {(char *) "GetType", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_GetType, METH_NOARGS, NULL },
    {(char *) "GetManagementId", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_GetManagementId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "SetType", (PyCFunction) _wrap_PyNs3OrganizationIdentifier_SetType, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3OrganizationIdentifier__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3OrganizationIdentifier__tp_dealloc(PyNs3OrganizationIdentifier *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3OrganizationIdentifier_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3OrganizationIdentifier_wrapper_registry.end()) {
        PyNs3OrganizationIdentifier_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::OrganizationIdentifier *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}



static PyObject *
_wrap_PyNs3OrganizationIdentifier__tp_str(PyNs3OrganizationIdentifier *self)
{
    std::ostringstream oss;
    oss << *self->obj;
    return PyUnicode_FromString(oss.str ().c_str ());
}


static PyObject*
_wrap_PyNs3OrganizationIdentifier__tp_richcompare (PyNs3OrganizationIdentifier *PYBINDGEN_UNUSED(self), PyNs3OrganizationIdentifier *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3OrganizationIdentifier_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        if (*self->obj < *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        if (*self->obj == *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_NE:
        if (*self->obj != *other->obj) {
            Py_INCREF(Py_True);
            return Py_True;
        } else {
            Py_INCREF(Py_False);
            return Py_False;
        }
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3OrganizationIdentifier_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.OrganizationIdentifier",            /* tp_name */
    sizeof(PyNs3OrganizationIdentifier),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3OrganizationIdentifier__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)_wrap_PyNs3OrganizationIdentifier__tp_str,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3OrganizationIdentifier__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3OrganizationIdentifier_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3OrganizationIdentifier__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};



std::map<void*, PyObject*> PyNs3VendorSpecificContentManager_wrapper_registry;


static int
_wrap_PyNs3VendorSpecificContentManager__tp_init__0(PyNs3VendorSpecificContentManager *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3VendorSpecificContentManager *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3VendorSpecificContentManager_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::VendorSpecificContentManager(*((PyNs3VendorSpecificContentManager *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3VendorSpecificContentManager__tp_init__1(PyNs3VendorSpecificContentManager *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::VendorSpecificContentManager();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3VendorSpecificContentManager__tp_init(PyNs3VendorSpecificContentManager *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3VendorSpecificContentManager__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3VendorSpecificContentManager__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3VendorSpecificContentManager_DeregisterVscCallback(PyNs3VendorSpecificContentManager *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *oi;
    const char *keywords[] = {"oi", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &oi)) {
        return NULL;
    }
    self->obj->DeregisterVscCallback(*((PyNs3OrganizationIdentifier *) oi)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3VendorSpecificContentManager__copy__(PyNs3VendorSpecificContentManager *self)
{

    PyNs3VendorSpecificContentManager *py_copy;
    py_copy = PyObject_New(PyNs3VendorSpecificContentManager, &PyNs3VendorSpecificContentManager_Type);
    py_copy->obj = new ns3::VendorSpecificContentManager(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3VendorSpecificContentManager_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3VendorSpecificContentManager_methods[] = {
    {(char *) "DeregisterVscCallback", (PyCFunction) _wrap_PyNs3VendorSpecificContentManager_DeregisterVscCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3VendorSpecificContentManager__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3VendorSpecificContentManager__tp_dealloc(PyNs3VendorSpecificContentManager *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3VendorSpecificContentManager_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3VendorSpecificContentManager_wrapper_registry.end()) {
        PyNs3VendorSpecificContentManager_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
        ns3::VendorSpecificContentManager *tmp = self->obj;
        self->obj = NULL;
        if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
            delete tmp;
        }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3VendorSpecificContentManager__tp_richcompare (PyNs3VendorSpecificContentManager *PYBINDGEN_UNUSED(self), PyNs3VendorSpecificContentManager *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3VendorSpecificContentManager_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3VendorSpecificContentManager_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.VendorSpecificContentManager",            /* tp_name */
    sizeof(PyNs3VendorSpecificContentManager),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3VendorSpecificContentManager__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3VendorSpecificContentManager__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3VendorSpecificContentManager_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3VendorSpecificContentManager__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3HigherDataTxVectorTag__tp_init__0(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3HigherDataTxVectorTag *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3HigherDataTxVectorTag_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::HigherDataTxVectorTag(*((PyNs3HigherDataTxVectorTag *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3HigherDataTxVectorTag__tp_init__1(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::HigherDataTxVectorTag();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3HigherDataTxVectorTag__tp_init__2(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WifiTxVector *dataTxVector;
    bool adapter;
    PyObject *py_adapter;
    const char *keywords[] = {"dataTxVector", "adapter", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O", (char **) keywords, &PyNs3WifiTxVector_Type, &dataTxVector, &py_adapter)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    adapter = (bool) PyObject_IsTrue(py_adapter);
    self->obj = new ns3::HigherDataTxVectorTag(*((PyNs3WifiTxVector *) dataTxVector)->obj, adapter);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3HigherDataTxVectorTag__tp_init(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3HigherDataTxVectorTag__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3HigherDataTxVectorTag__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3HigherDataTxVectorTag__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_Deserialize(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    self->obj->Deserialize(*((PyNs3TagBuffer *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::HigherDataTxVectorTag::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_Serialize(PyNs3HigherDataTxVectorTag *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3TagBuffer *i;
    const char *keywords[] = {"i", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3TagBuffer_Type, &i)) {
        return NULL;
    }
    self->obj->Serialize(*((PyNs3TagBuffer *) i)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_IsAdapter(PyNs3HigherDataTxVectorTag *self)
{
    PyObject *py_retval;
    bool retval;
    
    retval = self->obj->IsAdapter();
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_GetDataTxVector(PyNs3HigherDataTxVectorTag *self)
{
    PyObject *py_retval;
    PyNs3WifiTxVector *py_WifiTxVector;
    
    ns3::WifiTxVector retval = self->obj->GetDataTxVector();
    py_WifiTxVector = PyObject_New(PyNs3WifiTxVector, &PyNs3WifiTxVector_Type);
    py_WifiTxVector->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiTxVector->obj = new ns3::WifiTxVector(retval);
    PyNs3WifiTxVector_wrapper_registry[(void *) py_WifiTxVector->obj] = (PyObject *) py_WifiTxVector;
    py_retval = Py_BuildValue((char *) "N", py_WifiTxVector);
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_GetInstanceTypeId(PyNs3HigherDataTxVectorTag *self)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = self->obj->GetInstanceTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3HigherDataTxVectorTag_GetSerializedSize(PyNs3HigherDataTxVectorTag *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3HigherDataTxVectorTag__copy__(PyNs3HigherDataTxVectorTag *self)
{

    PyNs3HigherDataTxVectorTag *py_copy;
    py_copy = PyObject_GC_New(PyNs3HigherDataTxVectorTag, &PyNs3HigherDataTxVectorTag_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::HigherDataTxVectorTag(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3HigherDataTxVectorTag_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "IsAdapter", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_IsAdapter, METH_NOARGS, NULL },
    {(char *) "GetDataTxVector", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_GetDataTxVector, METH_NOARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3HigherDataTxVectorTag__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3HigherDataTxVectorTag__tp_clear(PyNs3HigherDataTxVectorTag *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::HigherDataTxVectorTag *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3HigherDataTxVectorTag__tp_traverse(PyNs3HigherDataTxVectorTag *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3HigherDataTxVectorTag__tp_dealloc(PyNs3HigherDataTxVectorTag *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3HigherDataTxVectorTag__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3HigherDataTxVectorTag__tp_richcompare (PyNs3HigherDataTxVectorTag *PYBINDGEN_UNUSED(self), PyNs3HigherDataTxVectorTag *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3HigherDataTxVectorTag_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3HigherDataTxVectorTag_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.HigherDataTxVectorTag",            /* tp_name */
    sizeof(PyNs3HigherDataTxVectorTag),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3HigherDataTxVectorTag__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3HigherDataTxVectorTag__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3HigherDataTxVectorTag__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3HigherDataTxVectorTag__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3HigherDataTxVectorTag_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3HigherDataTxVectorTag, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3HigherDataTxVectorTag__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3VendorSpecificActionHeader__tp_init__0(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3VendorSpecificActionHeader *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3VendorSpecificActionHeader_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::VendorSpecificActionHeader(*((PyNs3VendorSpecificActionHeader *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3VendorSpecificActionHeader__tp_init__1(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::VendorSpecificActionHeader();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3VendorSpecificActionHeader__tp_init(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3VendorSpecificActionHeader__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3VendorSpecificActionHeader__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_Deserialize(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    uint32_t retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    retval = self->obj->Deserialize(*((PyNs3BufferIterator *) start)->obj);
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_GetCategory(PyNs3VendorSpecificActionHeader *self)
{
    PyObject *py_retval;
    uint8_t retval;
    
    retval = self->obj->GetCategory();
    py_retval = Py_BuildValue((char *) "i", (int)retval);
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_GetOrganizationIdentifier(PyNs3VendorSpecificActionHeader *self)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *py_OrganizationIdentifier;
    
    ns3::OrganizationIdentifier retval = self->obj->GetOrganizationIdentifier();
    py_OrganizationIdentifier = PyObject_New(PyNs3OrganizationIdentifier, &PyNs3OrganizationIdentifier_Type);
    py_OrganizationIdentifier->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_OrganizationIdentifier->obj = new ns3::OrganizationIdentifier(retval);
    PyNs3OrganizationIdentifier_wrapper_registry[(void *) py_OrganizationIdentifier->obj] = (PyObject *) py_OrganizationIdentifier;
    py_retval = Py_BuildValue((char *) "N", py_OrganizationIdentifier);
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::VendorSpecificActionHeader::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_Serialize(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3BufferIterator *start;
    const char *keywords[] = {"start", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3BufferIterator_Type, &start)) {
        return NULL;
    }
    self->obj->Serialize(*((PyNs3BufferIterator *) start)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_SetOrganizationIdentifier(PyNs3VendorSpecificActionHeader *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *oi;
    const char *keywords[] = {"oi", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &oi)) {
        return NULL;
    }
    self->obj->SetOrganizationIdentifier(*((PyNs3OrganizationIdentifier *) oi)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_GetInstanceTypeId(PyNs3VendorSpecificActionHeader *self)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = self->obj->GetInstanceTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


PyObject *
_wrap_PyNs3VendorSpecificActionHeader_GetSerializedSize(PyNs3VendorSpecificActionHeader *self)
{
    PyObject *py_retval;
    uint32_t retval;
    
    retval = self->obj->GetSerializedSize();
    py_retval = Py_BuildValue((char *) "N", PyLong_FromUnsignedLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3VendorSpecificActionHeader__copy__(PyNs3VendorSpecificActionHeader *self)
{

    PyNs3VendorSpecificActionHeader *py_copy;
    py_copy = PyObject_GC_New(PyNs3VendorSpecificActionHeader, &PyNs3VendorSpecificActionHeader_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::VendorSpecificActionHeader(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3VendorSpecificActionHeader_methods[] = {
    {(char *) "Deserialize", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_Deserialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetCategory", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_GetCategory, METH_NOARGS, NULL },
    {(char *) "GetOrganizationIdentifier", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_GetOrganizationIdentifier, METH_NOARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "Serialize", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_Serialize, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetOrganizationIdentifier", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_SetOrganizationIdentifier, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetInstanceTypeId", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_GetInstanceTypeId, METH_NOARGS, NULL },
    {(char *) "GetSerializedSize", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader_GetSerializedSize, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3VendorSpecificActionHeader__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3VendorSpecificActionHeader__tp_clear(PyNs3VendorSpecificActionHeader *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::VendorSpecificActionHeader *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3VendorSpecificActionHeader__tp_traverse(PyNs3VendorSpecificActionHeader *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    return 0;
}


static void
_wrap_PyNs3VendorSpecificActionHeader__tp_dealloc(PyNs3VendorSpecificActionHeader *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3VendorSpecificActionHeader__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3VendorSpecificActionHeader__tp_richcompare (PyNs3VendorSpecificActionHeader *PYBINDGEN_UNUSED(self), PyNs3VendorSpecificActionHeader *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3VendorSpecificActionHeader_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3VendorSpecificActionHeader_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.VendorSpecificActionHeader",            /* tp_name */
    sizeof(PyNs3VendorSpecificActionHeader),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3VendorSpecificActionHeader__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3VendorSpecificActionHeader__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3VendorSpecificActionHeader__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3VendorSpecificActionHeader__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3VendorSpecificActionHeader_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3VendorSpecificActionHeader, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3VendorSpecificActionHeader__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





void
PyNs3Wifi80211pHelper__PythonHelper::SetStandard(ns3::WifiPhyStandard standard)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Wifi80211pHelper *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetStandard"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Wifi80211pHelper::SetStandard(standard);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Wifi80211pHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Wifi80211pHelper* >(m_pyself)->obj = (ns3::Wifi80211pHelper*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetStandard", (char *) "i", standard);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Wifi80211pHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Wifi80211pHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Wifi80211pHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}




static int
_wrap_PyNs3Wifi80211pHelper__tp_init__0(PyNs3Wifi80211pHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3Wifi80211pHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Wifi80211pHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Wifi80211pHelper_Type)
    {
        self->obj = new PyNs3Wifi80211pHelper__PythonHelper(*((PyNs3Wifi80211pHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Wifi80211pHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Wifi80211pHelper(*((PyNs3Wifi80211pHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

static int
_wrap_PyNs3Wifi80211pHelper__tp_init__1(PyNs3Wifi80211pHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3Wifi80211pHelper_Type)
    {
        self->obj = new PyNs3Wifi80211pHelper__PythonHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3Wifi80211pHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::Wifi80211pHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

int _wrap_PyNs3Wifi80211pHelper__tp_init(PyNs3Wifi80211pHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3Wifi80211pHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3Wifi80211pHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3Wifi80211pHelper_Default(void)
{
    PyObject *py_retval;
    PyNs3Wifi80211pHelper *py_Wifi80211pHelper;
    
    ns3::Wifi80211pHelper retval = ns3::Wifi80211pHelper::Default();
    py_Wifi80211pHelper = PyObject_GC_New(PyNs3Wifi80211pHelper, &PyNs3Wifi80211pHelper_Type);
    py_Wifi80211pHelper->inst_dict = NULL;
    py_Wifi80211pHelper->inst_dict = NULL;
    py_Wifi80211pHelper->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Wifi80211pHelper->obj = new ns3::Wifi80211pHelper(retval);
    PyNs3WifiHelper_wrapper_registry[(void *) py_Wifi80211pHelper->obj] = (PyObject *) py_Wifi80211pHelper;
    py_retval = Py_BuildValue((char *) "N", py_Wifi80211pHelper);
    return py_retval;
}


PyObject *
_wrap_PyNs3Wifi80211pHelper_EnableLogComponents(void)
{
    PyObject *py_retval;
    
    ns3::Wifi80211pHelper::EnableLogComponents();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Wifi80211pHelper_SetStandard(PyNs3Wifi80211pHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::WifiPhyStandard standard;
    PyNs3Wifi80211pHelper__PythonHelper *helper_class = dynamic_cast<PyNs3Wifi80211pHelper__PythonHelper*> (self->obj);
    const char *keywords[] = {"standard", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &standard)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetStandard(standard)) : (self->obj->ns3::Wifi80211pHelper::SetStandard(standard));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3Wifi80211pHelper_Install(PyNs3Wifi80211pHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiPhyHelper *phy;
    PyNs3WifiMacHelper *macHelper;
    PyNs3NodeContainer *c;
    PyNs3Wifi80211pHelper__PythonHelper *helper_class = dynamic_cast<PyNs3Wifi80211pHelper__PythonHelper*> (self->obj);
    const char *keywords[] = {"phy", "macHelper", "c", NULL};
    PyNs3NetDeviceContainer *py_NetDeviceContainer;
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3WifiPhyHelper_Type, &phy, &PyNs3WifiMacHelper_Type, &macHelper, &PyNs3NodeContainer_Type, &c)) {
        return NULL;
    }
    ns3::NetDeviceContainer retval = (helper_class == NULL)? (self->obj->Install(*((PyNs3WifiPhyHelper *) phy)->obj, *((PyNs3WifiMacHelper *) macHelper)->obj, *((PyNs3NodeContainer *) c)->obj)) : (self->obj->ns3::Wifi80211pHelper::Install(*((PyNs3WifiPhyHelper *) phy)->obj, *((PyNs3WifiMacHelper *) macHelper)->obj, *((PyNs3NodeContainer *) c)->obj));
    py_NetDeviceContainer = PyObject_New(PyNs3NetDeviceContainer, &PyNs3NetDeviceContainer_Type);
    py_NetDeviceContainer->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NetDeviceContainer->obj = new ns3::NetDeviceContainer(retval);
    PyNs3NetDeviceContainer_wrapper_registry[(void *) py_NetDeviceContainer->obj] = (PyObject *) py_NetDeviceContainer;
    py_retval = Py_BuildValue((char *) "N", py_NetDeviceContainer);
    return py_retval;
}


static PyObject*
_wrap_PyNs3Wifi80211pHelper__copy__(PyNs3Wifi80211pHelper *self)
{

    PyNs3Wifi80211pHelper *py_copy;
    py_copy = PyObject_GC_New(PyNs3Wifi80211pHelper, &PyNs3Wifi80211pHelper_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::Wifi80211pHelper(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3WifiHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3Wifi80211pHelper_methods[] = {
    {(char *) "Default", (PyCFunction) _wrap_PyNs3Wifi80211pHelper_Default, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "EnableLogComponents", (PyCFunction) _wrap_PyNs3Wifi80211pHelper_EnableLogComponents, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SetStandard", (PyCFunction) _wrap_PyNs3Wifi80211pHelper_SetStandard, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Install", (PyCFunction) _wrap_PyNs3Wifi80211pHelper_Install, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3Wifi80211pHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3Wifi80211pHelper__tp_clear(PyNs3Wifi80211pHelper *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::Wifi80211pHelper *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3Wifi80211pHelper__tp_traverse(PyNs3Wifi80211pHelper *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3Wifi80211pHelper__PythonHelper).name() )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3Wifi80211pHelper__tp_dealloc(PyNs3Wifi80211pHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3WifiHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3WifiHelper_wrapper_registry.end()) {
        PyNs3WifiHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3Wifi80211pHelper__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3Wifi80211pHelper__tp_richcompare (PyNs3Wifi80211pHelper *PYBINDGEN_UNUSED(self), PyNs3Wifi80211pHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3Wifi80211pHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3Wifi80211pHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.Wifi80211pHelper",            /* tp_name */
    sizeof(PyNs3Wifi80211pHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3Wifi80211pHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3Wifi80211pHelper__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3Wifi80211pHelper__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3Wifi80211pHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3Wifi80211pHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3Wifi80211pHelper, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3Wifi80211pHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





ns3::Ptr< ns3::WifiMac >
PyNs3NqosWaveMacHelper__PythonHelper::Create() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::NqosWifiMacHelper *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiMac > retval;
    PyNs3WifiMac *tmp_WifiMac;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Create"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3NqosWifiMacHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3NqosWifiMacHelper* >(m_pyself)->obj = const_cast< ns3::NqosWifiMacHelper* >((const ns3::NqosWifiMacHelper*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Create", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3NqosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiMac_Type, &tmp_WifiMac)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3NqosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiMac  > (tmp_WifiMac->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3NqosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3NqosWaveMacHelper__tp_init__0(PyNs3NqosWaveMacHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3NqosWaveMacHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3NqosWaveMacHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3NqosWaveMacHelper_Type)
    {
        self->obj = new PyNs3NqosWaveMacHelper__PythonHelper(*((PyNs3NqosWaveMacHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3NqosWaveMacHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NqosWaveMacHelper(*((PyNs3NqosWaveMacHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

static int
_wrap_PyNs3NqosWaveMacHelper__tp_init__1(PyNs3NqosWaveMacHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3NqosWaveMacHelper_Type)
    {
        self->obj = new PyNs3NqosWaveMacHelper__PythonHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3NqosWaveMacHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::NqosWaveMacHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

int _wrap_PyNs3NqosWaveMacHelper__tp_init(PyNs3NqosWaveMacHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3NqosWaveMacHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3NqosWaveMacHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3NqosWaveMacHelper_Default(void)
{
    PyObject *py_retval;
    PyNs3NqosWaveMacHelper *py_NqosWaveMacHelper;
    
    ns3::NqosWaveMacHelper retval = ns3::NqosWaveMacHelper::Default();
    py_NqosWaveMacHelper = PyObject_GC_New(PyNs3NqosWaveMacHelper, &PyNs3NqosWaveMacHelper_Type);
    py_NqosWaveMacHelper->inst_dict = NULL;
    py_NqosWaveMacHelper->inst_dict = NULL;
    py_NqosWaveMacHelper->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_NqosWaveMacHelper->obj = new ns3::NqosWaveMacHelper(retval);
    PyNs3WifiMacHelper_wrapper_registry[(void *) py_NqosWaveMacHelper->obj] = (PyObject *) py_NqosWaveMacHelper;
    py_retval = Py_BuildValue((char *) "N", py_NqosWaveMacHelper);
    return py_retval;
}


PyObject *
_wrap_PyNs3NqosWaveMacHelper_SetType(PyNs3NqosWaveMacHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *type;
    Py_ssize_t type_len;
    const char *n0 = NULL;
    Py_ssize_t n0_len;
    PyNs3AttributeValue *v0 = NULL;
    ns3::EmptyAttributeValue v0_default = ns3::EmptyAttributeValue();
    const char *n1 = NULL;
    Py_ssize_t n1_len;
    PyNs3AttributeValue *v1 = NULL;
    ns3::EmptyAttributeValue v1_default = ns3::EmptyAttributeValue();
    const char *n2 = NULL;
    Py_ssize_t n2_len;
    PyNs3AttributeValue *v2 = NULL;
    ns3::EmptyAttributeValue v2_default = ns3::EmptyAttributeValue();
    const char *n3 = NULL;
    Py_ssize_t n3_len;
    PyNs3AttributeValue *v3 = NULL;
    ns3::EmptyAttributeValue v3_default = ns3::EmptyAttributeValue();
    const char *n4 = NULL;
    Py_ssize_t n4_len;
    PyNs3AttributeValue *v4 = NULL;
    ns3::EmptyAttributeValue v4_default = ns3::EmptyAttributeValue();
    const char *n5 = NULL;
    Py_ssize_t n5_len;
    PyNs3AttributeValue *v5 = NULL;
    ns3::EmptyAttributeValue v5_default = ns3::EmptyAttributeValue();
    const char *n6 = NULL;
    Py_ssize_t n6_len;
    PyNs3AttributeValue *v6 = NULL;
    ns3::EmptyAttributeValue v6_default = ns3::EmptyAttributeValue();
    const char *n7 = NULL;
    Py_ssize_t n7_len;
    PyNs3AttributeValue *v7 = NULL;
    ns3::EmptyAttributeValue v7_default = ns3::EmptyAttributeValue();
    PyNs3NqosWaveMacHelper__PythonHelper *helper_class = dynamic_cast<PyNs3NqosWaveMacHelper__PythonHelper*> (self->obj);
    const char *keywords[] = {"type", "n0", "v0", "n1", "v1", "n2", "v2", "n3", "v3", "n4", "v4", "n5", "v5", "n6", "v6", "n7", "v7", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#|s#O!s#O!s#O!s#O!s#O!s#O!s#O!s#O!", (char **) keywords, &type, &type_len, &n0, &n0_len, &PyNs3AttributeValue_Type, &v0, &n1, &n1_len, &PyNs3AttributeValue_Type, &v1, &n2, &n2_len, &PyNs3AttributeValue_Type, &v2, &n3, &n3_len, &PyNs3AttributeValue_Type, &v3, &n4, &n4_len, &PyNs3AttributeValue_Type, &v4, &n5, &n5_len, &PyNs3AttributeValue_Type, &v5, &n6, &n6_len, &PyNs3AttributeValue_Type, &v6, &n7, &n7_len, &PyNs3AttributeValue_Type, &v7)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetType(std::string(type, type_len), (n0 ? std::string(n0, n0_len) : ""), (v0 ? (*((PyNs3AttributeValue *) v0)->obj) : v0_default), (n1 ? std::string(n1, n1_len) : ""), (v1 ? (*((PyNs3AttributeValue *) v1)->obj) : v1_default), (n2 ? std::string(n2, n2_len) : ""), (v2 ? (*((PyNs3AttributeValue *) v2)->obj) : v2_default), (n3 ? std::string(n3, n3_len) : ""), (v3 ? (*((PyNs3AttributeValue *) v3)->obj) : v3_default), (n4 ? std::string(n4, n4_len) : ""), (v4 ? (*((PyNs3AttributeValue *) v4)->obj) : v4_default), (n5 ? std::string(n5, n5_len) : ""), (v5 ? (*((PyNs3AttributeValue *) v5)->obj) : v5_default), (n6 ? std::string(n6, n6_len) : ""), (v6 ? (*((PyNs3AttributeValue *) v6)->obj) : v6_default), (n7 ? std::string(n7, n7_len) : ""), (v7 ? (*((PyNs3AttributeValue *) v7)->obj) : v7_default))) : (self->obj->ns3::NqosWaveMacHelper::SetType(std::string(type, type_len), (n0 ? std::string(n0, n0_len) : ""), (v0 ? (*((PyNs3AttributeValue *) v0)->obj) : v0_default), (n1 ? std::string(n1, n1_len) : ""), (v1 ? (*((PyNs3AttributeValue *) v1)->obj) : v1_default), (n2 ? std::string(n2, n2_len) : ""), (v2 ? (*((PyNs3AttributeValue *) v2)->obj) : v2_default), (n3 ? std::string(n3, n3_len) : ""), (v3 ? (*((PyNs3AttributeValue *) v3)->obj) : v3_default), (n4 ? std::string(n4, n4_len) : ""), (v4 ? (*((PyNs3AttributeValue *) v4)->obj) : v4_default), (n5 ? std::string(n5, n5_len) : ""), (v5 ? (*((PyNs3AttributeValue *) v5)->obj) : v5_default), (n6 ? std::string(n6, n6_len) : ""), (v6 ? (*((PyNs3AttributeValue *) v6)->obj) : v6_default), (n7 ? std::string(n7, n7_len) : ""), (v7 ? (*((PyNs3AttributeValue *) v7)->obj) : v7_default)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3NqosWaveMacHelper__copy__(PyNs3NqosWaveMacHelper *self)
{

    PyNs3NqosWaveMacHelper *py_copy;
    py_copy = PyObject_GC_New(PyNs3NqosWaveMacHelper, &PyNs3NqosWaveMacHelper_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::NqosWaveMacHelper(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3WifiMacHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3NqosWaveMacHelper_methods[] = {
    {(char *) "Default", (PyCFunction) _wrap_PyNs3NqosWaveMacHelper_Default, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SetType", (PyCFunction) _wrap_PyNs3NqosWaveMacHelper_SetType, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3NqosWaveMacHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3NqosWaveMacHelper__tp_clear(PyNs3NqosWaveMacHelper *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::NqosWaveMacHelper *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3NqosWaveMacHelper__tp_traverse(PyNs3NqosWaveMacHelper *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3NqosWaveMacHelper__PythonHelper).name() )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3NqosWaveMacHelper__tp_dealloc(PyNs3NqosWaveMacHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3WifiMacHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3WifiMacHelper_wrapper_registry.end()) {
        PyNs3WifiMacHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3NqosWaveMacHelper__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3NqosWaveMacHelper__tp_richcompare (PyNs3NqosWaveMacHelper *PYBINDGEN_UNUSED(self), PyNs3NqosWaveMacHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3NqosWaveMacHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3NqosWaveMacHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.NqosWaveMacHelper",            /* tp_name */
    sizeof(PyNs3NqosWaveMacHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3NqosWaveMacHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3NqosWaveMacHelper__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3NqosWaveMacHelper__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3NqosWaveMacHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3NqosWaveMacHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3NqosWaveMacHelper, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3NqosWaveMacHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static int
_wrap_PyNs3OrganizationIdentifierChecker__tp_init(void)
{
    PyErr_SetString(PyExc_TypeError, "class 'OrganizationIdentifierChecker' cannot be constructed (have pure virtual methods but no helper class)");
    return -1;
}

static PyMethodDef PyNs3OrganizationIdentifierChecker_methods[] = {
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3OrganizationIdentifierChecker__tp_dealloc(PyNs3OrganizationIdentifierChecker *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::OrganizationIdentifierChecker *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3OrganizationIdentifierChecker__tp_richcompare (PyNs3OrganizationIdentifierChecker *PYBINDGEN_UNUSED(self), PyNs3OrganizationIdentifierChecker *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3OrganizationIdentifierChecker_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3OrganizationIdentifierChecker_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.OrganizationIdentifierChecker",            /* tp_name */
    sizeof(PyNs3OrganizationIdentifierChecker),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3OrganizationIdentifierChecker__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3OrganizationIdentifierChecker__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3OrganizationIdentifierChecker_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3OrganizationIdentifierChecker__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





static int
_wrap_PyNs3OrganizationIdentifierValue__tp_init__0(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::OrganizationIdentifierValue();
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3OrganizationIdentifierValue__tp_init__1(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3OrganizationIdentifierValue *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifierValue_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::OrganizationIdentifierValue(*((PyNs3OrganizationIdentifierValue *) arg0)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

static int
_wrap_PyNs3OrganizationIdentifierValue__tp_init__2(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3OrganizationIdentifier *value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &value)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    self->obj = new ns3::OrganizationIdentifierValue(*((PyNs3OrganizationIdentifier *) value)->obj);
    self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    return 0;
}

int _wrap_PyNs3OrganizationIdentifierValue__tp_init(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[3] = {0,};
    retval = _wrap_PyNs3OrganizationIdentifierValue__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3OrganizationIdentifierValue__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    retval = _wrap_PyNs3OrganizationIdentifierValue__tp_init__2(self, args, kwargs, &exceptions[2]);
    if (!exceptions[2]) {
        Py_DECREF(exceptions[0]);
        Py_DECREF(exceptions[1]);
        return retval;
    }
    error_list = PyList_New(3);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyList_SET_ITEM(error_list, 2, PyObject_Str(exceptions[2]));
    Py_DECREF(exceptions[2]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3OrganizationIdentifierValue_Set(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *value;
    const char *keywords[] = {"value", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &value)) {
        return NULL;
    }
    self->obj->Set(*((PyNs3OrganizationIdentifier *) value)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifierValue_Get(PyNs3OrganizationIdentifierValue *self)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *py_OrganizationIdentifier;
    
    ns3::OrganizationIdentifier retval = self->obj->Get();
    py_OrganizationIdentifier = PyObject_New(PyNs3OrganizationIdentifier, &PyNs3OrganizationIdentifier_Type);
    py_OrganizationIdentifier->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_OrganizationIdentifier->obj = new ns3::OrganizationIdentifier(retval);
    PyNs3OrganizationIdentifier_wrapper_registry[(void *) py_OrganizationIdentifier->obj] = (PyObject *) py_OrganizationIdentifier;
    py_retval = Py_BuildValue((char *) "N", py_OrganizationIdentifier);
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifierValue_Copy(PyNs3OrganizationIdentifierValue *self)
{
    PyObject *py_retval;
    ns3::Ptr< ns3::AttributeValue > retval;
    PyNs3AttributeValue *py_AttributeValue;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    retval = self->obj->Copy();
    if (!(const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)))) {
        Py_INCREF(Py_None);
        return Py_None;
    }
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_AttributeValue = NULL;
    } else {
        py_AttributeValue = (PyNs3AttributeValue *) wrapper_lookup_iter->second;
        Py_INCREF(py_AttributeValue);
    }
    
    if (py_AttributeValue == NULL) {
        wrapper_type = PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map.lookup_wrapper(typeid((*const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval)))), &PyNs3AttributeValue_Type);
        py_AttributeValue = PyObject_New(PyNs3AttributeValue, wrapper_type);
    
        py_AttributeValue->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval))->Ref();
        py_AttributeValue->obj = const_cast<ns3::AttributeValue *> (ns3::PeekPointer (retval));
        PyNs3Empty_wrapper_registry[(void *) py_AttributeValue->obj] = (PyObject *) py_AttributeValue;
    }
    py_retval = Py_BuildValue((char *) "N", py_AttributeValue);
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifierValue_SerializeToString(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    std::string retval;
    PyNs3AttributeChecker *checker;
    ns3::AttributeChecker *checker_ptr;
    const char *keywords[] = {"checker", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3AttributeChecker_Type, &checker)) {
        return NULL;
    }
    checker_ptr = (checker ? checker->obj : NULL);
    retval = self->obj->SerializeToString(ns3::Ptr< ns3::AttributeChecker  > (checker_ptr));
    py_retval = Py_BuildValue((char *) "s#", (retval).c_str(), (retval).size());
    return py_retval;
}


PyObject *
_wrap_PyNs3OrganizationIdentifierValue_DeserializeFromString(PyNs3OrganizationIdentifierValue *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    bool retval;
    const char *value;
    Py_ssize_t value_len;
    PyNs3AttributeChecker *checker;
    ns3::AttributeChecker *checker_ptr;
    const char *keywords[] = {"value", "checker", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#O!", (char **) keywords, &value, &value_len, &PyNs3AttributeChecker_Type, &checker)) {
        return NULL;
    }
    checker_ptr = (checker ? checker->obj : NULL);
    retval = self->obj->DeserializeFromString(std::string(value, value_len), ns3::Ptr< ns3::AttributeChecker  > (checker_ptr));
    py_retval = Py_BuildValue((char *) "N", PyBool_FromLong(retval));
    return py_retval;
}


static PyObject*
_wrap_PyNs3OrganizationIdentifierValue__copy__(PyNs3OrganizationIdentifierValue *self)
{

    PyNs3OrganizationIdentifierValue *py_copy;
    py_copy = PyObject_New(PyNs3OrganizationIdentifierValue, &PyNs3OrganizationIdentifierValue_Type);
    
    py_copy->obj = new ns3::OrganizationIdentifierValue(*self->obj);
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3Empty_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3OrganizationIdentifierValue_methods[] = {
    {(char *) "Set", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue_Set, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "Get", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue_Get, METH_NOARGS, NULL },
    {(char *) "Copy", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue_Copy, METH_NOARGS, NULL },
    {(char *) "SerializeToString", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue_SerializeToString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DeserializeFromString", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue_DeserializeFromString, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3OrganizationIdentifierValue__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
_wrap_PyNs3OrganizationIdentifierValue__tp_dealloc(PyNs3OrganizationIdentifierValue *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3Empty_wrapper_registry.end()) {
        PyNs3Empty_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    if (self->obj) {
        ns3::OrganizationIdentifierValue *tmp = self->obj;
        self->obj = NULL;
        tmp->Unref();
    }
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3OrganizationIdentifierValue__tp_richcompare (PyNs3OrganizationIdentifierValue *PYBINDGEN_UNUSED(self), PyNs3OrganizationIdentifierValue *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3OrganizationIdentifierValue_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3OrganizationIdentifierValue_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.OrganizationIdentifierValue",            /* tp_name */
    sizeof(PyNs3OrganizationIdentifierValue),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3OrganizationIdentifierValue__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3OrganizationIdentifierValue__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3OrganizationIdentifierValue_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3OrganizationIdentifierValue__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};





ns3::Ptr< ns3::WifiMac >
PyNs3QosWaveMacHelper__PythonHelper::Create() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::QosWifiMacHelper *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiMac > retval;
    PyNs3WifiMac *tmp_WifiMac;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Create"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    self_obj_before = reinterpret_cast< PyNs3QosWifiMacHelper* >(m_pyself)->obj;
    reinterpret_cast< PyNs3QosWifiMacHelper* >(m_pyself)->obj = const_cast< ns3::QosWifiMacHelper* >((const ns3::QosWifiMacHelper*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Create", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3QosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiMac_Type, &tmp_WifiMac)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3QosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
    
        PyErr_Print();
        Py_FatalError("Error detected, but parent virtual is pure virtual or private virtual, "
                      "and return is a class without trival constructor");
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiMac  > (tmp_WifiMac->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3QosWifiMacHelper* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


static int
_wrap_PyNs3QosWaveMacHelper__tp_init__0(PyNs3QosWaveMacHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3QosWaveMacHelper *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3QosWaveMacHelper_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3QosWaveMacHelper_Type)
    {
        self->obj = new PyNs3QosWaveMacHelper__PythonHelper(*((PyNs3QosWaveMacHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3QosWaveMacHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::QosWaveMacHelper(*((PyNs3QosWaveMacHelper *) arg0)->obj);
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

static int
_wrap_PyNs3QosWaveMacHelper__tp_init__1(PyNs3QosWaveMacHelper *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3QosWaveMacHelper_Type)
    {
        self->obj = new PyNs3QosWaveMacHelper__PythonHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3QosWaveMacHelper__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
    } else {
        // visibility: 'public'
        self->obj = new ns3::QosWaveMacHelper();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    }
    return 0;
}

int _wrap_PyNs3QosWaveMacHelper__tp_init(PyNs3QosWaveMacHelper *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3QosWaveMacHelper__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3QosWaveMacHelper__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3QosWaveMacHelper_Default(void)
{
    PyObject *py_retval;
    PyNs3QosWaveMacHelper *py_QosWaveMacHelper;
    
    ns3::QosWaveMacHelper retval = ns3::QosWaveMacHelper::Default();
    py_QosWaveMacHelper = PyObject_GC_New(PyNs3QosWaveMacHelper, &PyNs3QosWaveMacHelper_Type);
    py_QosWaveMacHelper->inst_dict = NULL;
    py_QosWaveMacHelper->inst_dict = NULL;
    py_QosWaveMacHelper->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_QosWaveMacHelper->obj = new ns3::QosWaveMacHelper(retval);
    PyNs3WifiMacHelper_wrapper_registry[(void *) py_QosWaveMacHelper->obj] = (PyObject *) py_QosWaveMacHelper;
    py_retval = Py_BuildValue((char *) "N", py_QosWaveMacHelper);
    return py_retval;
}


PyObject *
_wrap_PyNs3QosWaveMacHelper_SetType(PyNs3QosWaveMacHelper *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    const char *type;
    Py_ssize_t type_len;
    const char *n0 = NULL;
    Py_ssize_t n0_len;
    PyNs3AttributeValue *v0 = NULL;
    ns3::EmptyAttributeValue v0_default = ns3::EmptyAttributeValue();
    const char *n1 = NULL;
    Py_ssize_t n1_len;
    PyNs3AttributeValue *v1 = NULL;
    ns3::EmptyAttributeValue v1_default = ns3::EmptyAttributeValue();
    const char *n2 = NULL;
    Py_ssize_t n2_len;
    PyNs3AttributeValue *v2 = NULL;
    ns3::EmptyAttributeValue v2_default = ns3::EmptyAttributeValue();
    const char *n3 = NULL;
    Py_ssize_t n3_len;
    PyNs3AttributeValue *v3 = NULL;
    ns3::EmptyAttributeValue v3_default = ns3::EmptyAttributeValue();
    const char *n4 = NULL;
    Py_ssize_t n4_len;
    PyNs3AttributeValue *v4 = NULL;
    ns3::EmptyAttributeValue v4_default = ns3::EmptyAttributeValue();
    const char *n5 = NULL;
    Py_ssize_t n5_len;
    PyNs3AttributeValue *v5 = NULL;
    ns3::EmptyAttributeValue v5_default = ns3::EmptyAttributeValue();
    const char *n6 = NULL;
    Py_ssize_t n6_len;
    PyNs3AttributeValue *v6 = NULL;
    ns3::EmptyAttributeValue v6_default = ns3::EmptyAttributeValue();
    const char *n7 = NULL;
    Py_ssize_t n7_len;
    PyNs3AttributeValue *v7 = NULL;
    ns3::EmptyAttributeValue v7_default = ns3::EmptyAttributeValue();
    PyNs3QosWaveMacHelper__PythonHelper *helper_class = dynamic_cast<PyNs3QosWaveMacHelper__PythonHelper*> (self->obj);
    const char *keywords[] = {"type", "n0", "v0", "n1", "v1", "n2", "v2", "n3", "v3", "n4", "v4", "n5", "v5", "n6", "v6", "n7", "v7", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "s#|s#O!s#O!s#O!s#O!s#O!s#O!s#O!s#O!", (char **) keywords, &type, &type_len, &n0, &n0_len, &PyNs3AttributeValue_Type, &v0, &n1, &n1_len, &PyNs3AttributeValue_Type, &v1, &n2, &n2_len, &PyNs3AttributeValue_Type, &v2, &n3, &n3_len, &PyNs3AttributeValue_Type, &v3, &n4, &n4_len, &PyNs3AttributeValue_Type, &v4, &n5, &n5_len, &PyNs3AttributeValue_Type, &v5, &n6, &n6_len, &PyNs3AttributeValue_Type, &v6, &n7, &n7_len, &PyNs3AttributeValue_Type, &v7)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetType(std::string(type, type_len), (n0 ? std::string(n0, n0_len) : ""), (v0 ? (*((PyNs3AttributeValue *) v0)->obj) : v0_default), (n1 ? std::string(n1, n1_len) : ""), (v1 ? (*((PyNs3AttributeValue *) v1)->obj) : v1_default), (n2 ? std::string(n2, n2_len) : ""), (v2 ? (*((PyNs3AttributeValue *) v2)->obj) : v2_default), (n3 ? std::string(n3, n3_len) : ""), (v3 ? (*((PyNs3AttributeValue *) v3)->obj) : v3_default), (n4 ? std::string(n4, n4_len) : ""), (v4 ? (*((PyNs3AttributeValue *) v4)->obj) : v4_default), (n5 ? std::string(n5, n5_len) : ""), (v5 ? (*((PyNs3AttributeValue *) v5)->obj) : v5_default), (n6 ? std::string(n6, n6_len) : ""), (v6 ? (*((PyNs3AttributeValue *) v6)->obj) : v6_default), (n7 ? std::string(n7, n7_len) : ""), (v7 ? (*((PyNs3AttributeValue *) v7)->obj) : v7_default))) : (self->obj->ns3::QosWaveMacHelper::SetType(std::string(type, type_len), (n0 ? std::string(n0, n0_len) : ""), (v0 ? (*((PyNs3AttributeValue *) v0)->obj) : v0_default), (n1 ? std::string(n1, n1_len) : ""), (v1 ? (*((PyNs3AttributeValue *) v1)->obj) : v1_default), (n2 ? std::string(n2, n2_len) : ""), (v2 ? (*((PyNs3AttributeValue *) v2)->obj) : v2_default), (n3 ? std::string(n3, n3_len) : ""), (v3 ? (*((PyNs3AttributeValue *) v3)->obj) : v3_default), (n4 ? std::string(n4, n4_len) : ""), (v4 ? (*((PyNs3AttributeValue *) v4)->obj) : v4_default), (n5 ? std::string(n5, n5_len) : ""), (v5 ? (*((PyNs3AttributeValue *) v5)->obj) : v5_default), (n6 ? std::string(n6, n6_len) : ""), (v6 ? (*((PyNs3AttributeValue *) v6)->obj) : v6_default), (n7 ? std::string(n7, n7_len) : ""), (v7 ? (*((PyNs3AttributeValue *) v7)->obj) : v7_default)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


static PyObject*
_wrap_PyNs3QosWaveMacHelper__copy__(PyNs3QosWaveMacHelper *self)
{

    PyNs3QosWaveMacHelper *py_copy;
    py_copy = PyObject_GC_New(PyNs3QosWaveMacHelper, &PyNs3QosWaveMacHelper_Type);
    py_copy->inst_dict = NULL;
    py_copy->obj = new ns3::QosWaveMacHelper(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3WifiMacHelper_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3QosWaveMacHelper_methods[] = {
    {(char *) "Default", (PyCFunction) _wrap_PyNs3QosWaveMacHelper_Default, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "SetType", (PyCFunction) _wrap_PyNs3QosWaveMacHelper_SetType, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3QosWaveMacHelper__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3QosWaveMacHelper__tp_clear(PyNs3QosWaveMacHelper *self)
{
    Py_CLEAR(self->inst_dict);
        ns3::QosWaveMacHelper *tmp = self->obj;
    self->obj = NULL;
    if (!(self->flags&PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED)) {
        delete tmp;
    }
}


static int
PyNs3QosWaveMacHelper__tp_traverse(PyNs3QosWaveMacHelper *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3QosWaveMacHelper__PythonHelper).name() )
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3QosWaveMacHelper__tp_dealloc(PyNs3QosWaveMacHelper *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3WifiMacHelper_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3WifiMacHelper_wrapper_registry.end()) {
        PyNs3WifiMacHelper_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3QosWaveMacHelper__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3QosWaveMacHelper__tp_richcompare (PyNs3QosWaveMacHelper *PYBINDGEN_UNUSED(self), PyNs3QosWaveMacHelper *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3QosWaveMacHelper_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3QosWaveMacHelper_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.QosWaveMacHelper",            /* tp_name */
    sizeof(PyNs3QosWaveMacHelper),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3QosWaveMacHelper__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3QosWaveMacHelper__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3QosWaveMacHelper__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3QosWaveMacHelper__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3QosWaveMacHelper_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3QosWaveMacHelper, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3QosWaveMacHelper__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3WaveMacLow__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3WaveMacLow *self)
{
    PyObject *py_retval;
    PyNs3WaveMacLow__PythonHelper *helper = dynamic_cast< PyNs3WaveMacLow__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WaveMacLow__PythonHelper::_wrap_DoInitialize(PyNs3WaveMacLow *self)
{
    PyObject *py_retval;
    PyNs3WaveMacLow__PythonHelper *helper = dynamic_cast< PyNs3WaveMacLow__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3WaveMacLow__PythonHelper::_wrap_NotifyNewAggregate(PyNs3WaveMacLow *self)
{
    PyObject *py_retval;
    PyNs3WaveMacLow__PythonHelper *helper = dynamic_cast< PyNs3WaveMacLow__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::WifiTxVector
PyNs3WaveMacLow__PythonHelper::GetDataTxVector(ns3::Ptr< ns3::Packet const > packet, ns3::WifiMacHeader const *hdr) const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::WaveMacLow *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    PyNs3WifiTxVector *tmp_WifiTxVector;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetDataTxVector"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiTxVector();
    }
    self_obj_before = reinterpret_cast< PyNs3WaveMacLow* >(m_pyself)->obj;
    reinterpret_cast< PyNs3WaveMacLow* >(m_pyself)->obj = const_cast< ns3::WaveMacLow* >((const ns3::WaveMacLow*) this);
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) hdr);
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiMacHeader = NULL;
    } else {
        py_WifiMacHeader = (PyNs3WifiMacHeader *) wrapper_lookup_iter2->second;
        Py_INCREF(py_WifiMacHeader);
    }
    
    if (py_WifiMacHeader == NULL)
    {
        py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
        py_WifiMacHeader->inst_dict = NULL;
        py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        py_WifiMacHeader->obj = new ns3::WifiMacHeader(*hdr);
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetDataTxVector", (char *) "NN", py_Packet, py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3WaveMacLow* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiTxVector();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiTxVector_Type, &tmp_WifiTxVector)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3WaveMacLow* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::WifiTxVector();
    }
    ns3::WifiTxVector retval = *tmp_WifiTxVector->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3WaveMacLow* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WaveMacLow__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::MacLow *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3MacLow* >(m_pyself)->obj;
    reinterpret_cast< PyNs3MacLow* >(m_pyself)->obj = (ns3::MacLow*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3MacLow* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3MacLow* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3MacLow* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3WaveMacLow__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3WaveMacLow__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveMacLow__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3WaveMacLow__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}


static int
_wrap_PyNs3WaveMacLow__tp_init__0(PyNs3WaveMacLow *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    PyNs3WaveMacLow *arg0;
    const char *keywords[] = {"arg0", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WaveMacLow_Type, &arg0)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3WaveMacLow_Type)
    {
        self->obj = new PyNs3WaveMacLow__PythonHelper(*((PyNs3WaveMacLow *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3WaveMacLow__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WaveMacLow(*((PyNs3WaveMacLow *) arg0)->obj);
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

static int
_wrap_PyNs3WaveMacLow__tp_init__1(PyNs3WaveMacLow *self, PyObject *args, PyObject *kwargs, PyObject **return_exception)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        {
            PyObject *exc_type, *traceback;
            PyErr_Fetch(&exc_type, return_exception, &traceback);
            Py_XDECREF(exc_type);
            Py_XDECREF(traceback);
        }
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3WaveMacLow_Type)
    {
        self->obj = new PyNs3WaveMacLow__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3WaveMacLow__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::WaveMacLow();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}

int _wrap_PyNs3WaveMacLow__tp_init(PyNs3WaveMacLow *self, PyObject *args, PyObject *kwargs)
{
    int retval;
    PyObject *error_list;
    PyObject *exceptions[2] = {0,};
    retval = _wrap_PyNs3WaveMacLow__tp_init__0(self, args, kwargs, &exceptions[0]);
    if (!exceptions[0]) {
        return retval;
    }
    retval = _wrap_PyNs3WaveMacLow__tp_init__1(self, args, kwargs, &exceptions[1]);
    if (!exceptions[1]) {
        Py_DECREF(exceptions[0]);
        return retval;
    }
    error_list = PyList_New(2);
    PyList_SET_ITEM(error_list, 0, PyObject_Str(exceptions[0]));
    Py_DECREF(exceptions[0]);
    PyList_SET_ITEM(error_list, 1, PyObject_Str(exceptions[1]));
    Py_DECREF(exceptions[1]);
    PyErr_SetObject(PyExc_TypeError, error_list);
    Py_DECREF(error_list);
    return -1;
}


PyObject *
_wrap_PyNs3WaveMacLow_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::WaveMacLow::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}


static PyObject*
_wrap_PyNs3WaveMacLow__copy__(PyNs3WaveMacLow *self)
{

    PyNs3WaveMacLow *py_copy;
    py_copy = PyObject_GC_New(PyNs3WaveMacLow, &PyNs3WaveMacLow_Type);
    py_copy->inst_dict = NULL;
    
    py_copy->obj = new ns3::WaveMacLow(*self->obj);
    py_copy->inst_dict = NULL;
    py_copy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    PyNs3ObjectBase_wrapper_registry[(void *) py_copy->obj] = (PyObject *) py_copy;
    return (PyObject*) py_copy;
}

static PyMethodDef PyNs3WaveMacLow_methods[] = {
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3WaveMacLow_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3WaveMacLow__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3WaveMacLow__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3WaveMacLow__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "__copy__", (PyCFunction) _wrap_PyNs3WaveMacLow__copy__, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static void
PyNs3WaveMacLow__tp_clear(PyNs3WaveMacLow *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::WaveMacLow *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3WaveMacLow__tp_traverse(PyNs3WaveMacLow *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3WaveMacLow__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3WaveMacLow__tp_dealloc(PyNs3WaveMacLow *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3WaveMacLow__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3WaveMacLow__tp_richcompare (PyNs3WaveMacLow *PYBINDGEN_UNUSED(self), PyNs3WaveMacLow *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3WaveMacLow_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3WaveMacLow_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.WaveMacLow",            /* tp_name */
    sizeof(PyNs3WaveMacLow),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3WaveMacLow__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3WaveMacLow__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3WaveMacLow__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3WaveMacLow__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3WaveMacLow_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3WaveMacLow, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3WaveMacLow__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_NotifyConstructionCompleted(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyConstructionCompleted of class ObjectBase is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyConstructionCompleted__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_TxOk(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiMacHeader *hdr;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TxOk of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->TxOk__parent_caller(*((PyNs3WifiMacHeader *) hdr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_DoInitialize(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoInitialize of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoInitialize__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_NotifyNewAggregate(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method NotifyNewAggregate of class Object is protected and can only be called by a subclass");
        return NULL;
    }
    helper->NotifyNewAggregate__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_SendAddBaResponse(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3MgtAddBaRequestHeader *reqHdr;
    ns3::MgtAddBaRequestHeader *reqHdr_ptr;
    PyNs3Mac48Address *originator;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"reqHdr", "originator", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3MgtAddBaRequestHeader_Type, &reqHdr, &PyNs3Mac48Address_Type, &originator)) {
        return NULL;
    }
    reqHdr_ptr = (reqHdr ? reqHdr->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method SendAddBaResponse of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->SendAddBaResponse__parent_caller(reqHdr_ptr, *((PyNs3Mac48Address *) originator)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_TxFailed(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3WifiMacHeader *hdr;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method TxFailed of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->TxFailed__parent_caller(*((PyNs3WifiMacHeader *) hdr)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_DoDispose(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DoDispose of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DoDispose__parent_caller();
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_DeaggregateAmsduAndForward(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *aggregatedPacket;
    ns3::Packet *aggregatedPacket_ptr;
    PyNs3WifiMacHeader *hdr;
    ns3::WifiMacHeader *hdr_ptr;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"aggregatedPacket", "hdr", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &aggregatedPacket, &PyNs3WifiMacHeader_Type, &hdr)) {
        return NULL;
    }
    aggregatedPacket_ptr = (aggregatedPacket ? aggregatedPacket->obj : NULL);
    hdr_ptr = (hdr ? hdr->obj : NULL);
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method DeaggregateAmsduAndForward of class RegularWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->DeaggregateAmsduAndForward__parent_caller(ns3::Ptr< ns3::Packet  > (aggregatedPacket_ptr), hdr_ptr);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

PyObject *
PyNs3OcbWifiMac__PythonHelper::_wrap_FinishConfigureStandard(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    ns3::WifiPhyStandard standard;
    PyNs3OcbWifiMac__PythonHelper *helper = dynamic_cast< PyNs3OcbWifiMac__PythonHelper* >(self->obj);
    const char *keywords[] = {"standard", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "i", (char **) keywords, &standard)) {
        return NULL;
    }
    if (helper == NULL) {
        PyErr_SetString(PyExc_TypeError, "Method FinishConfigureStandard of class OcbWifiMac is protected and can only be called by a subclass");
        return NULL;
    }
    helper->FinishConfigureStandard__parent_caller(standard);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}

ns3::Ssid
PyNs3OcbWifiMac__PythonHelper::GetSsid() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Ssid *tmp_Ssid;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSsid"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetSsid();
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = const_cast< ns3::OcbWifiMac* >((const ns3::OcbWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSsid", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetSsid();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Ssid_Type, &tmp_Ssid)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetSsid();
    }
    ns3::Ssid retval = *tmp_Ssid->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetSsid(ns3::Ssid ssid)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Ssid *py_Ssid;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSsid"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::OcbWifiMac::SetSsid(ssid);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = (ns3::OcbWifiMac*) this;
    py_Ssid = PyObject_New(PyNs3Ssid, &PyNs3Ssid_Type);
    
    py_Ssid->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ssid->obj = new ns3::Ssid(ssid);
    PyNs3Empty_wrapper_registry[(void *) py_Ssid->obj] = (PyObject *) py_Ssid;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSsid", (char *) "N", py_Ssid);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetBssid(ns3::Mac48Address bssid)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetBssid"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::OcbWifiMac::SetBssid(bssid);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = (ns3::OcbWifiMac*) this;
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(bssid);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetBssid", (char *) "N", py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Mac48Address
PyNs3OcbWifiMac__PythonHelper::GetBssid() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBssid"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetBssid();
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = const_cast< ns3::OcbWifiMac* >((const ns3::OcbWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBssid", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetBssid();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::OcbWifiMac::GetBssid();
    }
    ns3::Mac48Address retval = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}



void
PyNs3OcbWifiMac__PythonHelper::Enqueue(ns3::Ptr< ns3::Packet const > packet, ns3::Mac48Address to)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Enqueue"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::OcbWifiMac::Enqueue(packet, to);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = (ns3::OcbWifiMac*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(to);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Enqueue", (char *) "NN", py_Packet, py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::FinishConfigureStandard(ns3::WifiPhyStandard standard)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "FinishConfigureStandard"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::OcbWifiMac::FinishConfigureStandard(standard);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = (ns3::OcbWifiMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "FinishConfigureStandard", (char *) "i", standard);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::Receive(ns3::Ptr< ns3::Packet > packet, ns3::WifiMacHeader const *hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::OcbWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Receive"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = (ns3::OcbWifiMac*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) hdr);
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiMacHeader = NULL;
    } else {
        py_WifiMacHeader = (PyNs3WifiMacHeader *) wrapper_lookup_iter2->second;
        Py_INCREF(py_WifiMacHeader);
    }
    
    if (py_WifiMacHeader == NULL)
    {
        py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
        py_WifiMacHeader->inst_dict = NULL;
        py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        py_WifiMacHeader->obj = new ns3::WifiMacHeader(*hdr);
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Receive", (char *) "NN", py_Packet, py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3OcbWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetBasicBlockAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetBasicBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetBasicBlockAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetBasicBlockAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}


void
PyNs3OcbWifiMac__PythonHelper::SetWifiPhy(ns3::Ptr< ns3::WifiPhy > phy)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiPhy *py_WifiPhy;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetWifiPhy"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetWifiPhy(phy);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiPhy = NULL;
    } else {
        py_WifiPhy = (PyNs3WifiPhy *) wrapper_lookup_iter->second;
        Py_INCREF(py_WifiPhy);
    }
    
    if (py_WifiPhy == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy))), &PyNs3WifiPhy_Type);
        py_WifiPhy = PyObject_GC_New(PyNs3WifiPhy, wrapper_type);
        py_WifiPhy->inst_dict = NULL;
    
        py_WifiPhy->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy))->Ref();
        py_WifiPhy->obj = const_cast<ns3::WifiPhy *> (ns3::PeekPointer (phy));
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiPhy->obj] = (PyObject *) py_WifiPhy;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetWifiPhy", (char *) "N", py_WifiPhy);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

bool
PyNs3OcbWifiMac__PythonHelper::SupportsSendFrom() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    bool retval;
    PyObject *py_boolretval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SupportsSendFrom"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::SupportsSendFrom();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SupportsSendFrom", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::SupportsSendFrom();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O", &py_boolretval)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::SupportsSendFrom();
    }
    retval = PyObject_IsTrue(py_boolretval);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetPifs(ns3::Time pifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetPifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetPifs(pifs);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(pifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetPifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetEifsNoDifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetEifsNoDifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetEifsNoDifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetEifsNoDifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetPromisc()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetPromisc"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetPromisc();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetPromisc", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetSlot(ns3::Time slotTime)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSlot"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetSlot(slotTime);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(slotTime);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSlot", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetPifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetPifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetPifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetPifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetRifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetRifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetRifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetRifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetRifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetRifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::Enqueue(ns3::Ptr< ns3::Packet const > packet, ns3::Mac48Address to, ns3::Mac48Address from)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3Mac48Address *py_Mac48Address;
    PyNs3Mac48Address *py_Mac48Address2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "Enqueue"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::Enqueue(packet, to, from);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (packet)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (packet))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (packet))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (packet));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(to);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_Mac48Address2 = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address2->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address2->obj = new ns3::Mac48Address(from);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address2->obj] = (PyObject *) py_Mac48Address2;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "Enqueue", (char *) "NNN", py_Packet, py_Mac48Address, py_Mac48Address2);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetCompressedBlockAckTimeout(ns3::Time blockAckTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetCompressedBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetCompressedBlockAckTimeout(blockAckTimeout);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(blockAckTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetCompressedBlockAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Ptr< ns3::WifiPhy >
PyNs3OcbWifiMac__PythonHelper::GetWifiPhy() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiPhy > retval;
    PyNs3WifiPhy *tmp_WifiPhy;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetWifiPhy"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetWifiPhy", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiPhy_Type, &tmp_WifiPhy)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiPhy();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiPhy  > (tmp_WifiPhy->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetBasicBlockAckTimeout(ns3::Time blockAckTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetBasicBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetBasicBlockAckTimeout(blockAckTimeout);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(blockAckTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetBasicBlockAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetCtsTimeout(ns3::Time ctsTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetCtsTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetCtsTimeout(ctsTimeout);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(ctsTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetCtsTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetCtsTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetCtsTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetCtsTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCtsTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Mac48Address
PyNs3OcbWifiMac__PythonHelper::GetAddress() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *tmp_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAddress"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAddress", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Mac48Address_Type, &tmp_Mac48Address)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAddress();
    }
    ns3::Mac48Address retval = *tmp_Mac48Address->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetSlot() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSlot"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSlot", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSlot();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetSifs(ns3::Time sifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetSifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetSifs(sifs);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(sifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetSifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetAddress(ns3::Mac48Address address)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAddress"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetAddress(address);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(address);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAddress", (char *) "N", py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetWifiRemoteStationManager(ns3::Ptr< ns3::WifiRemoteStationManager > stationManager)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiRemoteStationManager *py_WifiRemoteStationManager;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetWifiRemoteStationManager"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetWifiRemoteStationManager(stationManager);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager)));
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiRemoteStationManager = NULL;
    } else {
        py_WifiRemoteStationManager = (PyNs3WifiRemoteStationManager *) wrapper_lookup_iter->second;
        Py_INCREF(py_WifiRemoteStationManager);
    }
    
    if (py_WifiRemoteStationManager == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.lookup_wrapper(typeid(*const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager))), &PyNs3WifiRemoteStationManager_Type);
        py_WifiRemoteStationManager = PyObject_GC_New(PyNs3WifiRemoteStationManager, wrapper_type);
        py_WifiRemoteStationManager->inst_dict = NULL;
    
        py_WifiRemoteStationManager->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager))->Ref();
        py_WifiRemoteStationManager->obj = const_cast<ns3::WifiRemoteStationManager *> (ns3::PeekPointer (stationManager));
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiRemoteStationManager->obj] = (PyObject *) py_WifiRemoteStationManager;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetWifiRemoteStationManager", (char *) "N", py_WifiRemoteStationManager);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetCompressedBlockAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetCompressedBlockAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetCompressedBlockAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetCompressedBlockAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::SetRifs(ns3::Time rifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetRifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetRifs(rifs);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(rifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetRifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetAckTimeout(ns3::Time ackTimeout)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetAckTimeout(ackTimeout);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(ackTimeout);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetAckTimeout", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SetEifsNoDifs(ns3::Time eifsNoDifs)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *py_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SetEifsNoDifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SetEifsNoDifs(eifsNoDifs);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_Time = PyObject_New(PyNs3Time, &PyNs3Time_Type);
    py_Time->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Time->obj = new ns3::Time(eifsNoDifs);
    PyNs3Time_wrapper_registry[(void *) py_Time->obj] = (PyObject *) py_Time;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SetEifsNoDifs", (char *) "N", py_Time);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetAckTimeout() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetAckTimeout"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetAckTimeout", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetAckTimeout();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Time
PyNs3OcbWifiMac__PythonHelper::GetSifs() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Time *tmp_Time;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetSifs"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetSifs", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3Time_Type, &tmp_Time)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetSifs();
    }
    ns3::Time retval = *tmp_Time->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

ns3::Ptr< ns3::WifiRemoteStationManager >
PyNs3OcbWifiMac__PythonHelper::GetWifiRemoteStationManager() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    ns3::Ptr< ns3::WifiRemoteStationManager > retval;
    PyNs3WifiRemoteStationManager *tmp_WifiRemoteStationManager;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetWifiRemoteStationManager"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = const_cast< ns3::RegularWifiMac* >((const ns3::RegularWifiMac*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetWifiRemoteStationManager", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiRemoteStationManager_Type, &tmp_WifiRemoteStationManager)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::RegularWifiMac::GetWifiRemoteStationManager();
    }
    // dangerous!
    retval = ns3::Ptr< ns3::WifiRemoteStationManager  > (tmp_WifiRemoteStationManager->obj);
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::DoInitialize()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoInitialize"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::DoInitialize();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoInitialize", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::DoDispose()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DoDispose"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::DoDispose();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DoDispose", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::TxOk(ns3::WifiMacHeader const & hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "TxOk"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::TxOk(hdr);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMacHeader->obj = new ns3::WifiMacHeader(hdr);
    PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "TxOk", (char *) "N", py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::TxFailed(ns3::WifiMacHeader const & hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "TxFailed"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::TxFailed(hdr);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->inst_dict = NULL;
    py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMacHeader->obj = new ns3::WifiMacHeader(hdr);
    PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "TxFailed", (char *) "N", py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::DeaggregateAmsduAndForward(ns3::Ptr< ns3::Packet > aggregatedPacket, ns3::WifiMacHeader const *hdr)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3Packet *py_Packet;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyTypeObject *wrapper_type = 0;
    PyNs3WifiMacHeader *py_WifiMacHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter2;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "DeaggregateAmsduAndForward"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::DeaggregateAmsduAndForward(aggregatedPacket, hdr);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3Empty_wrapper_registry.find((void *) const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket)));
    if (wrapper_lookup_iter == PyNs3Empty_wrapper_registry.end()) {
        py_Packet = NULL;
    } else {
        py_Packet = (PyNs3Packet *) wrapper_lookup_iter->second;
        Py_INCREF(py_Packet);
    }
    
    if (py_Packet == NULL)
    {
        wrapper_type = PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map.lookup_wrapper(typeid(*const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket))), &PyNs3Packet_Type);
        py_Packet = PyObject_New(PyNs3Packet, wrapper_type);
    
        py_Packet->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket))->Ref();
        py_Packet->obj = const_cast<ns3::Packet *> (ns3::PeekPointer (aggregatedPacket));
        PyNs3Empty_wrapper_registry[(void *) py_Packet->obj] = (PyObject *) py_Packet;
    }
    wrapper_lookup_iter2 = PyNs3ObjectBase_wrapper_registry.find((void *) hdr);
    if (wrapper_lookup_iter2 == PyNs3ObjectBase_wrapper_registry.end()) {
        py_WifiMacHeader = NULL;
    } else {
        py_WifiMacHeader = (PyNs3WifiMacHeader *) wrapper_lookup_iter2->second;
        Py_INCREF(py_WifiMacHeader);
    }
    
    if (py_WifiMacHeader == NULL)
    {
        py_WifiMacHeader = PyObject_GC_New(PyNs3WifiMacHeader, &PyNs3WifiMacHeader_Type);
        py_WifiMacHeader->inst_dict = NULL;
        py_WifiMacHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        py_WifiMacHeader->obj = new ns3::WifiMacHeader(*hdr);
        PyNs3ObjectBase_wrapper_registry[(void *) py_WifiMacHeader->obj] = (PyObject *) py_WifiMacHeader;
    }
    py_retval = PyObject_CallMethod(m_pyself, (char *) "DeaggregateAmsduAndForward", (char *) "NN", py_Packet, py_WifiMacHeader);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::SendAddBaResponse(ns3::MgtAddBaRequestHeader const *reqHdr, ns3::Mac48Address originator)
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::RegularWifiMac *self_obj_before;
    PyObject *py_retval;
    PyNs3MgtAddBaRequestHeader *py_MgtAddBaRequestHeader;
    std::map<void*, PyObject*>::const_iterator wrapper_lookup_iter;
    PyNs3Mac48Address *py_Mac48Address;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "SendAddBaResponse"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::RegularWifiMac::SendAddBaResponse(reqHdr, originator);
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj;
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = (ns3::RegularWifiMac*) this;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) reqHdr);
    if (wrapper_lookup_iter == PyNs3ObjectBase_wrapper_registry.end()) {
        py_MgtAddBaRequestHeader = NULL;
    } else {
        py_MgtAddBaRequestHeader = (PyNs3MgtAddBaRequestHeader *) wrapper_lookup_iter->second;
        Py_INCREF(py_MgtAddBaRequestHeader);
    }
    
    if (py_MgtAddBaRequestHeader == NULL)
    {
        py_MgtAddBaRequestHeader = PyObject_GC_New(PyNs3MgtAddBaRequestHeader, &PyNs3MgtAddBaRequestHeader_Type);
        py_MgtAddBaRequestHeader->inst_dict = NULL;
        py_MgtAddBaRequestHeader->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        py_MgtAddBaRequestHeader->obj = new ns3::MgtAddBaRequestHeader(*reqHdr);
        PyNs3ObjectBase_wrapper_registry[(void *) py_MgtAddBaRequestHeader->obj] = (PyObject *) py_MgtAddBaRequestHeader;
    }
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(originator);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "SendAddBaResponse", (char *) "NN", py_MgtAddBaRequestHeader, py_Mac48Address);
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3RegularWifiMac* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

ns3::TypeId
PyNs3OcbWifiMac__PythonHelper::GetInstanceTypeId() const
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    PyNs3TypeId *tmp_TypeId;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "GetInstanceTypeId"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = const_cast< ns3::Object* >((const ns3::Object*) this);
    py_retval = PyObject_CallMethod(m_pyself, (char *) "GetInstanceTypeId", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    py_retval = Py_BuildValue((char*) "(N)", py_retval);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3TypeId_Type, &tmp_TypeId)) {
        PyErr_Print();
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return ns3::Object::GetInstanceTypeId();
    }
    ns3::TypeId retval = *tmp_TypeId->obj;
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return retval;
}

void
PyNs3OcbWifiMac__PythonHelper::NotifyNewAggregate()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::Object *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyNewAggregate"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::Object::NotifyNewAggregate();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3Object* >(m_pyself)->obj;
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = (ns3::Object*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyNewAggregate", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3Object* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

void
PyNs3OcbWifiMac__PythonHelper::NotifyConstructionCompleted()
{
    PyGILState_STATE __py_gil_state;
    PyObject *py_method;
    ns3::ObjectBase *self_obj_before;
    PyObject *py_retval;
    
    __py_gil_state = (PyEval_ThreadsInitialized() ? PyGILState_Ensure() : (PyGILState_STATE) 0);
    py_method = PyObject_GetAttrString(m_pyself, (char *) "NotifyConstructionCompleted"); PyErr_Clear();
    if (py_method == NULL || Py_TYPE(py_method) == &PyCFunction_Type) {
        ns3::ObjectBase::NotifyConstructionCompleted();
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    self_obj_before = reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj;
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = (ns3::ObjectBase*) this;
    py_retval = PyObject_CallMethod(m_pyself, (char *) "NotifyConstructionCompleted", (char *) "");
    if (py_retval == NULL) {
        PyErr_Print();
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    if (py_retval != Py_None) {
        PyErr_SetString(PyExc_TypeError, "function/method should return None");
        Py_DECREF(py_retval);
        reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
        Py_XDECREF(py_method);
        if (PyEval_ThreadsInitialized())
            PyGILState_Release(__py_gil_state);
        return;
    }
    Py_DECREF(py_retval);
    reinterpret_cast< PyNs3ObjectBase* >(m_pyself)->obj = self_obj_before;
    Py_XDECREF(py_method);
    if (PyEval_ThreadsInitialized())
        PyGILState_Release(__py_gil_state);
    return;
}

static int
_wrap_PyNs3OcbWifiMac__tp_init(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "", (char **) keywords)) {
        return -1;
    }
    if (Py_TYPE(self) != &PyNs3OcbWifiMac_Type)
    {
        self->obj = new PyNs3OcbWifiMac__PythonHelper();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ((PyNs3OcbWifiMac__PythonHelper*) self->obj)->set_pyobj((PyObject *)self);
        ns3::CompleteConstruct(self->obj);
    } else {
        // visibility: 'public'
        self->obj = new ns3::OcbWifiMac();
        self->obj->Ref ();
        self->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
        ns3::CompleteConstruct(self->obj);
    }
    return 0;
}


PyObject *
_wrap_PyNs3OcbWifiMac_SendVsc(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *vsc;
    ns3::Packet *vsc_ptr;
    PyNs3Mac48Address *peer;
    PyNs3OrganizationIdentifier *oi;
    const char *keywords[] = {"vsc", "peer", "oi", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!O!", (char **) keywords, &PyNs3Packet_Type, &vsc, &PyNs3Mac48Address_Type, &peer, &PyNs3OrganizationIdentifier_Type, &oi)) {
        return NULL;
    }
    vsc_ptr = (vsc ? vsc->obj : NULL);
    self->obj->SendVsc(ns3::Ptr< ns3::Packet  > (vsc_ptr), *((PyNs3Mac48Address *) peer)->obj, *((PyNs3OrganizationIdentifier *) oi)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_SetSsid(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Ssid *ssid;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"ssid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Ssid_Type, &ssid)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetSsid(*((PyNs3Ssid *) ssid)->obj)) : (self->obj->ns3::OcbWifiMac::SetSsid(*((PyNs3Ssid *) ssid)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_GetSsid(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    PyNs3Ssid *py_Ssid;
    
    ns3::Ssid retval = (helper_class == NULL)? (self->obj->GetSsid()) : (self->obj->ns3::OcbWifiMac::GetSsid());
    py_Ssid = PyObject_New(PyNs3Ssid, &PyNs3Ssid_Type);
    
    py_Ssid->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Ssid->obj = new ns3::Ssid(retval);
    PyNs3Empty_wrapper_registry[(void *) py_Ssid->obj] = (PyObject *) py_Ssid;
    py_retval = Py_BuildValue((char *) "N", py_Ssid);
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_SetBssid(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Mac48Address *bssid;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"bssid", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3Mac48Address_Type, &bssid)) {
        return NULL;
    }
    (helper_class == NULL)? (self->obj->SetBssid(*((PyNs3Mac48Address *) bssid)->obj)) : (self->obj->ns3::OcbWifiMac::SetBssid(*((PyNs3Mac48Address *) bssid)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_SetLinkDownCallback(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *linkDown;
    ns3::Ptr<PythonCallbackImpl1> linkDown_cb_impl;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"linkDown", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &linkDown)) {
        return NULL;
    }
    if (!PyCallable_Check(linkDown)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'linkDown' must be callbale");
        return NULL;
    }
    linkDown_cb_impl = ns3::Create<PythonCallbackImpl1> (linkDown);
    (helper_class == NULL)? (self->obj->SetLinkDownCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkDown_cb_impl))) : (self->obj->ns3::OcbWifiMac::SetLinkDownCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkDown_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_GetBssid(PyNs3OcbWifiMac *self)
{
    PyObject *py_retval;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    PyNs3Mac48Address *py_Mac48Address;
    
    ns3::Mac48Address retval = (helper_class == NULL)? (self->obj->GetBssid()) : (self->obj->ns3::OcbWifiMac::GetBssid());
    py_Mac48Address = PyObject_New(PyNs3Mac48Address, &PyNs3Mac48Address_Type);
    py_Mac48Address->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_Mac48Address->obj = new ns3::Mac48Address(retval);
    PyNs3Mac48Address_wrapper_registry[(void *) py_Mac48Address->obj] = (PyObject *) py_Mac48Address;
    py_retval = Py_BuildValue((char *) "N", py_Mac48Address);
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_Enqueue(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3Packet *packet;
    ns3::Packet *packet_ptr;
    PyNs3Mac48Address *to;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"packet", "to", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!O!", (char **) keywords, &PyNs3Packet_Type, &packet, &PyNs3Mac48Address_Type, &to)) {
        return NULL;
    }
    packet_ptr = (packet ? packet->obj : NULL);
    (helper_class == NULL)? (self->obj->Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj)) : (self->obj->ns3::OcbWifiMac::Enqueue(ns3::Ptr< ns3::Packet  > (packet_ptr), *((PyNs3Mac48Address *) to)->obj));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_ConfigureEdca(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    unsigned int cwmin;
    unsigned int cwmax;
    unsigned int aifsn;
    ns3::AcIndex ac;
    const char *keywords[] = {"cwmin", "cwmax", "aifsn", "ac", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "IIIi", (char **) keywords, &cwmin, &cwmax, &aifsn, &ac)) {
        return NULL;
    }
    self->obj->ConfigureEdca(cwmin, cwmax, aifsn, ac);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_RemoveReceiveVscCallback(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyNs3OrganizationIdentifier *oi;
    const char *keywords[] = {"oi", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O!", (char **) keywords, &PyNs3OrganizationIdentifier_Type, &oi)) {
        return NULL;
    }
    self->obj->RemoveReceiveVscCallback(*((PyNs3OrganizationIdentifier *) oi)->obj);
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_SetLinkUpCallback(PyNs3OcbWifiMac *self, PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    PyObject *linkUp;
    ns3::Ptr<PythonCallbackImpl1> linkUp_cb_impl;
    PyNs3OcbWifiMac__PythonHelper *helper_class = dynamic_cast<PyNs3OcbWifiMac__PythonHelper*> (self->obj);
    const char *keywords[] = {"linkUp", NULL};
    
    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "O", (char **) keywords, &linkUp)) {
        return NULL;
    }
    if (!PyCallable_Check(linkUp)) {
        PyErr_SetString(PyExc_TypeError, "parameter 'linkUp' must be callbale");
        return NULL;
    }
    linkUp_cb_impl = ns3::Create<PythonCallbackImpl1> (linkUp);
    (helper_class == NULL)? (self->obj->SetLinkUpCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkUp_cb_impl))) : (self->obj->ns3::OcbWifiMac::SetLinkUpCallback(ns3::Callback<void, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty, ns3::empty> (linkUp_cb_impl)));
    Py_INCREF(Py_None);
    py_retval = Py_None;
    return py_retval;
}


PyObject *
_wrap_PyNs3OcbWifiMac_GetTypeId(void)
{
    PyObject *py_retval;
    PyNs3TypeId *py_TypeId;
    
    ns3::TypeId retval = ns3::OcbWifiMac::GetTypeId();
    py_TypeId = PyObject_New(PyNs3TypeId, &PyNs3TypeId_Type);
    py_TypeId->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_TypeId->obj = new ns3::TypeId(retval);
    PyNs3TypeId_wrapper_registry[(void *) py_TypeId->obj] = (PyObject *) py_TypeId;
    py_retval = Py_BuildValue((char *) "N", py_TypeId);
    return py_retval;
}

static PyMethodDef PyNs3OcbWifiMac_methods[] = {
    {(char *) "SendVsc", (PyCFunction) _wrap_PyNs3OcbWifiMac_SendVsc, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetSsid", (PyCFunction) _wrap_PyNs3OcbWifiMac_SetSsid, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetSsid", (PyCFunction) _wrap_PyNs3OcbWifiMac_GetSsid, METH_NOARGS, NULL },
    {(char *) "SetBssid", (PyCFunction) _wrap_PyNs3OcbWifiMac_SetBssid, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetLinkDownCallback", (PyCFunction) _wrap_PyNs3OcbWifiMac_SetLinkDownCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetBssid", (PyCFunction) _wrap_PyNs3OcbWifiMac_GetBssid, METH_NOARGS, NULL },
    {(char *) "Enqueue", (PyCFunction) _wrap_PyNs3OcbWifiMac_Enqueue, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "ConfigureEdca", (PyCFunction) _wrap_PyNs3OcbWifiMac_ConfigureEdca, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "RemoveReceiveVscCallback", (PyCFunction) _wrap_PyNs3OcbWifiMac_RemoveReceiveVscCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "SetLinkUpCallback", (PyCFunction) _wrap_PyNs3OcbWifiMac_SetLinkUpCallback, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "GetTypeId", (PyCFunction) _wrap_PyNs3OcbWifiMac_GetTypeId, METH_NOARGS|METH_STATIC, NULL },
    {(char *) "NotifyConstructionCompleted", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_NotifyConstructionCompleted, METH_NOARGS, NULL },
    {(char *) "TxOk", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_TxOk, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoInitialize", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_DoInitialize, METH_NOARGS, NULL },
    {(char *) "NotifyNewAggregate", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_NotifyNewAggregate, METH_NOARGS, NULL },
    {(char *) "SendAddBaResponse", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_SendAddBaResponse, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "TxFailed", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_TxFailed, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "DoDispose", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_DoDispose, METH_NOARGS, NULL },
    {(char *) "DeaggregateAmsduAndForward", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_DeaggregateAmsduAndForward, METH_KEYWORDS|METH_VARARGS, NULL },
    {(char *) "FinishConfigureStandard", (PyCFunction) PyNs3OcbWifiMac__PythonHelper::_wrap_FinishConfigureStandard, METH_KEYWORDS|METH_VARARGS, NULL },
    {NULL, NULL, 0, NULL}
};

static void
PyNs3OcbWifiMac__tp_clear(PyNs3OcbWifiMac *self)
{
    Py_CLEAR(self->inst_dict);
    if (self->obj) {
    ns3::OcbWifiMac *tmp = self->obj;
    self->obj = NULL;
    tmp->Unref();
}
}


static int
PyNs3OcbWifiMac__tp_traverse(PyNs3OcbWifiMac *self, visitproc visit, void *arg)
{
    Py_VISIT(self->inst_dict);
    
    if (self->obj && typeid(*self->obj).name() == typeid(PyNs3OcbWifiMac__PythonHelper).name()  && self->obj->GetReferenceCount() == 1)
        Py_VISIT((PyObject *) self);

    return 0;
}


static void
_wrap_PyNs3OcbWifiMac__tp_dealloc(PyNs3OcbWifiMac *self)
{
    std::map<void*, PyObject*>::iterator wrapper_lookup_iter;
    wrapper_lookup_iter = PyNs3ObjectBase_wrapper_registry.find((void *) self->obj);
    if (wrapper_lookup_iter != PyNs3ObjectBase_wrapper_registry.end()) {
        PyNs3ObjectBase_wrapper_registry.erase(wrapper_lookup_iter);
    }
    
    PyNs3OcbWifiMac__tp_clear(self);
    Py_TYPE(self)->tp_free((PyObject*)self);
}

static PyObject*
_wrap_PyNs3OcbWifiMac__tp_richcompare (PyNs3OcbWifiMac *PYBINDGEN_UNUSED(self), PyNs3OcbWifiMac *other, int opid)
{
    
    if (!PyObject_IsInstance((PyObject*) other, (PyObject*) &PyNs3OcbWifiMac_Type)) {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }
    switch (opid)
    {
    case Py_LT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_LE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_EQ:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_NE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GE:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    case Py_GT:
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    } /* closes switch (opid) */
    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

PyTypeObject PyNs3OcbWifiMac_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.OcbWifiMac",            /* tp_name */
    sizeof(PyNs3OcbWifiMac),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_PyNs3OcbWifiMac__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_BASETYPE|Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)PyNs3OcbWifiMac__tp_traverse,     /* tp_traverse */
    (inquiry)PyNs3OcbWifiMac__tp_clear,             /* tp_clear */
    (richcmpfunc)_wrap_PyNs3OcbWifiMac__tp_richcompare,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)NULL,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)PyNs3OcbWifiMac_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    0,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    offsetof(PyNs3OcbWifiMac, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_PyNs3OcbWifiMac__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- containers --- */



static void
Pyns3__WifiModeListIter__tp_clear(Pyns3__WifiModeListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pyns3__WifiModeListIter__tp_traverse(Pyns3__WifiModeListIter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pyns3__WifiModeList__tp_dealloc(Pyns3__WifiModeList *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pyns3__WifiModeListIter__tp_dealloc(Pyns3__WifiModeListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pyns3__WifiModeList__tp_iter(Pyns3__WifiModeList *self)
{
    Pyns3__WifiModeListIter *iter = PyObject_GC_New(Pyns3__WifiModeListIter, &Pyns3__WifiModeListIter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new ns3::WifiModeList::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pyns3__WifiModeListIter__tp_iter(Pyns3__WifiModeListIter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pyns3__WifiModeListIter__tp_iternext(Pyns3__WifiModeListIter *self)
{
    PyObject *py_retval;
    ns3::WifiModeList::iterator iter;
    PyNs3WifiMode *py_WifiMode;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_WifiMode = PyObject_New(PyNs3WifiMode, &PyNs3WifiMode_Type);
    py_WifiMode->flags = PYBINDGEN_WRAPPER_FLAG_NONE;
    py_WifiMode->obj = new ns3::WifiMode((*iter));
    PyNs3WifiMode_wrapper_registry[(void *) py_WifiMode->obj] = (PyObject *) py_WifiMode;
    py_retval = Py_BuildValue((char *) "N", py_WifiMode);
    return py_retval;
}

int _wrap_convert_py2c__ns3__WifiMode(PyObject *value, ns3::WifiMode *address)
{
    PyObject *py_retval;
    PyNs3WifiMode *tmp_WifiMode;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "O!", &PyNs3WifiMode_Type, &tmp_WifiMode)) {
        Py_DECREF(py_retval);
        return 0;
    }
    *address = *tmp_WifiMode->obj;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__ns3__WifiModeList(PyObject *arg, ns3::WifiModeList *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pyns3__WifiModeList_Type)) {
        *container = *((Pyns3__WifiModeList*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            ns3::WifiMode item;
            if (!_wrap_convert_py2c__ns3__WifiMode(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Ns3__WifiModeList instance, or a list of ns3::WifiMode");
        return 0;
    }
    return 1;
}


static int
_wrap_Pyns3__WifiModeList__tp_init(Pyns3__WifiModeList *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new ns3::WifiModeList;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__ns3__WifiModeList(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pyns3__WifiModeList_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.Ns3__WifiModeList",            /* tp_name */
    sizeof(Pyns3__WifiModeList),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__WifiModeList__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__WifiModeList__tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pyns3__WifiModeList__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pyns3__WifiModeListIter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.Ns3__WifiModeListIter",            /* tp_name */
    sizeof(Pyns3__WifiModeListIter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__WifiModeListIter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pyns3__WifiModeListIter__tp_traverse,     /* tp_traverse */
    (inquiry)Pyns3__WifiModeListIter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__WifiModeListIter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pyns3__WifiModeListIter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};




static void
Pyns3__WifiMcsListIter__tp_clear(Pyns3__WifiMcsListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

}


static int
Pyns3__WifiMcsListIter__tp_traverse(Pyns3__WifiMcsListIter *self, visitproc visit, void *arg)
{
    Py_VISIT((PyObject *) self->container);
    return 0;
}


static void
_wrap_Pyns3__WifiMcsList__tp_dealloc(Pyns3__WifiMcsList *self)
{
    delete self->obj;
    self->obj = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static void
_wrap_Pyns3__WifiMcsListIter__tp_dealloc(Pyns3__WifiMcsListIter *self)
{
    Py_CLEAR(self->container);
    delete self->iterator;
    self->iterator = NULL;

    Py_TYPE(self)->tp_free((PyObject*)self);
}


static PyObject*
_wrap_Pyns3__WifiMcsList__tp_iter(Pyns3__WifiMcsList *self)
{
    Pyns3__WifiMcsListIter *iter = PyObject_GC_New(Pyns3__WifiMcsListIter, &Pyns3__WifiMcsListIter_Type);
    Py_INCREF(self);
    iter->container = self;
    iter->iterator = new ns3::WifiMcsList::iterator(self->obj->begin());
    return (PyObject*) iter;
}


static PyObject*
_wrap_Pyns3__WifiMcsListIter__tp_iter(Pyns3__WifiMcsListIter *self)
{
    Py_INCREF(self);
    return (PyObject*) self;
}

static PyObject* _wrap_Pyns3__WifiMcsListIter__tp_iternext(Pyns3__WifiMcsListIter *self)
{
    PyObject *py_retval;
    ns3::WifiMcsList::iterator iter;
    
    iter = *self->iterator;
    if (iter == self->container->obj->end()) {
        PyErr_SetNone(PyExc_StopIteration);
        return NULL;
    }
    ++(*self->iterator);
    py_retval = Py_BuildValue((char *) "i", (int)(*iter));
    return py_retval;
}

int _wrap_convert_py2c__unsigned_char(PyObject *value, unsigned char *address)
{
    PyObject *py_retval;
    int tmp;
    
    py_retval = Py_BuildValue((char *) "(O)", value);
    if (!PyArg_ParseTuple(py_retval, (char *) "i", &tmp)) {
        Py_DECREF(py_retval);
        return 0;
    }
    if (tmp > 0xff) {
        PyErr_SetString(PyExc_ValueError, "Out of range");
        Py_DECREF(py_retval);
        return 0;
    }
    *address = tmp;
    Py_DECREF(py_retval);
    return 1;
}


int _wrap_convert_py2c__ns3__WifiMcsList(PyObject *arg, ns3::WifiMcsList *container)
{
    if (PyObject_IsInstance(arg, (PyObject*) &Pyns3__WifiMcsList_Type)) {
        *container = *((Pyns3__WifiMcsList*)arg)->obj;
    } else if (PyList_Check(arg)) {
        container->clear();
        Py_ssize_t size = PyList_Size(arg);
        for (Py_ssize_t i = 0; i < size; i++) {
            unsigned char item;
            if (!_wrap_convert_py2c__unsigned_char(PyList_GET_ITEM(arg, i), &item)) {
                return 0;
            }
            container->push_back(item);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "parameter must be None, a Ns3__WifiMcsList instance, or a list of unsigned char");
        return 0;
    }
    return 1;
}


static int
_wrap_Pyns3__WifiMcsList__tp_init(Pyns3__WifiMcsList *self, PyObject *args, PyObject *kwargs)
{
    const char *keywords[] = {"arg", NULL};
    PyObject *arg = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "|O", (char **) keywords, &arg)) {
        return -1;
    }

    self->obj = new ns3::WifiMcsList;

    if (arg == NULL)
        return 0;

    if (!_wrap_convert_py2c__ns3__WifiMcsList(arg, self->obj)) {
        delete self->obj;
        self->obj = NULL;
        return -1;
    }
    return 0;
}

PyTypeObject Pyns3__WifiMcsList_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.Ns3__WifiMcsList",            /* tp_name */
    sizeof(Pyns3__WifiMcsList),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__WifiMcsList__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)NULL,     /* tp_traverse */
    (inquiry)NULL,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__WifiMcsList__tp_iter,          /* tp_iter */
    (iternextfunc)NULL,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)_wrap_Pyns3__WifiMcsList__tp_init,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};

PyTypeObject Pyns3__WifiMcsListIter_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    (char *) "wave.Ns3__WifiMcsListIter",            /* tp_name */
    sizeof(Pyns3__WifiMcsListIter),                  /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)_wrap_Pyns3__WifiMcsListIter__tp_dealloc,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)NULL,       /* tp_getattr */
    (setattrfunc)NULL,       /* tp_setattr */
    (cmpfunc)NULL,           /* tp_compare */
    (reprfunc)NULL,             /* tp_repr */
    (PyNumberMethods*)NULL,     /* tp_as_number */
    (PySequenceMethods*)NULL, /* tp_as_sequence */
    (PyMappingMethods*)NULL,   /* tp_as_mapping */
    (hashfunc)NULL,             /* tp_hash */
    (ternaryfunc)NULL,          /* tp_call */
    (reprfunc)NULL,              /* tp_str */
    (getattrofunc)NULL,     /* tp_getattro */
    (setattrofunc)NULL,     /* tp_setattro */
    (PyBufferProcs*)NULL,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)Pyns3__WifiMcsListIter__tp_traverse,     /* tp_traverse */
    (inquiry)Pyns3__WifiMcsListIter__tp_clear,             /* tp_clear */
    (richcmpfunc)NULL,   /* tp_richcompare */
    0,             /* tp_weaklistoffset */
    (getiterfunc)_wrap_Pyns3__WifiMcsListIter__tp_iter,          /* tp_iter */
    (iternextfunc)_wrap_Pyns3__WifiMcsListIter__tp_iternext,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    NULL,                     /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,    /* tp_descr_get */
    (descrsetfunc)NULL,    /* tp_descr_set */
    0,                 /* tp_dictoffset */
    (initproc)NULL,             /* tp_init */
    (allocfunc)PyType_GenericAlloc,           /* tp_alloc */
    (newfunc)PyType_GenericNew,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)NULL,             /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor) NULL                  /* tp_del */
};


/* --- enumerations --- */



























































#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef wave_moduledef = {
    PyModuleDef_HEAD_INIT,
    "wave",
    NULL,
    -1,
    wave_functions,
};
#endif


#if PY_VERSION_HEX >= 0x03000000
    #define MOD_ERROR NULL
    #define MOD_INIT(name) PyObject* PyInit_##name(void)
    #define MOD_RETURN(val) val
#else
    #define MOD_ERROR
    #define MOD_INIT(name) void init##name(void)
    #define MOD_RETURN(val)
#endif
#if defined(__cplusplus)
extern "C"
#endif
#if defined(__GNUC__) && __GNUC__ >= 4
__attribute__ ((visibility("default")))
#endif


MOD_INIT(wave)
{
    PyObject *m;
    PyObject *submodule;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&wave_moduledef);
    #else
    m = Py_InitModule3((char *) "wave", wave_functions, NULL);
    #endif
    if (m == NULL) {
        return MOD_ERROR;
    }
    PyModule_AddIntConstant(m, (char *) "STD_IOS_IN", std::ios::in);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_OUT", std::ios::out);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_ATE", std::ios::ate);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_APP", std::ios::app);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_TRUNC", std::ios::trunc);
    PyModule_AddIntConstant(m, (char *) "STD_IOS_BINARY", std::ios::binary);
    /* Import the 'ns3::Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AsciiTraceHelper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AsciiTraceHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AsciiTraceHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AsciiTraceHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AsciiTraceHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AsciiTraceHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AsciiTraceHelperForDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AsciiTraceHelperForDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AsciiTraceHelperForDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AsciiTraceHelperForDevice_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AsciiTraceHelperForDevice_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AsciiTraceHelperForDevice_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeConstructionList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::AttributeConstructionList::Item' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeConstructionListItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3AttributeConstructionListItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3AttributeConstructionListItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3AttributeConstructionListItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Bar' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Bar_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Bar");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Bar_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Bar_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Bar_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BlockAckAgreement' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BlockAckAgreement_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BlockAckAgreement");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BlockAckAgreement_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BlockAckAgreement_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BlockAckAgreement_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BlockAckCache' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BlockAckCache_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BlockAckCache");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BlockAckCache_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BlockAckCache_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BlockAckCache_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::BlockAckManager' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BlockAckManager_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "BlockAckManager");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BlockAckManager_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BlockAckManager_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BlockAckManager_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Buffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Buffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Buffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Buffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Buffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Buffer::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3BufferIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3BufferIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3BufferIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3BufferIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ByteTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Iterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ByteTagList::Iterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ByteTagListIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ByteTagListIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ByteTagListIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CallbackBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CallbackBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CallbackBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CallbackBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::CapabilityInformation' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CapabilityInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CapabilityInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3CapabilityInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3CapabilityInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3CapabilityInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::EventId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3EventId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3EventId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3EventId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Hasher' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Hasher_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Hasher");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Hasher_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Hasher_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Hasher_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv4Mask' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4Mask_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4Mask");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv4Mask_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv4Mask_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv4Mask_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Ipv6Prefix' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6Prefix_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6Prefix");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Ipv6Prefix_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Ipv6Prefix_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Ipv6Prefix_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Mac48Address' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48Address_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48Address");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Mac48Address_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Mac48Address_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Mac48Address_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacLowBlockAckEventListener' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacLowBlockAckEventListener_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacLowBlockAckEventListener");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacLowBlockAckEventListener_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacLowBlockAckEventListener_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacLowBlockAckEventListener_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacLowDcfListener' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacLowDcfListener_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacLowDcfListener");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacLowDcfListener_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacLowDcfListener_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacLowDcfListener_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacLowTransmissionListener' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacLowTransmissionListener_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacLowTransmissionListener");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacLowTransmissionListener_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacLowTransmissionListener_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacLowTransmissionListener_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::MacLowTransmissionParameters' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacLowTransmissionParameters_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacLowTransmissionParameters");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3MacLowTransmissionParameters_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3MacLowTransmissionParameters_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3MacLowTransmissionParameters_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NetDeviceContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NetDeviceContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NetDeviceContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NetDeviceContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NetDeviceContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NetDeviceContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::NodeContainer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NodeContainer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NodeContainer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3NodeContainer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3NodeContainer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3NodeContainer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectBase_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectBase_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectBase_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectDeleter' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectDeleter_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectDeleter_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectDeleter_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::ObjectFactory' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::OriginatorBlockAckAgreement' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3OriginatorBlockAckAgreement_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "OriginatorBlockAckAgreement");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::PacketMetadata' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadata_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketMetadata");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadata_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadata_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadata_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketMetadata::ItemIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketMetadataItemIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ItemIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketMetadataItemIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketMetadataItemIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagIterator::Item' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagIteratorItem_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Item");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagIteratorItem_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagIteratorItem_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagIteratorItem_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagList_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PacketTagList");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagList_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagList_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagList_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PacketTagList::TagData' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PacketTagListTagData_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagData");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PacketTagListTagData_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PacketTagListTagData_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PacketTagListTagData_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapFile' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PcapFile_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PcapFile");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PcapFile_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapFile_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapFile_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapHelper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PcapHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PcapHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PcapHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapHelperForDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PcapHelperForDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PcapHelperForDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3PcapHelperForDevice_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3PcapHelperForDevice_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3PcapHelperForDevice_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Object, ns3::ObjectBase, ns3::ObjectDeleter >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Simulator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Simulator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Simulator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Simulator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Simulator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Simulator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::StatusCode' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3StatusCode_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "StatusCode");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3StatusCode_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3StatusCode_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3StatusCode_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Tag' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Tag_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Tag");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TagBuffer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TagBuffer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TagBuffer");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TagBuffer_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TagBuffer_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TagBuffer_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TimeWithUnit' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeWithUnit_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeWithUnit");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TimeWithUnit_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TimeWithUnit_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TimeWithUnit_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeId_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeId");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeId_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeId_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeId_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::AttributeInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdAttributeInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdAttributeInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdAttributeInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TypeId::TraceSourceInformation' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdTraceSourceInformation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceInformation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3TypeIdTraceSourceInformation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3TypeIdTraceSourceInformation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiHelper' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiMacHelper' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiMacHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiMacHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiMacHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiMacHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiMacHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiMode' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiMode_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiMode");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiMode_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiMode_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiMode_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiModeFactory' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiModeFactory_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiModeFactory");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiModeFactory_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiModeFactory_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiModeFactory_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiPhyHelper' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiPhyHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiPhyHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiPhyHelper_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiPhyHelper_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiPhyHelper_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiPhyListener' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiPhyListener_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiPhyListener");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiPhyListener_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiPhyListener_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiPhyListener_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiRemoteStation' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiRemoteStation_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiRemoteStation");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiRemoteStation_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiRemoteStation_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiRemoteStation_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiRemoteStationInfo' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiRemoteStationInfo_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiRemoteStationInfo");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiRemoteStationInfo_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiRemoteStationInfo_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiRemoteStationInfo_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiRemoteStationState' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiRemoteStationState_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiRemoteStationState");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiRemoteStationState_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiRemoteStationState_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiRemoteStationState_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiTxVector' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiTxVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiTxVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiTxVector_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiTxVector_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiTxVector_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::empty' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Empty_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "empty");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Empty_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Empty_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Empty_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::int64x64_t' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Int64x64_t_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "int64x64_t");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Int64x64_t_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Int64x64_t_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Int64x64_t_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Chunk' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Chunk_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Chunk");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Header' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Header_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Header");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtAddBaRequestHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtAddBaRequestHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtAddBaRequestHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtAddBaResponseHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtAddBaResponseHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtAddBaResponseHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtAssocRequestHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtAssocRequestHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtAssocRequestHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtAssocResponseHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtAssocResponseHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtAssocResponseHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtDelBaHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtDelBaHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtDelBaHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtProbeRequestHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtProbeRequestHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtProbeRequestHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtProbeResponseHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtProbeResponseHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtProbeResponseHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NqosWifiMacHelper' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NqosWifiMacHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NqosWifiMacHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Object_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Object");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Object::AggregateIterator' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectAggregateIterator_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AggregateIterator");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3ObjectAggregateIterator_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3ObjectAggregateIterator_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3ObjectAggregateIterator_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::PcapFileWrapper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PcapFileWrapper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PcapFileWrapper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::QosWifiMacHelper' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3QosWifiMacHelper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "QosWifiMacHelper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::EventImpl, ns3::empty, ns3::DefaultDeleter<ns3::EventImpl> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3EventImpl_Ns3Empty_Ns3DefaultDeleter__lt__ns3EventImpl__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::NixVector, ns3::empty, ns3::DefaultDeleter<ns3::NixVector> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3NixVector_Ns3Empty_Ns3DefaultDeleter__lt__ns3NixVector__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::OutputStreamWrapper, ns3::empty, ns3::DefaultDeleter<ns3::OutputStreamWrapper> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3OutputStreamWrapper_Ns3Empty_Ns3DefaultDeleter__lt__ns3OutputStreamWrapper__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::Packet, ns3::empty, ns3::DefaultDeleter<ns3::Packet> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3Packet_Ns3Empty_Ns3DefaultDeleter__lt__ns3Packet__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::SimpleRefCount< ns3::WifiInformationElement, ns3::empty, ns3::DefaultDeleter<ns3::WifiInformationElement> >' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt___Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt__");
    
        if (PyErr_Occurred()) PyErr_Clear();
        /* Import the 'ns3::SimpleRefCount< ns3::WifiInformationElement, ns3::empty, ns3::DefaultDeleter<ns3::WifiInformationElement> >' class type map from module 'ns.core' */
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map");
        if (_cobj == NULL) {
            _PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map = new pybindgen::TypeMap;
            PyErr_Clear();
        } else {
            _PyNs3SimpleRefCount__Ns3WifiInformationElement_Ns3Empty_Ns3DefaultDeleter__lt__ns3WifiInformationElement__gt____typeid_map = reinterpret_cast<pybindgen::TypeMap*> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::Time' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Time_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Time");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3Time_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3Time_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3Time_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::TraceSourceAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TraceSourceAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TraceSourceAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Trailer' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Trailer_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Trailer");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiActionHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiActionHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiActionHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiActionHeader::ActionValue' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiActionHeaderActionValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ActionValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
        PyObject *_cobj = PyObject_GetAttrString(module, (char*) "_PyNs3WifiActionHeaderActionValue_wrapper_registry");
        if (_cobj == NULL) {
            _PyNs3WifiActionHeaderActionValue_wrapper_registry = NULL;
            PyErr_Clear();
        } else {
            _PyNs3WifiActionHeaderActionValue_wrapper_registry = reinterpret_cast< std::map<void*, PyObject*> *> (PyCObject_AsVoidPtr (_cobj));
            Py_DECREF(_cobj);
        }
    }
    /* Import the 'ns3::WifiInformationElement' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiInformationElement_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiInformationElement");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiMac' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiMac_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiMac");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiMacHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiMacHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiMacHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiMacQueue' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiMacQueue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiMacQueue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiPhy' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiPhy_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiPhy");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiRemoteStationManager' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiRemoteStationManager_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiRemoteStationManager");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeAccessor' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeAccessor_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeAccessor");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackImplBase' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackImplBase_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackImplBase");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CallbackValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CallbackValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CallbackValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CtrlBAckRequestHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CtrlBAckRequestHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CtrlBAckRequestHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::CtrlBAckResponseHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3CtrlBAckResponseHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "CtrlBAckResponseHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Dcf' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Dcf_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Dcf");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EdcaTxopN' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EdcaTxopN_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EdcaTxopN");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EmptyAttributeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EmptyAttributeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EmptyAttributeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::EventImpl' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3EventImpl_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "EventImpl");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ExtendedSupportedRatesIE' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ExtendedSupportedRatesIE_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ExtendedSupportedRatesIE");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::HtCapabilities' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3HtCapabilities_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HtCapabilities");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::HtCapabilitiesChecker' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3HtCapabilitiesChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HtCapabilitiesChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::HtCapabilitiesValue' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3HtCapabilitiesValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "HtCapabilitiesValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv4MaskValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv4MaskValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv4MaskValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ipv6PrefixValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ipv6PrefixValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ipv6PrefixValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Mac48AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Mac48AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Mac48AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MacLow' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MacLow_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MacLow");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::MgtBeaconHeader' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3MgtBeaconHeader_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "MgtBeaconHeader");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NetDevice' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NetDevice_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NetDevice");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::NixVector' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3NixVector_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "NixVector");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Node' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Node_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Node");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::ObjectFactoryValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3ObjectFactoryValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "ObjectFactoryValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::OutputStreamWrapper' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3OutputStreamWrapper_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "OutputStreamWrapper");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Packet' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Packet_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Packet");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::PointerChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PointerChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PointerChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::PointerValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3PointerValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "PointerValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::RegularWifiMac' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3RegularWifiMac_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "RegularWifiMac");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::Ssid' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3Ssid_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "Ssid");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SsidChecker' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SsidChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SsidChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SsidValue' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SsidValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SsidValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::SupportedRates' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3SupportedRates_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "SupportedRates");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TimeValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TimeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TimeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdChecker' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::TypeIdValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3TypeIdValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "TypeIdValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::UintegerValue' class from module 'ns.core' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.core");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3UintegerValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "UintegerValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiModeChecker' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiModeChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiModeChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::WifiModeValue' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3WifiModeValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "WifiModeValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressChecker' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressChecker_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressChecker");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::AddressValue' class from module 'ns.network' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.network");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3AddressValue_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "AddressValue");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    /* Import the 'ns3::DcaTxop' class from module 'ns.wifi' */
    {
        PyObject *module = PyImport_ImportModule((char*) "ns.wifi");
        if (module == NULL) {
            return MOD_ERROR;
        }
        _PyNs3DcaTxop_Type = (PyTypeObject*) PyObject_GetAttrString(module, (char*) "DcaTxop");
    
        if (PyErr_Occurred()) PyErr_Clear();
    }
    PyModule_AddObject(m, (char *) "_PyNs3OrganizationIdentifier_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3OrganizationIdentifier_wrapper_registry, NULL));
    /* Register the 'ns3::OrganizationIdentifier' class */
    if (PyType_Ready(&PyNs3OrganizationIdentifier_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "OrganizationIdentifier", (PyObject *) &PyNs3OrganizationIdentifier_Type);
    PyModule_AddObject(m, (char *) "_PyNs3VendorSpecificContentManager_wrapper_registry", PyCObject_FromVoidPtr(&PyNs3VendorSpecificContentManager_wrapper_registry, NULL));
    /* Register the 'ns3::VendorSpecificContentManager' class */
    if (PyType_Ready(&PyNs3VendorSpecificContentManager_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "VendorSpecificContentManager", (PyObject *) &PyNs3VendorSpecificContentManager_Type);
    /* Register the 'ns3::HigherDataTxVectorTag' class */
    PyNs3HigherDataTxVectorTag_Type.tp_base = &PyNs3Tag_Type;
    if (PyType_Ready(&PyNs3HigherDataTxVectorTag_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "HigherDataTxVectorTag", (PyObject *) &PyNs3HigherDataTxVectorTag_Type);
    /* Register the 'ns3::VendorSpecificActionHeader' class */
    PyNs3VendorSpecificActionHeader_Type.tp_base = &PyNs3Header_Type;
    if (PyType_Ready(&PyNs3VendorSpecificActionHeader_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "VendorSpecificActionHeader", (PyObject *) &PyNs3VendorSpecificActionHeader_Type);
    /* Register the 'ns3::Wifi80211pHelper' class */
    PyNs3Wifi80211pHelper_Type.tp_base = &PyNs3WifiHelper_Type;
    if (PyType_Ready(&PyNs3Wifi80211pHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Wifi80211pHelper", (PyObject *) &PyNs3Wifi80211pHelper_Type);
    /* Register the 'ns3::NqosWaveMacHelper' class */
    PyNs3NqosWaveMacHelper_Type.tp_base = &PyNs3NqosWifiMacHelper_Type;
    if (PyType_Ready(&PyNs3NqosWaveMacHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "NqosWaveMacHelper", (PyObject *) &PyNs3NqosWaveMacHelper_Type);
    PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map.register_wrapper(typeid(ns3::OrganizationIdentifierChecker), &PyNs3OrganizationIdentifierChecker_Type);
    /* Register the 'ns3::OrganizationIdentifierChecker' class */
    PyNs3OrganizationIdentifierChecker_Type.tp_base = &PyNs3AttributeChecker_Type;
    if (PyType_Ready(&PyNs3OrganizationIdentifierChecker_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "OrganizationIdentifierChecker", (PyObject *) &PyNs3OrganizationIdentifierChecker_Type);
    PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map.register_wrapper(typeid(ns3::OrganizationIdentifierValue), &PyNs3OrganizationIdentifierValue_Type);
    /* Register the 'ns3::OrganizationIdentifierValue' class */
    PyNs3OrganizationIdentifierValue_Type.tp_base = &PyNs3AttributeValue_Type;
    if (PyType_Ready(&PyNs3OrganizationIdentifierValue_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "OrganizationIdentifierValue", (PyObject *) &PyNs3OrganizationIdentifierValue_Type);
    /* Register the 'ns3::QosWaveMacHelper' class */
    PyNs3QosWaveMacHelper_Type.tp_base = &PyNs3QosWifiMacHelper_Type;
    if (PyType_Ready(&PyNs3QosWaveMacHelper_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "QosWaveMacHelper", (PyObject *) &PyNs3QosWaveMacHelper_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::WaveMacLow), &PyNs3WaveMacLow_Type);
    /* Register the 'ns3::WaveMacLow' class */
    PyNs3WaveMacLow_Type.tp_base = &PyNs3MacLow_Type;
    if (PyType_Ready(&PyNs3WaveMacLow_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "WaveMacLow", (PyObject *) &PyNs3WaveMacLow_Type);
    PyNs3SimpleRefCount__Ns3Object_Ns3ObjectBase_Ns3ObjectDeleter__typeid_map.register_wrapper(typeid(ns3::OcbWifiMac), &PyNs3OcbWifiMac_Type);
    /* Register the 'ns3::OcbWifiMac' class */
    PyNs3OcbWifiMac_Type.tp_base = &PyNs3RegularWifiMac_Type;
    if (PyType_Ready(&PyNs3OcbWifiMac_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "OcbWifiMac", (PyObject *) &PyNs3OcbWifiMac_Type);
    /* Register the 'ns3::WifiModeList' class */
    if (PyType_Ready(&Pyns3__WifiModeList_Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pyns3__WifiModeListIter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ns3__WifiModeList", (PyObject *) &Pyns3__WifiModeList_Type);
    PyModule_AddObject(m, (char *) "Ns3__WifiModeListIter", (PyObject *) &Pyns3__WifiModeListIter_Type);
    /* Register the 'ns3::WifiMcsList' class */
    if (PyType_Ready(&Pyns3__WifiMcsList_Type)) {
        return MOD_ERROR;
    }
    if (PyType_Ready(&Pyns3__WifiMcsListIter_Type)) {
        return MOD_ERROR;
    }
    PyModule_AddObject(m, (char *) "Ns3__WifiMcsList", (PyObject *) &Pyns3__WifiMcsList_Type);
    PyModule_AddObject(m, (char *) "Ns3__WifiMcsListIter", (PyObject *) &Pyns3__WifiMcsListIter_Type);
    {
        PyObject *tmp_value;
         // ns3::OrganizationIdentifier::OUI24
        tmp_value = PyLong_FromLong(ns3::OrganizationIdentifier::OUI24);
        PyDict_SetItemString((PyObject*) PyNs3OrganizationIdentifier_Type.tp_dict, "OUI24", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::OrganizationIdentifier::OUI36
        tmp_value = PyLong_FromLong(ns3::OrganizationIdentifier::OUI36);
        PyDict_SetItemString((PyObject*) PyNs3OrganizationIdentifier_Type.tp_dict, "OUI36", tmp_value);
        Py_DECREF(tmp_value);
         // ns3::OrganizationIdentifier::Unknown
        tmp_value = PyLong_FromLong(ns3::OrganizationIdentifier::Unknown);
        PyDict_SetItemString((PyObject*) PyNs3OrganizationIdentifier_Type.tp_dict, "Unknown", tmp_value);
        Py_DECREF(tmp_value);
    }
    submodule = initwave_FatalImpl();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "FatalImpl", submodule);
    submodule = initwave_Hash();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "Hash", submodule);
    submodule = initwave_internal();
    if (submodule == NULL) {
        return MOD_ERROR;
    }
    Py_INCREF(submodule);
    PyModule_AddObject(m, (char *) "internal", submodule);
    return MOD_RETURN(m);
}
