

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 12:14:07 2038
 */
/* Compiler settings for PUAxControlTest1.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __PUAxControlTest1idl_h__
#define __PUAxControlTest1idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DPUAxControlTest1_FWD_DEFINED__
#define ___DPUAxControlTest1_FWD_DEFINED__
typedef interface _DPUAxControlTest1 _DPUAxControlTest1;

#endif 	/* ___DPUAxControlTest1_FWD_DEFINED__ */


#ifndef ___DPUAxControlTest1Events_FWD_DEFINED__
#define ___DPUAxControlTest1Events_FWD_DEFINED__
typedef interface _DPUAxControlTest1Events _DPUAxControlTest1Events;

#endif 	/* ___DPUAxControlTest1Events_FWD_DEFINED__ */


#ifndef __PUAxControlTest1_FWD_DEFINED__
#define __PUAxControlTest1_FWD_DEFINED__

#ifdef __cplusplus
typedef class PUAxControlTest1 PUAxControlTest1;
#else
typedef struct PUAxControlTest1 PUAxControlTest1;
#endif /* __cplusplus */

#endif 	/* __PUAxControlTest1_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_PUAxControlTest1_0000_0000 */
/* [local] */ 

#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(push)
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_PUAxControlTest1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PUAxControlTest1_0000_0000_v0_0_s_ifspec;


#ifndef __PUAxControlTest1Lib_LIBRARY_DEFINED__
#define __PUAxControlTest1Lib_LIBRARY_DEFINED__

/* library PUAxControlTest1Lib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_PUAxControlTest1Lib;

#ifndef ___DPUAxControlTest1_DISPINTERFACE_DEFINED__
#define ___DPUAxControlTest1_DISPINTERFACE_DEFINED__

/* dispinterface _DPUAxControlTest1 */
/* [uuid] */ 


EXTERN_C const IID DIID__DPUAxControlTest1;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B938336C-9D16-4E46-BC5A-39216FD2F97A")
    _DPUAxControlTest1 : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DPUAxControlTest1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DPUAxControlTest1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DPUAxControlTest1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DPUAxControlTest1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DPUAxControlTest1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DPUAxControlTest1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DPUAxControlTest1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DPUAxControlTest1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DPUAxControlTest1Vtbl;

    interface _DPUAxControlTest1
    {
        CONST_VTBL struct _DPUAxControlTest1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DPUAxControlTest1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DPUAxControlTest1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DPUAxControlTest1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DPUAxControlTest1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DPUAxControlTest1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DPUAxControlTest1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DPUAxControlTest1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DPUAxControlTest1_DISPINTERFACE_DEFINED__ */


#ifndef ___DPUAxControlTest1Events_DISPINTERFACE_DEFINED__
#define ___DPUAxControlTest1Events_DISPINTERFACE_DEFINED__

/* dispinterface _DPUAxControlTest1Events */
/* [uuid] */ 


EXTERN_C const IID DIID__DPUAxControlTest1Events;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("75C0DE38-FBAD-42F4-950F-D4F893E77F75")
    _DPUAxControlTest1Events : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DPUAxControlTest1EventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DPUAxControlTest1Events * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DPUAxControlTest1Events * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DPUAxControlTest1Events * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DPUAxControlTest1Events * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DPUAxControlTest1Events * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DPUAxControlTest1Events * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DPUAxControlTest1Events * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } _DPUAxControlTest1EventsVtbl;

    interface _DPUAxControlTest1Events
    {
        CONST_VTBL struct _DPUAxControlTest1EventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DPUAxControlTest1Events_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DPUAxControlTest1Events_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DPUAxControlTest1Events_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DPUAxControlTest1Events_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DPUAxControlTest1Events_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DPUAxControlTest1Events_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DPUAxControlTest1Events_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DPUAxControlTest1Events_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PUAxControlTest1;

#ifdef __cplusplus

class DECLSPEC_UUID("83F0E680-C802-4532-8098-5FBA4C900C8F")
PUAxControlTest1;
#endif
#endif /* __PUAxControlTest1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


