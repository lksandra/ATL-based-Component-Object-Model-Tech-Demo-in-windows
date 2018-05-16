

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Filemgr.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Filemgr_i.h"

#define TYPE_FORMAT_STRING_SIZE   1233                              
#define PROC_FORMAT_STRING_SIZE   79                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _Filemgr_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Filemgr_MIDL_TYPE_FORMAT_STRING;

typedef struct _Filemgr_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Filemgr_MIDL_PROC_FORMAT_STRING;

typedef struct _Filemgr_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Filemgr_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Filemgr_MIDL_TYPE_FORMAT_STRING Filemgr__MIDL_TypeFormatString;
extern const Filemgr_MIDL_PROC_FORMAT_STRING Filemgr__MIDL_ProcFormatString;
extern const Filemgr_MIDL_EXPR_FORMAT_STRING Filemgr__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFIles_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IFIles_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const Filemgr_MIDL_PROC_FORMAT_STRING Filemgr__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure sendFileProperties */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 16 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter path */

/* 24 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter patterns */

/* 30 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getFmResults */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 58 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileList */

/* 66 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x4c6 ),	/* Type Offset=1222 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Filemgr_MIDL_TYPE_FORMAT_STRING Filemgr__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x18 ),	/* Offset= 24 (28) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x0 , 
			0x0,		/* 0 */
/* 18 */	NdrFcLong( 0x0 ),	/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 28 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (6) */
/* 34 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2) */
/* 48 */	
			0x11, 0x0,	/* FC_RP */
/* 50 */	NdrFcShort( 0x47e ),	/* Offset= 1150 (1200) */
/* 52 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x12, 0x0,	/* FC_UP */
/* 58 */	NdrFcShort( 0x464 ),	/* Offset= 1124 (1182) */
/* 60 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 62 */	NdrFcShort( 0x18 ),	/* 24 */
/* 64 */	NdrFcShort( 0xa ),	/* 10 */
/* 66 */	NdrFcLong( 0x8 ),	/* 8 */
/* 70 */	NdrFcShort( 0x64 ),	/* Offset= 100 (170) */
/* 72 */	NdrFcLong( 0xd ),	/* 13 */
/* 76 */	NdrFcShort( 0xae ),	/* Offset= 174 (250) */
/* 78 */	NdrFcLong( 0x9 ),	/* 9 */
/* 82 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (326) */
/* 84 */	NdrFcLong( 0xc ),	/* 12 */
/* 88 */	NdrFcShort( 0x30c ),	/* Offset= 780 (868) */
/* 90 */	NdrFcLong( 0x24 ),	/* 36 */
/* 94 */	NdrFcShort( 0x340 ),	/* Offset= 832 (926) */
/* 96 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 100 */	NdrFcShort( 0x35c ),	/* Offset= 860 (960) */
/* 102 */	NdrFcLong( 0x10 ),	/* 16 */
/* 106 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1002) */
/* 108 */	NdrFcLong( 0x2 ),	/* 2 */
/* 112 */	NdrFcShort( 0x3a4 ),	/* Offset= 932 (1044) */
/* 114 */	NdrFcLong( 0x3 ),	/* 3 */
/* 118 */	NdrFcShort( 0x3c8 ),	/* Offset= 968 (1086) */
/* 120 */	NdrFcLong( 0x14 ),	/* 20 */
/* 124 */	NdrFcShort( 0x3ec ),	/* Offset= 1004 (1128) */
/* 126 */	NdrFcShort( 0xffff ),	/* Offset= -1 (125) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 132 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 138 */	0x0 , 
			0x0,		/* 0 */
/* 140 */	NdrFcLong( 0x0 ),	/* 0 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 150 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x1 ),	/* 1 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 162 */	0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (28) */
/* 166 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 168 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 170 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 178 */	NdrFcShort( 0x4 ),	/* 4 */
/* 180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 182 */	0x11, 0x0,	/* FC_RP */
/* 184 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (128) */
/* 186 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 188 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 190 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 200 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 204 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 206 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 208 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 218 */	0x0 , 
			0x0,		/* 0 */
/* 220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 228 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 232 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 234 */	0x0 , 
			0x0,		/* 0 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 244 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 246 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (190) */
/* 248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 250 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x6 ),	/* Offset= 6 (262) */
/* 258 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 262 */	
			0x11, 0x0,	/* FC_RP */
/* 264 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (208) */
/* 266 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 268 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 278 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 280 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 282 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 284 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 294 */	0x0 , 
			0x0,		/* 0 */
/* 296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 304 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 308 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 310 */	0x0 , 
			0x0,		/* 0 */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 322 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (266) */
/* 324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 326 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x6 ),	/* Offset= 6 (338) */
/* 334 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 336 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 338 */	
			0x11, 0x0,	/* FC_RP */
/* 340 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (284) */
/* 342 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 344 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 346 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 348 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 350 */	0x0 , 
			0x0,		/* 0 */
/* 352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (362) */
/* 362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 364 */	NdrFcShort( 0x2f ),	/* 47 */
/* 366 */	NdrFcLong( 0x14 ),	/* 20 */
/* 370 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 372 */	NdrFcLong( 0x3 ),	/* 3 */
/* 376 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 378 */	NdrFcLong( 0x11 ),	/* 17 */
/* 382 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 384 */	NdrFcLong( 0x2 ),	/* 2 */
/* 388 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 390 */	NdrFcLong( 0x4 ),	/* 4 */
/* 394 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 396 */	NdrFcLong( 0x5 ),	/* 5 */
/* 400 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 402 */	NdrFcLong( 0xb ),	/* 11 */
/* 406 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 408 */	NdrFcLong( 0xa ),	/* 10 */
/* 412 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 414 */	NdrFcLong( 0x6 ),	/* 6 */
/* 418 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (650) */
/* 420 */	NdrFcLong( 0x7 ),	/* 7 */
/* 424 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 426 */	NdrFcLong( 0x8 ),	/* 8 */
/* 430 */	NdrFcShort( 0xfe54 ),	/* Offset= -428 (2) */
/* 432 */	NdrFcLong( 0xd ),	/* 13 */
/* 436 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (190) */
/* 438 */	NdrFcLong( 0x9 ),	/* 9 */
/* 442 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (266) */
/* 444 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 448 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (656) */
/* 450 */	NdrFcLong( 0x24 ),	/* 36 */
/* 454 */	NdrFcShort( 0xd2 ),	/* Offset= 210 (664) */
/* 456 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 460 */	NdrFcShort( 0xcc ),	/* Offset= 204 (664) */
/* 462 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 466 */	NdrFcShort( 0x106 ),	/* Offset= 262 (728) */
/* 468 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 472 */	NdrFcShort( 0x104 ),	/* Offset= 260 (732) */
/* 474 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 478 */	NdrFcShort( 0x102 ),	/* Offset= 258 (736) */
/* 480 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 484 */	NdrFcShort( 0x100 ),	/* Offset= 256 (740) */
/* 486 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 490 */	NdrFcShort( 0xfe ),	/* Offset= 254 (744) */
/* 492 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 496 */	NdrFcShort( 0xfc ),	/* Offset= 252 (748) */
/* 498 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 502 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (732) */
/* 504 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 508 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (736) */
/* 510 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 514 */	NdrFcShort( 0xee ),	/* Offset= 238 (752) */
/* 516 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 520 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (748) */
/* 522 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 526 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (756) */
/* 528 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 532 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (760) */
/* 534 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 538 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (764) */
/* 540 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 544 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (768) */
/* 546 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 550 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (780) */
/* 552 */	NdrFcLong( 0x10 ),	/* 16 */
/* 556 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 558 */	NdrFcLong( 0x12 ),	/* 18 */
/* 562 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 564 */	NdrFcLong( 0x13 ),	/* 19 */
/* 568 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 570 */	NdrFcLong( 0x15 ),	/* 21 */
/* 574 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 576 */	NdrFcLong( 0x16 ),	/* 22 */
/* 580 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 582 */	NdrFcLong( 0x17 ),	/* 23 */
/* 586 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 588 */	NdrFcLong( 0xe ),	/* 14 */
/* 592 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (788) */
/* 594 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 598 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (798) */
/* 600 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 604 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (802) */
/* 606 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 610 */	NdrFcShort( 0x7a ),	/* Offset= 122 (732) */
/* 612 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 616 */	NdrFcShort( 0x78 ),	/* Offset= 120 (736) */
/* 618 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 622 */	NdrFcShort( 0x76 ),	/* Offset= 118 (740) */
/* 624 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 628 */	NdrFcShort( 0x6c ),	/* Offset= 108 (736) */
/* 630 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 634 */	NdrFcShort( 0x66 ),	/* Offset= 102 (736) */
/* 636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 640 */	NdrFcShort( 0x0 ),	/* Offset= 0 (640) */
/* 642 */	NdrFcLong( 0x1 ),	/* 1 */
/* 646 */	NdrFcShort( 0x0 ),	/* Offset= 0 (646) */
/* 648 */	NdrFcShort( 0xffff ),	/* Offset= -1 (647) */
/* 650 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 654 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 656 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 658 */	NdrFcShort( 0x2 ),	/* Offset= 2 (660) */
/* 660 */	
			0x12, 0x0,	/* FC_UP */
/* 662 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1182) */
/* 664 */	
			0x12, 0x0,	/* FC_UP */
/* 666 */	NdrFcShort( 0x2a ),	/* Offset= 42 (708) */
/* 668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 670 */	NdrFcLong( 0x2f ),	/* 47 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 682 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 684 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 686 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0x1 ),	/* 1 */
/* 690 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 692 */	NdrFcShort( 0x4 ),	/* 4 */
/* 694 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 696 */	0x0 , 
			0x0,		/* 0 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 708 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0xa ),	/* Offset= 10 (724) */
/* 716 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 718 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 720 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (668) */
/* 722 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 724 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 726 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (686) */
/* 728 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 730 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 732 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 734 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 736 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 738 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 740 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 742 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 746 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 748 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 750 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x12, 0x0,	/* FC_UP */
/* 754 */	NdrFcShort( 0xff98 ),	/* Offset= -104 (650) */
/* 756 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 758 */	NdrFcShort( 0xfd0c ),	/* Offset= -756 (2) */
/* 760 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 762 */	NdrFcShort( 0xfdc4 ),	/* Offset= -572 (190) */
/* 764 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 766 */	NdrFcShort( 0xfe0c ),	/* Offset= -500 (266) */
/* 768 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 770 */	NdrFcShort( 0x2 ),	/* Offset= 2 (772) */
/* 772 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 774 */	NdrFcShort( 0x2 ),	/* Offset= 2 (776) */
/* 776 */	
			0x12, 0x0,	/* FC_UP */
/* 778 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1182) */
/* 780 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 782 */	NdrFcShort( 0x2 ),	/* Offset= 2 (784) */
/* 784 */	
			0x12, 0x0,	/* FC_UP */
/* 786 */	NdrFcShort( 0x14 ),	/* Offset= 20 (806) */
/* 788 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 790 */	NdrFcShort( 0x10 ),	/* 16 */
/* 792 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 794 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 796 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 798 */	
			0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (788) */
/* 802 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 804 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 808 */	NdrFcShort( 0x20 ),	/* 32 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* Offset= 0 (812) */
/* 814 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 816 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 818 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 820 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 822 */	NdrFcShort( 0xfe20 ),	/* Offset= -480 (342) */
/* 824 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 826 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 836 */	0x0 , 
			0x0,		/* 0 */
/* 838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 848 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 850 */	NdrFcShort( 0x4 ),	/* 4 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x1 ),	/* 1 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 860 */	0x12, 0x0,	/* FC_UP */
/* 862 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (806) */
/* 864 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 866 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 868 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x6 ),	/* Offset= 6 (880) */
/* 876 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x11, 0x0,	/* FC_RP */
/* 882 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (826) */
/* 884 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 894 */	0x0 , 
			0x0,		/* 0 */
/* 896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 906 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	0x12, 0x0,	/* FC_UP */
/* 920 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (708) */
/* 922 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 924 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 926 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x6 ),	/* Offset= 6 (938) */
/* 934 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 936 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 938 */	
			0x11, 0x0,	/* FC_RP */
/* 940 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (884) */
/* 942 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 944 */	NdrFcShort( 0x8 ),	/* 8 */
/* 946 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 948 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 952 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 954 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 956 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (942) */
			0x5b,		/* FC_END */
/* 960 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x18 ),	/* 24 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	NdrFcShort( 0xa ),	/* Offset= 10 (976) */
/* 968 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 970 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 972 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (948) */
/* 974 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 976 */	
			0x11, 0x0,	/* FC_RP */
/* 978 */	NdrFcShort( 0xfcfe ),	/* Offset= -770 (208) */
/* 980 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 982 */	NdrFcShort( 0x1 ),	/* 1 */
/* 984 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 990 */	0x0 , 
			0x0,		/* 0 */
/* 992 */	NdrFcLong( 0x0 ),	/* 0 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1002 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1014 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1016 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (980) */
/* 1018 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1020 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1022 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1024 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1026 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1032 */	0x0 , 
			0x0,		/* 0 */
/* 1034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1042 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1044 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1056 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1058 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1022) */
/* 1060 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1062 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1064 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1068 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1074 */	0x0 , 
			0x0,		/* 0 */
/* 1076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1086 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1090 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1092 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1098 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1100 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1064) */
/* 1102 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1104 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1106 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1110 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1116 */	0x0 , 
			0x0,		/* 0 */
/* 1118 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1128 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1138 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1140 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1142 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1106) */
/* 1144 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1146 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1148 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1154 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1156 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1162 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1164 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1166 */	0x0 , 
			0x0,		/* 0 */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1178 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1148) */
/* 1180 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1182 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1184 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1186 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1156) */
/* 1188 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1188) */
/* 1190 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1194 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1196 */	NdrFcShort( 0xfb90 ),	/* Offset= -1136 (60) */
/* 1198 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1200 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0xfb7c ),	/* Offset= -1156 (52) */
/* 1210 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1212 */	NdrFcShort( 0xa ),	/* Offset= 10 (1222) */
/* 1214 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1216 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1218) */
/* 1218 */	
			0x13, 0x0,	/* FC_OP */
/* 1220 */	NdrFcShort( 0xffda ),	/* Offset= -38 (1182) */
/* 1222 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1224 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1226 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1230 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (1214) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            LPSAFEARRAY_UserSize
            ,LPSAFEARRAY_UserMarshal
            ,LPSAFEARRAY_UserUnmarshal
            ,LPSAFEARRAY_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFIles, ver. 0.0,
   GUID={0xb9cf4871,0x46ef,0x4277,{0xa9,0xbe,0x23,0xde,0xcf,0x32,0xb1,0x2e}} */

#pragma code_seg(".orpc")
static const unsigned short IFIles_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO IFIles_ProxyInfo =
    {
    &Object_StubDesc,
    Filemgr__MIDL_ProcFormatString.Format,
    &IFIles_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IFIles_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Filemgr__MIDL_ProcFormatString.Format,
    &IFIles_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IFIlesProxyVtbl = 
{
    &IFIles_ProxyInfo,
    &IID_IFIles,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IFIles::sendFileProperties */ ,
    (void *) (INT_PTR) -1 /* IFIles::getFmResults */
};


static const PRPC_STUB_FUNCTION IFIles_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IFIlesStubVtbl =
{
    &IID_IFIles,
    &IFIles_ServerInfo,
    9,
    &IFIles_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Filemgr__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _Filemgr_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IFIlesProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Filemgr_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IFIlesStubVtbl,
    0
};

PCInterfaceName const _Filemgr_InterfaceNamesList[] = 
{
    "IFIles",
    0
};

const IID *  const _Filemgr_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _Filemgr_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Filemgr, pIID, n)

int __stdcall _Filemgr_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_Filemgr_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo Filemgr_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Filemgr_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Filemgr_StubVtblList,
    (const PCInterfaceName * ) & _Filemgr_InterfaceNamesList,
    (const IID ** ) & _Filemgr_BaseIIDList,
    & _Filemgr_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

