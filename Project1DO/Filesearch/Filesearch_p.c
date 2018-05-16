

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for Filesearch.idl:
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


#include "Filesearch_i.h"

#define TYPE_FORMAT_STRING_SIZE   1215                              
#define PROC_FORMAT_STRING_SIZE   85                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _Filesearch_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Filesearch_MIDL_TYPE_FORMAT_STRING;

typedef struct _Filesearch_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Filesearch_MIDL_PROC_FORMAT_STRING;

typedef struct _Filesearch_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Filesearch_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const Filesearch_MIDL_TYPE_FORMAT_STRING Filesearch__MIDL_TypeFormatString;
extern const Filesearch_MIDL_PROC_FORMAT_STRING Filesearch__MIDL_ProcFormatString;
extern const Filesearch_MIDL_EXPR_FORMAT_STRING Filesearch__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITextSearch_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ITextSearch_ProxyInfo;


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


static const Filesearch_MIDL_PROC_FORMAT_STRING Filesearch__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure sendIFmPtr */

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

	/* Parameter Fileptr */

/* 24 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter regexsring */

/* 30 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 38 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResults */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 44 */	NdrFcLong( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x8 ),	/* 8 */
/* 56 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 58 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Result1 */

/* 66 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 68 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 70 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Parameter Result2 */

/* 72 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 74 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 76 */	NdrFcShort( 0x4b4 ),	/* Type Offset=1204 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Filesearch_MIDL_TYPE_FORMAT_STRING Filesearch__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 14 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 20 */	
			0x12, 0x0,	/* FC_UP */
/* 22 */	NdrFcShort( 0x18 ),	/* Offset= 24 (46) */
/* 24 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 32 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 34 */	0x0 , 
			0x0,		/* 0 */
/* 36 */	NdrFcLong( 0x0 ),	/* 0 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 46 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (24) */
/* 52 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 54 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 56 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (20) */
/* 66 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 68 */	NdrFcShort( 0x470 ),	/* Offset= 1136 (1204) */
/* 70 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	
			0x13, 0x0,	/* FC_OP */
/* 76 */	NdrFcShort( 0x456 ),	/* Offset= 1110 (1186) */
/* 78 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 80 */	NdrFcShort( 0x18 ),	/* 24 */
/* 82 */	NdrFcShort( 0xa ),	/* 10 */
/* 84 */	NdrFcLong( 0x8 ),	/* 8 */
/* 88 */	NdrFcShort( 0x64 ),	/* Offset= 100 (188) */
/* 90 */	NdrFcLong( 0xd ),	/* 13 */
/* 94 */	NdrFcShort( 0x9c ),	/* Offset= 156 (250) */
/* 96 */	NdrFcLong( 0x9 ),	/* 9 */
/* 100 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (326) */
/* 102 */	NdrFcLong( 0xc ),	/* 12 */
/* 106 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (872) */
/* 108 */	NdrFcLong( 0x24 ),	/* 36 */
/* 112 */	NdrFcShort( 0x332 ),	/* Offset= 818 (930) */
/* 114 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 118 */	NdrFcShort( 0x34e ),	/* Offset= 846 (964) */
/* 120 */	NdrFcLong( 0x10 ),	/* 16 */
/* 124 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1006) */
/* 126 */	NdrFcLong( 0x2 ),	/* 2 */
/* 130 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1048) */
/* 132 */	NdrFcLong( 0x3 ),	/* 3 */
/* 136 */	NdrFcShort( 0x3ba ),	/* Offset= 954 (1090) */
/* 138 */	NdrFcLong( 0x14 ),	/* 20 */
/* 142 */	NdrFcShort( 0x3de ),	/* Offset= 990 (1132) */
/* 144 */	NdrFcShort( 0xffff ),	/* Offset= -1 (143) */
/* 146 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	0x0 , 
			0x0,		/* 0 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 168 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 170 */	NdrFcShort( 0x4 ),	/* 4 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x1 ),	/* 1 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	0x13, 0x0,	/* FC_OP */
/* 182 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (46) */
/* 184 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 188 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 192 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 200 */	0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (146) */
/* 204 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 206 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
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
/* 246 */	NdrFcShort( 0xff0c ),	/* Offset= -244 (2) */
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
/* 430 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (656) */
/* 432 */	NdrFcLong( 0xd ),	/* 13 */
/* 436 */	NdrFcShort( 0xfe4e ),	/* Offset= -434 (2) */
/* 438 */	NdrFcLong( 0x9 ),	/* 9 */
/* 442 */	NdrFcShort( 0xff50 ),	/* Offset= -176 (266) */
/* 444 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 448 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (660) */
/* 450 */	NdrFcLong( 0x24 ),	/* 36 */
/* 454 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (668) */
/* 456 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 460 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (668) */
/* 462 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 466 */	NdrFcShort( 0x10a ),	/* Offset= 266 (732) */
/* 468 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 472 */	NdrFcShort( 0x108 ),	/* Offset= 264 (736) */
/* 474 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 478 */	NdrFcShort( 0x106 ),	/* Offset= 262 (740) */
/* 480 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 484 */	NdrFcShort( 0x104 ),	/* Offset= 260 (744) */
/* 486 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 490 */	NdrFcShort( 0x102 ),	/* Offset= 258 (748) */
/* 492 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 496 */	NdrFcShort( 0x100 ),	/* Offset= 256 (752) */
/* 498 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 502 */	NdrFcShort( 0xea ),	/* Offset= 234 (736) */
/* 504 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 508 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (740) */
/* 510 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 514 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (756) */
/* 516 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 520 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (752) */
/* 522 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 526 */	NdrFcShort( 0xea ),	/* Offset= 234 (760) */
/* 528 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 532 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (764) */
/* 534 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 538 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (768) */
/* 540 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 544 */	NdrFcShort( 0xe4 ),	/* Offset= 228 (772) */
/* 546 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 550 */	NdrFcShort( 0xea ),	/* Offset= 234 (784) */
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
/* 592 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (792) */
/* 594 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 598 */	NdrFcShort( 0xcc ),	/* Offset= 204 (802) */
/* 600 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 604 */	NdrFcShort( 0xca ),	/* Offset= 202 (806) */
/* 606 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 610 */	NdrFcShort( 0x7e ),	/* Offset= 126 (736) */
/* 612 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 616 */	NdrFcShort( 0x7c ),	/* Offset= 124 (740) */
/* 618 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 622 */	NdrFcShort( 0x7a ),	/* Offset= 122 (744) */
/* 624 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 628 */	NdrFcShort( 0x70 ),	/* Offset= 112 (740) */
/* 630 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 634 */	NdrFcShort( 0x6a ),	/* Offset= 106 (740) */
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
			0x13, 0x0,	/* FC_OP */
/* 658 */	NdrFcShort( 0xfd9c ),	/* Offset= -612 (46) */
/* 660 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 662 */	NdrFcShort( 0x2 ),	/* Offset= 2 (664) */
/* 664 */	
			0x13, 0x0,	/* FC_OP */
/* 666 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1186) */
/* 668 */	
			0x13, 0x0,	/* FC_OP */
/* 670 */	NdrFcShort( 0x2a ),	/* Offset= 42 (712) */
/* 672 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 674 */	NdrFcLong( 0x2f ),	/* 47 */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 682 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 684 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 686 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 688 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 690 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 694 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 696 */	NdrFcShort( 0x4 ),	/* 4 */
/* 698 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 700 */	0x0 , 
			0x0,		/* 0 */
/* 702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 712 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 714 */	NdrFcShort( 0x10 ),	/* 16 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0xa ),	/* Offset= 10 (728) */
/* 720 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 722 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 724 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (672) */
/* 726 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 728 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 730 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (690) */
/* 732 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 734 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 736 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 738 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 740 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 742 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 744 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 746 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 748 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 750 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 752 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 754 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 756 */	
			0x13, 0x0,	/* FC_OP */
/* 758 */	NdrFcShort( 0xff94 ),	/* Offset= -108 (650) */
/* 760 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 762 */	NdrFcShort( 0xff96 ),	/* Offset= -106 (656) */
/* 764 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 766 */	NdrFcShort( 0xfd04 ),	/* Offset= -764 (2) */
/* 768 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 770 */	NdrFcShort( 0xfe08 ),	/* Offset= -504 (266) */
/* 772 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 774 */	NdrFcShort( 0x2 ),	/* Offset= 2 (776) */
/* 776 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 778 */	NdrFcShort( 0x2 ),	/* Offset= 2 (780) */
/* 780 */	
			0x13, 0x0,	/* FC_OP */
/* 782 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1186) */
/* 784 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 786 */	NdrFcShort( 0x2 ),	/* Offset= 2 (788) */
/* 788 */	
			0x13, 0x0,	/* FC_OP */
/* 790 */	NdrFcShort( 0x14 ),	/* Offset= 20 (810) */
/* 792 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 794 */	NdrFcShort( 0x10 ),	/* 16 */
/* 796 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 798 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 800 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 802 */	
			0x13, 0x0,	/* FC_OP */
/* 804 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (792) */
/* 806 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 808 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 810 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 812 */	NdrFcShort( 0x20 ),	/* 32 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x0 ),	/* Offset= 0 (816) */
/* 818 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 820 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 822 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 824 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 826 */	NdrFcShort( 0xfe1c ),	/* Offset= -484 (342) */
/* 828 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 830 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 840 */	0x0 , 
			0x0,		/* 0 */
/* 842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 850 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 852 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	0x13, 0x0,	/* FC_OP */
/* 866 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (810) */
/* 868 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 872 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x6 ),	/* Offset= 6 (884) */
/* 880 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 884 */	
			0x11, 0x0,	/* FC_RP */
/* 886 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (830) */
/* 888 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 890 */	NdrFcShort( 0x4 ),	/* 4 */
/* 892 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 898 */	0x0 , 
			0x0,		/* 0 */
/* 900 */	NdrFcLong( 0x0 ),	/* 0 */
/* 904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 908 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 912 */	NdrFcShort( 0x4 ),	/* 4 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 922 */	0x13, 0x0,	/* FC_OP */
/* 924 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (712) */
/* 926 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 930 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x6 ),	/* Offset= 6 (942) */
/* 938 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 940 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 942 */	
			0x11, 0x0,	/* FC_RP */
/* 944 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (888) */
/* 946 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 952 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 954 */	NdrFcShort( 0x10 ),	/* 16 */
/* 956 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 958 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 960 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (946) */
			0x5b,		/* FC_END */
/* 964 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x18 ),	/* 24 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0xa ),	/* Offset= 10 (980) */
/* 972 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 974 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (952) */
/* 978 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 980 */	
			0x11, 0x0,	/* FC_RP */
/* 982 */	NdrFcShort( 0xfcfa ),	/* Offset= -774 (208) */
/* 984 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 986 */	NdrFcShort( 0x1 ),	/* 1 */
/* 988 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 994 */	0x0 , 
			0x0,		/* 0 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1004 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1006 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1012 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1016 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1018 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1020 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (984) */
/* 1022 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1024 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1026 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1028 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1030 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1036 */	0x0 , 
			0x0,		/* 0 */
/* 1038 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1046 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1048 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1054 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1058 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1060 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1062 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1026) */
/* 1064 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1066 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1068 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1072 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1078 */	0x0 , 
			0x0,		/* 0 */
/* 1080 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1088 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1090 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1094 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1098 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1102 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1104 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1068) */
/* 1106 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1108 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1110 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1114 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1118 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1120 */	0x0 , 
			0x0,		/* 0 */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1130 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1132 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1138 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1144 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1146 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1110) */
/* 1148 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1150 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1152 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1160 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1164 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1166 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1168 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1170 */	0x0 , 
			0x0,		/* 0 */
/* 1172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1180 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1152) */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1188 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1190 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1160) */
/* 1192 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1192) */
/* 1194 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1198 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1200 */	NdrFcShort( 0xfb9e ),	/* Offset= -1122 (78) */
/* 1202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1204 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1206 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0xfb8a ),	/* Offset= -1142 (70) */

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


/* Object interface: ITextSearch, ver. 0.0,
   GUID={0x2957fd6d,0xc1cc,0x453f,{0xa9,0xa3,0xaf,0xc8,0x49,0xee,0x65,0x5c}} */

#pragma code_seg(".orpc")
static const unsigned short ITextSearch_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    42
    };

static const MIDL_STUBLESS_PROXY_INFO ITextSearch_ProxyInfo =
    {
    &Object_StubDesc,
    Filesearch__MIDL_ProcFormatString.Format,
    &ITextSearch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ITextSearch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Filesearch__MIDL_ProcFormatString.Format,
    &ITextSearch_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _ITextSearchProxyVtbl = 
{
    &ITextSearch_ProxyInfo,
    &IID_ITextSearch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* ITextSearch::sendIFmPtr */ ,
    (void *) (INT_PTR) -1 /* ITextSearch::getResults */
};


static const PRPC_STUB_FUNCTION ITextSearch_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _ITextSearchStubVtbl =
{
    &IID_ITextSearch,
    &ITextSearch_ServerInfo,
    9,
    &ITextSearch_table[-3],
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
    Filesearch__MIDL_TypeFormatString.Format,
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

const CInterfaceProxyVtbl * const _Filesearch_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITextSearchProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Filesearch_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITextSearchStubVtbl,
    0
};

PCInterfaceName const _Filesearch_InterfaceNamesList[] = 
{
    "ITextSearch",
    0
};

const IID *  const _Filesearch_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _Filesearch_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Filesearch, pIID, n)

int __stdcall _Filesearch_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_Filesearch_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo Filesearch_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Filesearch_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Filesearch_StubVtblList,
    (const PCInterfaceName * ) & _Filesearch_InterfaceNamesList,
    (const IID ** ) & _Filesearch_BaseIIDList,
    & _Filesearch_IID_Lookup, 
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

