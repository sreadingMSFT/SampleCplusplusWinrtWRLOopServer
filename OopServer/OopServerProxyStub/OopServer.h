/* Header file automatically generated from OopServer.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0229 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __OopServer_h__
#define __OopServer_h__
#ifndef __OopServer_p_h__
#define __OopServer_p_h__


#pragma once

// Ensure that the setting of the /ns_prefix command line switch is consistent for all headers.
// If you get an error from the compiler indicating "warning C4005: 'CHECK_NS_PREFIX_STATE': macro redefinition", this
// indicates that you have included two different headers with different settings for the /ns_prefix MIDL command line switch
#if !defined(DISABLE_NS_PREFIX_CHECKS)
#define CHECK_NS_PREFIX_STATE "always"
#endif // !defined(DISABLE_NS_PREFIX_CHECKS)


#pragma push_macro("MIDL_CONST_ID")
#undef MIDL_CONST_ID
#define MIDL_CONST_ID const __declspec(selectany)


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0xa0000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__
#define ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__
namespace ABI {
    namespace OopServer {
        interface IAnotherSampleClass;
    } /* OopServer */
} /* ABI */
#define __x_ABI_COopServer_CIAnotherSampleClass ABI::OopServer::IAnotherSampleClass

#endif // ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__

#ifndef ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__
#define ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__
namespace ABI {
    namespace OopServer {
        interface ISampleClass;
    } /* OopServer */
} /* ABI */
#define __x_ABI_COopServer_CISampleClass ABI::OopServer::ISampleClass

#endif // ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__

#ifndef ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__
#define ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__
namespace ABI {
    namespace OopServer {
        interface ISampleResult;
    } /* OopServer */
} /* ABI */
#define __x_ABI_COopServer_CISampleResult ABI::OopServer::ISampleResult

#endif // ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace OopServer {
        class SampleResult;
    } /* OopServer */
} /* ABI */


namespace ABI {
    namespace OopServer {
        struct SampleProgress;
        
    } /* OopServer */
} /* ABI */


#ifndef DEF___FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#define DEF___FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f6dec97d-7f9c-5ad0-8a7d-69a62d88e6f2"))
IAsyncOperationProgressHandler<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> : IAsyncOperationProgressHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::OopServer::SampleResult*, ABI::OopServer::ISampleResult*>,struct ABI::OopServer::SampleProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<OopServer.SampleResult, OopServer.SampleProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t;
#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
//#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE */






#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("131c0702-4d82-5f79-bd14-3abbe9602ccc"))
IAsyncOperationWithProgressCompletedHandler<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> : IAsyncOperationWithProgressCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::OopServer::SampleResult*, ABI::OopServer::ISampleResult*>,struct ABI::OopServer::SampleProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<OopServer.SampleResult, OopServer.SampleProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE */






#ifndef DEF___FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#define DEF___FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0a28a37d-128e-5e7c-a782-9a49cb6959d2"))
IAsyncOperationWithProgress<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> : IAsyncOperationWithProgress_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::OopServer::SampleResult*, ABI::OopServer::ISampleResult*>,struct ABI::OopServer::SampleProgress> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<OopServer.SampleResult, OopServer.SampleProgress>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<ABI::OopServer::SampleResult*,struct ABI::OopServer::SampleProgress> __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_t;
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
//#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::OopServer::ISampleResult*,ABI::OopServer::SampleProgress>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_USE */




#ifndef DEF___FIAsyncOperationProgressHandler_2_double_double_USE
#define DEF___FIAsyncOperationProgressHandler_2_double_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("feff6cb7-d722-53b8-b567-2369d68be37d"))
IAsyncOperationProgressHandler<double,double> : IAsyncOperationProgressHandler_impl<double,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Double, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<double,double> __FIAsyncOperationProgressHandler_2_double_double_t;
#define __FIAsyncOperationProgressHandler_2_double_double ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_double_double_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_double_double ABI::Windows::Foundation::IAsyncOperationProgressHandler<DOUBLE,DOUBLE>
//#define __FIAsyncOperationProgressHandler_2_double_double_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<DOUBLE,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_double_double_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_double_double_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_double_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d30897bc-80fc-575a-a6cf-dfd065f03d6d"))
IAsyncOperationWithProgressCompletedHandler<double,double> : IAsyncOperationWithProgressCompletedHandler_impl<double,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Double, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<double,double> __FIAsyncOperationWithProgressCompletedHandler_2_double_double_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_double_double_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<DOUBLE,DOUBLE>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<DOUBLE,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_double_double_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_double_double_USE
#define DEF___FIAsyncOperationWithProgress_2_double_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e5477ee2-b431-5cd6-b8c3-0aa588da177e"))
IAsyncOperationWithProgress<double,double> : IAsyncOperationWithProgress_impl<double,double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Double, Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<double,double> __FIAsyncOperationWithProgress_2_double_double_t;
#define __FIAsyncOperationWithProgress_2_double_double ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_double_double_t
/* Foundation */ } /* Windows */ } /* ABI */ } 

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_double_double ABI::Windows::Foundation::IAsyncOperationWithProgress<DOUBLE,DOUBLE>
//#define __FIAsyncOperationWithProgress_2_double_double_t ABI::Windows::Foundation::IAsyncOperationWithProgress<DOUBLE,DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_double_double_USE */





namespace ABI {
    namespace OopServer {
        
        typedef struct SampleProgress SampleProgress;
        
    } /* OopServer */
} /* ABI */




namespace ABI {
    namespace OopServer {
        class AnotherSampleClass;
    } /* OopServer */
} /* ABI */


namespace ABI {
    namespace OopServer {
        class SampleClass;
    } /* OopServer */
} /* ABI */







/*
 *
 * Struct OopServer.SampleProgress
 *
 */

namespace ABI {
    namespace OopServer {
        /* [version] */
        struct SampleProgress
        {
            UINT32 SampleUInt;
            UINT32 SampleUInt2;
            UINT32 SampleUInt3;
            UINT32 SampleUInt4;
            UINT32 SampleUInt5;
        };
        
    } /* OopServer */
} /* ABI */


/*
 *
 * Interface OopServer.IAnotherSampleClass
 *
 * Interface is a part of the implementation of type OopServer.AnotherSampleClass
 *
 *
 */
#if !defined(____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_IAnotherSampleClass[] = L"OopServer.IAnotherSampleClass";
namespace ABI {
    namespace OopServer {
        /* [object, version, uuid("13C7B335-54EF-5194-B727-C3A308258C3C"), exclusiveto] */
        MIDL_INTERFACE("13C7B335-54EF-5194-B727-C3A308258C3C")
        IAnotherSampleClass : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MyProperty(
                /* [retval, out] */INT32 * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_IAnotherSampleClass=_uuidof(IAnotherSampleClass);
        
    } /* OopServer */
} /* ABI */

EXTERN_C const IID IID___x_ABI_COopServer_CIAnotherSampleClass;
#endif /* !defined(____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__) */


/*
 *
 * Interface OopServer.ISampleClass
 *
 * Interface is a part of the implementation of type OopServer.SampleClass
 *
 *
 */
#if !defined(____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_ISampleClass[] = L"OopServer.ISampleClass";
namespace ABI {
    namespace OopServer {
        /* [object, version, uuid("B0B7F9FC-71EC-5312-8DC0-1B264929F1B2"), exclusiveto] */
        MIDL_INTERFACE("B0B7F9FC-71EC-5312-8DC0-1B264929F1B2")
        ISampleClass : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MyProperty(
                /* [retval, out] */INT32 * value
                ) = 0;
            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MyProperty(
                /* [in] */INT32 value
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE GetNonActivatableClass(
                /* [retval, out] */ABI::OopServer::IAnotherSampleClass * * result
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SampleAsync(
                /* [retval, out] */__FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * * operation
                ) = 0;
            virtual HRESULT STDMETHODCALLTYPE SampleSimpleAsync(
                /* [retval, out] */__FIAsyncOperationWithProgress_2_double_double * * operation
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ISampleClass=_uuidof(ISampleClass);
        
    } /* OopServer */
} /* ABI */

EXTERN_C const IID IID___x_ABI_COopServer_CISampleClass;
#endif /* !defined(____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__) */


/*
 *
 * Interface OopServer.ISampleResult
 *
 * Interface is a part of the implementation of type OopServer.SampleResult
 *
 *
 */
#if !defined(____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_ISampleResult[] = L"OopServer.ISampleResult";
namespace ABI {
    namespace OopServer {
        /* [object, version, uuid("A4A98326-15D7-5219-929F-291707D12421"), exclusiveto] */
        MIDL_INTERFACE("A4A98326-15D7-5219-929F-291707D12421")
        ISampleResult : public IInspectable
        {
        public:
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SampleString(
                /* [retval, out] */HSTRING * value
                ) = 0;
            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SampleBoolean(
                /* [retval, out] */::boolean * value
                ) = 0;
            
        };

        extern MIDL_CONST_ID IID & IID_ISampleResult=_uuidof(ISampleResult);
        
    } /* OopServer */
} /* ABI */

EXTERN_C const IID IID___x_ABI_COopServer_CISampleResult;
#endif /* !defined(____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__) */


/*
 *
 * Class OopServer.AnotherSampleClass
 *
 * Class implements the following interfaces:
 *    OopServer.IAnotherSampleClass ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_AnotherSampleClass_DEFINED
#define RUNTIMECLASS_OopServer_AnotherSampleClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_AnotherSampleClass[] = L"OopServer.AnotherSampleClass";
#endif


/*
 *
 * Class OopServer.SampleClass
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    OopServer.ISampleClass ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_SampleClass_DEFINED
#define RUNTIMECLASS_OopServer_SampleClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_SampleClass[] = L"OopServer.SampleClass";
#endif


/*
 *
 * Class OopServer.SampleResult
 *
 * Class implements the following interfaces:
 *    OopServer.ISampleResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_SampleResult_DEFINED
#define RUNTIMECLASS_OopServer_SampleResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_SampleResult[] = L"OopServer.SampleResult";
#endif


#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__
#define ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__
typedef interface __x_ABI_COopServer_CIAnotherSampleClass __x_ABI_COopServer_CIAnotherSampleClass;

#endif // ____x_ABI_COopServer_CIAnotherSampleClass_FWD_DEFINED__

#ifndef ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__
#define ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__
typedef interface __x_ABI_COopServer_CISampleClass __x_ABI_COopServer_CISampleClass;

#endif // ____x_ABI_COopServer_CISampleClass_FWD_DEFINED__

#ifndef ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__
#define ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__
typedef interface __x_ABI_COopServer_CISampleResult __x_ABI_COopServer_CISampleResult;

#endif // ____x_ABI_COopServer_CISampleResult_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

struct __x_ABI_COopServer_CSampleProgress;

#if !defined(____FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress;

typedef interface __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress;

typedef struct __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress *asyncInfo, /* [in] */ struct __x_ABI_COopServer_CSampleProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl;

interface __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__




#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__




#if !defined(____FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress;

typedef struct __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_OopServer__CSampleResult_OopServer__CSampleProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_COopServer_CISampleResult * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl;

interface __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationProgressHandler_2_double_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_double_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_double_double __FIAsyncOperationProgressHandler_2_double_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_double_double;

typedef interface __FIAsyncOperationWithProgress_2_double_double __FIAsyncOperationWithProgress_2_double_double;

typedef struct __FIAsyncOperationProgressHandler_2_double_doubleVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_double_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_double_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_double_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_double_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_double_double *asyncInfo, /* [in] */ double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_double_doubleVtbl;

interface __FIAsyncOperationProgressHandler_2_double_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_double_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_double_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_double_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_double_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_double_double_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_double_double_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_double_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_double_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_double_double __FIAsyncOperationWithProgressCompletedHandler_2_double_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_double_double;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_double_double __FIAsyncOperationWithProgress_2_double_double;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_double_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_double_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_double_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_double_double * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_double_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_double_double *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_double_doubleVtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_double_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_double_doubleVtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_double_double_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_double_double_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_double_double_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_double_double_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_double_double __FIAsyncOperationWithProgress_2_double_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_double_double;

typedef struct __FIAsyncOperationWithProgress_2_double_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_double_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_double_double **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_double_double *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_double_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_double_double * This, /* [retval][out] */ __RPC__deref_out_opt double *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_double_doubleVtbl;

interface __FIAsyncOperationWithProgress_2_double_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_double_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_double_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_double_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_double_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_double_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_double_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_double_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_double_double_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_double_double_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_double_double_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_double_double_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_double_double_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_double_double_INTERFACE_DEFINED__




typedef struct __x_ABI_COopServer_CSampleProgress __x_ABI_COopServer_CSampleProgress;











/*
 *
 * Struct OopServer.SampleProgress
 *
 */

/* [version] */
struct __x_ABI_COopServer_CSampleProgress
{
    UINT32 SampleUInt;
    UINT32 SampleUInt2;
    UINT32 SampleUInt3;
    UINT32 SampleUInt4;
    UINT32 SampleUInt5;
};


/*
 *
 * Interface OopServer.IAnotherSampleClass
 *
 * Interface is a part of the implementation of type OopServer.AnotherSampleClass
 *
 *
 */
#if !defined(____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_IAnotherSampleClass[] = L"OopServer.IAnotherSampleClass";
/* [object, version, uuid("13C7B335-54EF-5194-B727-C3A308258C3C"), exclusiveto] */
typedef struct __x_ABI_COopServer_CIAnotherSampleClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_COopServer_CIAnotherSampleClass * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MyProperty )(
        __x_ABI_COopServer_CIAnotherSampleClass * This,
        /* [retval, out] */INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_COopServer_CIAnotherSampleClassVtbl;

interface __x_ABI_COopServer_CIAnotherSampleClass
{
    CONST_VTBL struct __x_ABI_COopServer_CIAnotherSampleClassVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_COopServer_CIAnotherSampleClass_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_COopServer_CIAnotherSampleClass_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_COopServer_CIAnotherSampleClass_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_COopServer_CIAnotherSampleClass_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_COopServer_CIAnotherSampleClass_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_COopServer_CIAnotherSampleClass_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_COopServer_CIAnotherSampleClass_get_MyProperty(This,value) \
    ( (This)->lpVtbl->get_MyProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_COopServer_CIAnotherSampleClass;
#endif /* !defined(____x_ABI_COopServer_CIAnotherSampleClass_INTERFACE_DEFINED__) */


/*
 *
 * Interface OopServer.ISampleClass
 *
 * Interface is a part of the implementation of type OopServer.SampleClass
 *
 *
 */
#if !defined(____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_ISampleClass[] = L"OopServer.ISampleClass";
/* [object, version, uuid("B0B7F9FC-71EC-5312-8DC0-1B264929F1B2"), exclusiveto] */
typedef struct __x_ABI_COopServer_CISampleClassVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_COopServer_CISampleClass * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_COopServer_CISampleClass * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_COopServer_CISampleClass * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_COopServer_CISampleClass * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_COopServer_CISampleClass * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_COopServer_CISampleClass * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MyProperty )(
        __x_ABI_COopServer_CISampleClass * This,
        /* [retval, out] */INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MyProperty )(
        __x_ABI_COopServer_CISampleClass * This,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNonActivatableClass )(
        __x_ABI_COopServer_CISampleClass * This,
        /* [retval, out] */__x_ABI_COopServer_CIAnotherSampleClass * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SampleAsync )(
        __x_ABI_COopServer_CISampleClass * This,
        /* [retval, out] */__FIAsyncOperationWithProgress_2_OopServer__CSampleResult_OopServer__CSampleProgress * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SampleSimpleAsync )(
        __x_ABI_COopServer_CISampleClass * This,
        /* [retval, out] */__FIAsyncOperationWithProgress_2_double_double * * operation
        );
    END_INTERFACE
    
} __x_ABI_COopServer_CISampleClassVtbl;

interface __x_ABI_COopServer_CISampleClass
{
    CONST_VTBL struct __x_ABI_COopServer_CISampleClassVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_COopServer_CISampleClass_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_COopServer_CISampleClass_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_COopServer_CISampleClass_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_COopServer_CISampleClass_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_COopServer_CISampleClass_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_COopServer_CISampleClass_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_COopServer_CISampleClass_get_MyProperty(This,value) \
    ( (This)->lpVtbl->get_MyProperty(This,value) )

#define __x_ABI_COopServer_CISampleClass_put_MyProperty(This,value) \
    ( (This)->lpVtbl->put_MyProperty(This,value) )

#define __x_ABI_COopServer_CISampleClass_GetNonActivatableClass(This,result) \
    ( (This)->lpVtbl->GetNonActivatableClass(This,result) )

#define __x_ABI_COopServer_CISampleClass_SampleAsync(This,operation) \
    ( (This)->lpVtbl->SampleAsync(This,operation) )

#define __x_ABI_COopServer_CISampleClass_SampleSimpleAsync(This,operation) \
    ( (This)->lpVtbl->SampleSimpleAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_COopServer_CISampleClass;
#endif /* !defined(____x_ABI_COopServer_CISampleClass_INTERFACE_DEFINED__) */


/*
 *
 * Interface OopServer.ISampleResult
 *
 * Interface is a part of the implementation of type OopServer.SampleResult
 *
 *
 */
#if !defined(____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__)
#define ____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_OopServer_ISampleResult[] = L"OopServer.ISampleResult";
/* [object, version, uuid("A4A98326-15D7-5219-929F-291707D12421"), exclusiveto] */
typedef struct __x_ABI_COopServer_CISampleResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_COopServer_CISampleResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_COopServer_CISampleResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_COopServer_CISampleResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_COopServer_CISampleResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_COopServer_CISampleResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_COopServer_CISampleResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SampleString )(
        __x_ABI_COopServer_CISampleResult * This,
        /* [retval, out] */HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SampleBoolean )(
        __x_ABI_COopServer_CISampleResult * This,
        /* [retval, out] */boolean * value
        );
    END_INTERFACE
    
} __x_ABI_COopServer_CISampleResultVtbl;

interface __x_ABI_COopServer_CISampleResult
{
    CONST_VTBL struct __x_ABI_COopServer_CISampleResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_COopServer_CISampleResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_COopServer_CISampleResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_COopServer_CISampleResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_COopServer_CISampleResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_COopServer_CISampleResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_COopServer_CISampleResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_COopServer_CISampleResult_get_SampleString(This,value) \
    ( (This)->lpVtbl->get_SampleString(This,value) )

#define __x_ABI_COopServer_CISampleResult_get_SampleBoolean(This,value) \
    ( (This)->lpVtbl->get_SampleBoolean(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_COopServer_CISampleResult;
#endif /* !defined(____x_ABI_COopServer_CISampleResult_INTERFACE_DEFINED__) */


/*
 *
 * Class OopServer.AnotherSampleClass
 *
 * Class implements the following interfaces:
 *    OopServer.IAnotherSampleClass ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_AnotherSampleClass_DEFINED
#define RUNTIMECLASS_OopServer_AnotherSampleClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_AnotherSampleClass[] = L"OopServer.AnotherSampleClass";
#endif


/*
 *
 * Class OopServer.SampleClass
 *
 * RuntimeClass can be activated.
 *
 * Class implements the following interfaces:
 *    OopServer.ISampleClass ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_SampleClass_DEFINED
#define RUNTIMECLASS_OopServer_SampleClass_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_SampleClass[] = L"OopServer.SampleClass";
#endif


/*
 *
 * Class OopServer.SampleResult
 *
 * Class implements the following interfaces:
 *    OopServer.ISampleResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */

#ifndef RUNTIMECLASS_OopServer_SampleResult_DEFINED
#define RUNTIMECLASS_OopServer_SampleResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_OopServer_SampleResult[] = L"OopServer.SampleResult";
#endif


#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
#endif // __OopServer_p_h__

#endif // __OopServer_h__
