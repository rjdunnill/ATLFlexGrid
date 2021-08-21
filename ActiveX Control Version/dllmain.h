// dllmain.h : Declaration of module class.

class CATLFlexGridModule : public ATL::CAtlDllModuleT< CATLFlexGridModule >
{
public :
	DECLARE_LIBID(LIBID_ATLFlexGridLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLFLEXGRID, "{5a5d544b-b4bc-4e16-8288-fc0fe0549f8e}")
};

extern class CATLFlexGridModule _AtlModule;
