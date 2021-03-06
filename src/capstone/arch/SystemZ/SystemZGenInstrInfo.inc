/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Target Instruction Enum Values                                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Capstone Disassembly Engine */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2014 */


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM

enum {
    SystemZ_PHI	= 0,
    SystemZ_INLINEASM	= 1,
    SystemZ_CFI_INSTRUCTION	= 2,
    SystemZ_EH_LABEL	= 3,
    SystemZ_GC_LABEL	= 4,
    SystemZ_KILL	= 5,
    SystemZ_EXTRACT_SUBREG	= 6,
    SystemZ_INSERT_SUBREG	= 7,
    SystemZ_IMPLICIT_DEF	= 8,
    SystemZ_SUBREG_TO_REG	= 9,
    SystemZ_COPY_TO_REGCLASS	= 10,
    SystemZ_DBG_VALUE	= 11,
    SystemZ_REG_SEQUENCE	= 12,
    SystemZ_COPY	= 13,
    SystemZ_BUNDLE	= 14,
    SystemZ_LIFETIME_START	= 15,
    SystemZ_LIFETIME_END	= 16,
    SystemZ_STACKMAP	= 17,
    SystemZ_PATCHPOINT	= 18,
    SystemZ_A	= 19,
    SystemZ_ADB	= 20,
    SystemZ_ADBR	= 21,
    SystemZ_ADJCALLSTACKDOWN	= 22,
    SystemZ_ADJCALLSTACKUP	= 23,
    SystemZ_ADJDYNALLOC	= 24,
    SystemZ_AEB	= 25,
    SystemZ_AEBR	= 26,
    SystemZ_AEXT128_64	= 27,
    SystemZ_AFI	= 28,
    SystemZ_AFIMux	= 29,
    SystemZ_AG	= 30,
    SystemZ_AGF	= 31,
    SystemZ_AGFI	= 32,
    SystemZ_AGFR	= 33,
    SystemZ_AGHI	= 34,
    SystemZ_AGHIK	= 35,
    SystemZ_AGR	= 36,
    SystemZ_AGRK	= 37,
    SystemZ_AGSI	= 38,
    SystemZ_AH	= 39,
    SystemZ_AHI	= 40,
    SystemZ_AHIK	= 41,
    SystemZ_AHIMux	= 42,
    SystemZ_AHIMuxK	= 43,
    SystemZ_AHY	= 44,
    SystemZ_AIH	= 45,
    SystemZ_AL	= 46,
    SystemZ_ALC	= 47,
    SystemZ_ALCG	= 48,
    SystemZ_ALCGR	= 49,
    SystemZ_ALCR	= 50,
    SystemZ_ALFI	= 51,
    SystemZ_ALG	= 52,
    SystemZ_ALGF	= 53,
    SystemZ_ALGFI	= 54,
    SystemZ_ALGFR	= 55,
    SystemZ_ALGHSIK	= 56,
    SystemZ_ALGR	= 57,
    SystemZ_ALGRK	= 58,
    SystemZ_ALHSIK	= 59,
    SystemZ_ALR	= 60,
    SystemZ_ALRK	= 61,
    SystemZ_ALY	= 62,
    SystemZ_AR	= 63,
    SystemZ_ARK	= 64,
    SystemZ_ASI	= 65,
    SystemZ_ATOMIC_CMP_SWAPW	= 66,
    SystemZ_ATOMIC_LOADW_AFI	= 67,
    SystemZ_ATOMIC_LOADW_AR	= 68,
    SystemZ_ATOMIC_LOADW_MAX	= 69,
    SystemZ_ATOMIC_LOADW_MIN	= 70,
    SystemZ_ATOMIC_LOADW_NILH	= 71,
    SystemZ_ATOMIC_LOADW_NILHi	= 72,
    SystemZ_ATOMIC_LOADW_NR	= 73,
    SystemZ_ATOMIC_LOADW_NRi	= 74,
    SystemZ_ATOMIC_LOADW_OILH	= 75,
    SystemZ_ATOMIC_LOADW_OR	= 76,
    SystemZ_ATOMIC_LOADW_SR	= 77,
    SystemZ_ATOMIC_LOADW_UMAX	= 78,
    SystemZ_ATOMIC_LOADW_UMIN	= 79,
    SystemZ_ATOMIC_LOADW_XILF	= 80,
    SystemZ_ATOMIC_LOADW_XR	= 81,
    SystemZ_ATOMIC_LOAD_AFI	= 82,
    SystemZ_ATOMIC_LOAD_AGFI	= 83,
    SystemZ_ATOMIC_LOAD_AGHI	= 84,
    SystemZ_ATOMIC_LOAD_AGR	= 85,
    SystemZ_ATOMIC_LOAD_AHI	= 86,
    SystemZ_ATOMIC_LOAD_AR	= 87,
    SystemZ_ATOMIC_LOAD_MAX_32	= 88,
    SystemZ_ATOMIC_LOAD_MAX_64	= 89,
    SystemZ_ATOMIC_LOAD_MIN_32	= 90,
    SystemZ_ATOMIC_LOAD_MIN_64	= 91,
    SystemZ_ATOMIC_LOAD_NGR	= 92,
    SystemZ_ATOMIC_LOAD_NGRi	= 93,
    SystemZ_ATOMIC_LOAD_NIHF64	= 94,
    SystemZ_ATOMIC_LOAD_NIHF64i	= 95,
    SystemZ_ATOMIC_LOAD_NIHH64	= 96,
    SystemZ_ATOMIC_LOAD_NIHH64i	= 97,
    SystemZ_ATOMIC_LOAD_NIHL64	= 98,
    SystemZ_ATOMIC_LOAD_NIHL64i	= 99,
    SystemZ_ATOMIC_LOAD_NILF	= 100,
    SystemZ_ATOMIC_LOAD_NILF64	= 101,
    SystemZ_ATOMIC_LOAD_NILF64i	= 102,
    SystemZ_ATOMIC_LOAD_NILFi	= 103,
    SystemZ_ATOMIC_LOAD_NILH	= 104,
    SystemZ_ATOMIC_LOAD_NILH64	= 105,
    SystemZ_ATOMIC_LOAD_NILH64i	= 106,
    SystemZ_ATOMIC_LOAD_NILHi	= 107,
    SystemZ_ATOMIC_LOAD_NILL	= 108,
    SystemZ_ATOMIC_LOAD_NILL64	= 109,
    SystemZ_ATOMIC_LOAD_NILL64i	= 110,
    SystemZ_ATOMIC_LOAD_NILLi	= 111,
    SystemZ_ATOMIC_LOAD_NR	= 112,
    SystemZ_ATOMIC_LOAD_NRi	= 113,
    SystemZ_ATOMIC_LOAD_OGR	= 114,
    SystemZ_ATOMIC_LOAD_OIHF64	= 115,
    SystemZ_ATOMIC_LOAD_OIHH64	= 116,
    SystemZ_ATOMIC_LOAD_OIHL64	= 117,
    SystemZ_ATOMIC_LOAD_OILF	= 118,
    SystemZ_ATOMIC_LOAD_OILF64	= 119,
    SystemZ_ATOMIC_LOAD_OILH	= 120,
    SystemZ_ATOMIC_LOAD_OILH64	= 121,
    SystemZ_ATOMIC_LOAD_OILL	= 122,
    SystemZ_ATOMIC_LOAD_OILL64	= 123,
    SystemZ_ATOMIC_LOAD_OR	= 124,
    SystemZ_ATOMIC_LOAD_SGR	= 125,
    SystemZ_ATOMIC_LOAD_SR	= 126,
    SystemZ_ATOMIC_LOAD_UMAX_32	= 127,
    SystemZ_ATOMIC_LOAD_UMAX_64	= 128,
    SystemZ_ATOMIC_LOAD_UMIN_32	= 129,
    SystemZ_ATOMIC_LOAD_UMIN_64	= 130,
    SystemZ_ATOMIC_LOAD_XGR	= 131,
    SystemZ_ATOMIC_LOAD_XIHF64	= 132,
    SystemZ_ATOMIC_LOAD_XILF	= 133,
    SystemZ_ATOMIC_LOAD_XILF64	= 134,
    SystemZ_ATOMIC_LOAD_XR	= 135,
    SystemZ_ATOMIC_SWAPW	= 136,
    SystemZ_ATOMIC_SWAP_32	= 137,
    SystemZ_ATOMIC_SWAP_64	= 138,
    SystemZ_AXBR	= 139,
    SystemZ_AY	= 140,
    SystemZ_AsmBCR	= 141,
    SystemZ_AsmBRC	= 142,
    SystemZ_AsmBRCL	= 143,
    SystemZ_AsmCGIJ	= 144,
    SystemZ_AsmCGRJ	= 145,
    SystemZ_AsmCIJ	= 146,
    SystemZ_AsmCLGIJ	= 147,
    SystemZ_AsmCLGRJ	= 148,
    SystemZ_AsmCLIJ	= 149,
    SystemZ_AsmCLRJ	= 150,
    SystemZ_AsmCRJ	= 151,
    SystemZ_AsmEBR	= 152,
    SystemZ_AsmEJ	= 153,
    SystemZ_AsmEJG	= 154,
    SystemZ_AsmELOC	= 155,
    SystemZ_AsmELOCG	= 156,
    SystemZ_AsmELOCGR	= 157,
    SystemZ_AsmELOCR	= 158,
    SystemZ_AsmESTOC	= 159,
    SystemZ_AsmESTOCG	= 160,
    SystemZ_AsmHBR	= 161,
    SystemZ_AsmHEBR	= 162,
    SystemZ_AsmHEJ	= 163,
    SystemZ_AsmHEJG	= 164,
    SystemZ_AsmHELOC	= 165,
    SystemZ_AsmHELOCG	= 166,
    SystemZ_AsmHELOCGR	= 167,
    SystemZ_AsmHELOCR	= 168,
    SystemZ_AsmHESTOC	= 169,
    SystemZ_AsmHESTOCG	= 170,
    SystemZ_AsmHJ	= 171,
    SystemZ_AsmHJG	= 172,
    SystemZ_AsmHLOC	= 173,
    SystemZ_AsmHLOCG	= 174,
    SystemZ_AsmHLOCGR	= 175,
    SystemZ_AsmHLOCR	= 176,
    SystemZ_AsmHSTOC	= 177,
    SystemZ_AsmHSTOCG	= 178,
    SystemZ_AsmJEAltCGI	= 179,
    SystemZ_AsmJEAltCGR	= 180,
    SystemZ_AsmJEAltCI	= 181,
    SystemZ_AsmJEAltCLGI	= 182,
    SystemZ_AsmJEAltCLGR	= 183,
    SystemZ_AsmJEAltCLI	= 184,
    SystemZ_AsmJEAltCLR	= 185,
    SystemZ_AsmJEAltCR	= 186,
    SystemZ_AsmJECGI	= 187,
    SystemZ_AsmJECGR	= 188,
    SystemZ_AsmJECI	= 189,
    SystemZ_AsmJECLGI	= 190,
    SystemZ_AsmJECLGR	= 191,
    SystemZ_AsmJECLI	= 192,
    SystemZ_AsmJECLR	= 193,
    SystemZ_AsmJECR	= 194,
    SystemZ_AsmJHAltCGI	= 195,
    SystemZ_AsmJHAltCGR	= 196,
    SystemZ_AsmJHAltCI	= 197,
    SystemZ_AsmJHAltCLGI	= 198,
    SystemZ_AsmJHAltCLGR	= 199,
    SystemZ_AsmJHAltCLI	= 200,
    SystemZ_AsmJHAltCLR	= 201,
    SystemZ_AsmJHAltCR	= 202,
    SystemZ_AsmJHCGI	= 203,
    SystemZ_AsmJHCGR	= 204,
    SystemZ_AsmJHCI	= 205,
    SystemZ_AsmJHCLGI	= 206,
    SystemZ_AsmJHCLGR	= 207,
    SystemZ_AsmJHCLI	= 208,
    SystemZ_AsmJHCLR	= 209,
    SystemZ_AsmJHCR	= 210,
    SystemZ_AsmJHEAltCGI	= 211,
    SystemZ_AsmJHEAltCGR	= 212,
    SystemZ_AsmJHEAltCI	= 213,
    SystemZ_AsmJHEAltCLGI	= 214,
    SystemZ_AsmJHEAltCLGR	= 215,
    SystemZ_AsmJHEAltCLI	= 216,
    SystemZ_AsmJHEAltCLR	= 217,
    SystemZ_AsmJHEAltCR	= 218,
    SystemZ_AsmJHECGI	= 219,
    SystemZ_AsmJHECGR	= 220,
    SystemZ_AsmJHECI	= 221,
    SystemZ_AsmJHECLGI	= 222,
    SystemZ_AsmJHECLGR	= 223,
    SystemZ_AsmJHECLI	= 224,
    SystemZ_AsmJHECLR	= 225,
    SystemZ_AsmJHECR	= 226,
    SystemZ_AsmJLAltCGI	= 227,
    SystemZ_AsmJLAltCGR	= 228,
    SystemZ_AsmJLAltCI	= 229,
    SystemZ_AsmJLAltCLGI	= 230,
    SystemZ_AsmJLAltCLGR	= 231,
    SystemZ_AsmJLAltCLI	= 232,
    SystemZ_AsmJLAltCLR	= 233,
    SystemZ_AsmJLAltCR	= 234,
    SystemZ_AsmJLCGI	= 235,
    SystemZ_AsmJLCGR	= 236,
    SystemZ_AsmJLCI	= 237,
    SystemZ_AsmJLCLGI	= 238,
    SystemZ_AsmJLCLGR	= 239,
    SystemZ_AsmJLCLI	= 240,
    SystemZ_AsmJLCLR	= 241,
    SystemZ_AsmJLCR	= 242,
    SystemZ_AsmJLEAltCGI	= 243,
    SystemZ_AsmJLEAltCGR	= 244,
    SystemZ_AsmJLEAltCI	= 245,
    SystemZ_AsmJLEAltCLGI	= 246,
    SystemZ_AsmJLEAltCLGR	= 247,
    SystemZ_AsmJLEAltCLI	= 248,
    SystemZ_AsmJLEAltCLR	= 249,
    SystemZ_AsmJLEAltCR	= 250,
    SystemZ_AsmJLECGI	= 251,
    SystemZ_AsmJLECGR	= 252,
    SystemZ_AsmJLECI	= 253,
    SystemZ_AsmJLECLGI	= 254,
    SystemZ_AsmJLECLGR	= 255,
    SystemZ_AsmJLECLI	= 256,
    SystemZ_AsmJLECLR	= 257,
    SystemZ_AsmJLECR	= 258,
    SystemZ_AsmJLHAltCGI	= 259,
    SystemZ_AsmJLHAltCGR	= 260,
    SystemZ_AsmJLHAltCI	= 261,
    SystemZ_AsmJLHAltCLGI	= 262,
    SystemZ_AsmJLHAltCLGR	= 263,
    SystemZ_AsmJLHAltCLI	= 264,
    SystemZ_AsmJLHAltCLR	= 265,
    SystemZ_AsmJLHAltCR	= 266,
    SystemZ_AsmJLHCGI	= 267,
    SystemZ_AsmJLHCGR	= 268,
    SystemZ_AsmJLHCI	= 269,
    SystemZ_AsmJLHCLGI	= 270,
    SystemZ_AsmJLHCLGR	= 271,
    SystemZ_AsmJLHCLI	= 272,
    SystemZ_AsmJLHCLR	= 273,
    SystemZ_AsmJLHCR	= 274,
    SystemZ_AsmLBR	= 275,
    SystemZ_AsmLEBR	= 276,
    SystemZ_AsmLEJ	= 277,
    SystemZ_AsmLEJG	= 278,
    SystemZ_AsmLELOC	= 279,
    SystemZ_AsmLELOCG	= 280,
    SystemZ_AsmLELOCGR	= 281,
    SystemZ_AsmLELOCR	= 282,
    SystemZ_AsmLESTOC	= 283,
    SystemZ_AsmLESTOCG	= 284,
    SystemZ_AsmLHBR	= 285,
    SystemZ_AsmLHJ	= 286,
    SystemZ_AsmLHJG	= 287,
    SystemZ_AsmLHLOC	= 288,
    SystemZ_AsmLHLOCG	= 289,
    SystemZ_AsmLHLOCGR	= 290,
    SystemZ_AsmLHLOCR	= 291,
    SystemZ_AsmLHSTOC	= 292,
    SystemZ_AsmLHSTOCG	= 293,
    SystemZ_AsmLJ	= 294,
    SystemZ_AsmLJG	= 295,
    SystemZ_AsmLLOC	= 296,
    SystemZ_AsmLLOCG	= 297,
    SystemZ_AsmLLOCGR	= 298,
    SystemZ_AsmLLOCR	= 299,
    SystemZ_AsmLOC	= 300,
    SystemZ_AsmLOCG	= 301,
    SystemZ_AsmLOCGR	= 302,
    SystemZ_AsmLOCR	= 303,
    SystemZ_AsmLSTOC	= 304,
    SystemZ_AsmLSTOCG	= 305,
    SystemZ_AsmNEBR	= 306,
    SystemZ_AsmNEJ	= 307,
    SystemZ_AsmNEJG	= 308,
    SystemZ_AsmNELOC	= 309,
    SystemZ_AsmNELOCG	= 310,
    SystemZ_AsmNELOCGR	= 311,
    SystemZ_AsmNELOCR	= 312,
    SystemZ_AsmNESTOC	= 313,
    SystemZ_AsmNESTOCG	= 314,
    SystemZ_AsmNHBR	= 315,
    SystemZ_AsmNHEBR	= 316,
    SystemZ_AsmNHEJ	= 317,
    SystemZ_AsmNHEJG	= 318,
    SystemZ_AsmNHELOC	= 319,
    SystemZ_AsmNHELOCG	= 320,
    SystemZ_AsmNHELOCGR	= 321,
    SystemZ_AsmNHELOCR	= 322,
    SystemZ_AsmNHESTOC	= 323,
    SystemZ_AsmNHESTOCG	= 324,
    SystemZ_AsmNHJ	= 325,
    SystemZ_AsmNHJG	= 326,
    SystemZ_AsmNHLOC	= 327,
    SystemZ_AsmNHLOCG	= 328,
    SystemZ_AsmNHLOCGR	= 329,
    SystemZ_AsmNHLOCR	= 330,
    SystemZ_AsmNHSTOC	= 331,
    SystemZ_AsmNHSTOCG	= 332,
    SystemZ_AsmNLBR	= 333,
    SystemZ_AsmNLEBR	= 334,
    SystemZ_AsmNLEJ	= 335,
    SystemZ_AsmNLEJG	= 336,
    SystemZ_AsmNLELOC	= 337,
    SystemZ_AsmNLELOCG	= 338,
    SystemZ_AsmNLELOCGR	= 339,
    SystemZ_AsmNLELOCR	= 340,
    SystemZ_AsmNLESTOC	= 341,
    SystemZ_AsmNLESTOCG	= 342,
    SystemZ_AsmNLHBR	= 343,
    SystemZ_AsmNLHJ	= 344,
    SystemZ_AsmNLHJG	= 345,
    SystemZ_AsmNLHLOC	= 346,
    SystemZ_AsmNLHLOCG	= 347,
    SystemZ_AsmNLHLOCGR	= 348,
    SystemZ_AsmNLHLOCR	= 349,
    SystemZ_AsmNLHSTOC	= 350,
    SystemZ_AsmNLHSTOCG	= 351,
    SystemZ_AsmNLJ	= 352,
    SystemZ_AsmNLJG	= 353,
    SystemZ_AsmNLLOC	= 354,
    SystemZ_AsmNLLOCG	= 355,
    SystemZ_AsmNLLOCGR	= 356,
    SystemZ_AsmNLLOCR	= 357,
    SystemZ_AsmNLSTOC	= 358,
    SystemZ_AsmNLSTOCG	= 359,
    SystemZ_AsmNOBR	= 360,
    SystemZ_AsmNOJ	= 361,
    SystemZ_AsmNOJG	= 362,
    SystemZ_AsmNOLOC	= 363,
    SystemZ_AsmNOLOCG	= 364,
    SystemZ_AsmNOLOCGR	= 365,
    SystemZ_AsmNOLOCR	= 366,
    SystemZ_AsmNOSTOC	= 367,
    SystemZ_AsmNOSTOCG	= 368,
    SystemZ_AsmOBR	= 369,
    SystemZ_AsmOJ	= 370,
    SystemZ_AsmOJG	= 371,
    SystemZ_AsmOLOC	= 372,
    SystemZ_AsmOLOCG	= 373,
    SystemZ_AsmOLOCGR	= 374,
    SystemZ_AsmOLOCR	= 375,
    SystemZ_AsmOSTOC	= 376,
    SystemZ_AsmOSTOCG	= 377,
    SystemZ_AsmSTOC	= 378,
    SystemZ_AsmSTOCG	= 379,
    SystemZ_BASR	= 380,
    SystemZ_BR	= 381,
    SystemZ_BRAS	= 382,
    SystemZ_BRASL	= 383,
    SystemZ_BRC	= 384,
    SystemZ_BRCL	= 385,
    SystemZ_BRCT	= 386,
    SystemZ_BRCTG	= 387,
    SystemZ_C	= 388,
    SystemZ_CDB	= 389,
    SystemZ_CDBR	= 390,
    SystemZ_CDFBR	= 391,
    SystemZ_CDGBR	= 392,
    SystemZ_CDLFBR	= 393,
    SystemZ_CDLGBR	= 394,
    SystemZ_CEB	= 395,
    SystemZ_CEBR	= 396,
    SystemZ_CEFBR	= 397,
    SystemZ_CEGBR	= 398,
    SystemZ_CELFBR	= 399,
    SystemZ_CELGBR	= 400,
    SystemZ_CFDBR	= 401,
    SystemZ_CFEBR	= 402,
    SystemZ_CFI	= 403,
    SystemZ_CFIMux	= 404,
    SystemZ_CFXBR	= 405,
    SystemZ_CG	= 406,
    SystemZ_CGDBR	= 407,
    SystemZ_CGEBR	= 408,
    SystemZ_CGF	= 409,
    SystemZ_CGFI	= 410,
    SystemZ_CGFR	= 411,
    SystemZ_CGFRL	= 412,
    SystemZ_CGH	= 413,
    SystemZ_CGHI	= 414,
    SystemZ_CGHRL	= 415,
    SystemZ_CGHSI	= 416,
    SystemZ_CGIJ	= 417,
    SystemZ_CGR	= 418,
    SystemZ_CGRJ	= 419,
    SystemZ_CGRL	= 420,
    SystemZ_CGXBR	= 421,
    SystemZ_CH	= 422,
    SystemZ_CHF	= 423,
    SystemZ_CHHSI	= 424,
    SystemZ_CHI	= 425,
    SystemZ_CHRL	= 426,
    SystemZ_CHSI	= 427,
    SystemZ_CHY	= 428,
    SystemZ_CIH	= 429,
    SystemZ_CIJ	= 430,
    SystemZ_CL	= 431,
    SystemZ_CLC	= 432,
    SystemZ_CLCLoop	= 433,
    SystemZ_CLCSequence	= 434,
    SystemZ_CLFDBR	= 435,
    SystemZ_CLFEBR	= 436,
    SystemZ_CLFHSI	= 437,
    SystemZ_CLFI	= 438,
    SystemZ_CLFIMux	= 439,
    SystemZ_CLFXBR	= 440,
    SystemZ_CLG	= 441,
    SystemZ_CLGDBR	= 442,
    SystemZ_CLGEBR	= 443,
    SystemZ_CLGF	= 444,
    SystemZ_CLGFI	= 445,
    SystemZ_CLGFR	= 446,
    SystemZ_CLGFRL	= 447,
    SystemZ_CLGHRL	= 448,
    SystemZ_CLGHSI	= 449,
    SystemZ_CLGIJ	= 450,
    SystemZ_CLGR	= 451,
    SystemZ_CLGRJ	= 452,
    SystemZ_CLGRL	= 453,
    SystemZ_CLGXBR	= 454,
    SystemZ_CLHF	= 455,
    SystemZ_CLHHSI	= 456,
    SystemZ_CLHRL	= 457,
    SystemZ_CLI	= 458,
    SystemZ_CLIH	= 459,
    SystemZ_CLIJ	= 460,
    SystemZ_CLIY	= 461,
    SystemZ_CLMux	= 462,
    SystemZ_CLR	= 463,
    SystemZ_CLRJ	= 464,
    SystemZ_CLRL	= 465,
    SystemZ_CLST	= 466,
    SystemZ_CLSTLoop	= 467,
    SystemZ_CLY	= 468,
    SystemZ_CMux	= 469,
    SystemZ_CPSDRdd	= 470,
    SystemZ_CPSDRds	= 471,
    SystemZ_CPSDRsd	= 472,
    SystemZ_CPSDRss	= 473,
    SystemZ_CR	= 474,
    SystemZ_CRJ	= 475,
    SystemZ_CRL	= 476,
    SystemZ_CS	= 477,
    SystemZ_CSG	= 478,
    SystemZ_CSY	= 479,
    SystemZ_CXBR	= 480,
    SystemZ_CXFBR	= 481,
    SystemZ_CXGBR	= 482,
    SystemZ_CXLFBR	= 483,
    SystemZ_CXLGBR	= 484,
    SystemZ_CY	= 485,
    SystemZ_CallBASR	= 486,
    SystemZ_CallBR	= 487,
    SystemZ_CallBRASL	= 488,
    SystemZ_CallJG	= 489,
    SystemZ_CondStore16	= 490,
    SystemZ_CondStore16Inv	= 491,
    SystemZ_CondStore16Mux	= 492,
    SystemZ_CondStore16MuxInv	= 493,
    SystemZ_CondStore32	= 494,
    SystemZ_CondStore32Inv	= 495,
    SystemZ_CondStore64	= 496,
    SystemZ_CondStore64Inv	= 497,
    SystemZ_CondStore8	= 498,
    SystemZ_CondStore8Inv	= 499,
    SystemZ_CondStore8Mux	= 500,
    SystemZ_CondStore8MuxInv	= 501,
    SystemZ_CondStoreF32	= 502,
    SystemZ_CondStoreF32Inv	= 503,
    SystemZ_CondStoreF64	= 504,
    SystemZ_CondStoreF64Inv	= 505,
    SystemZ_DDB	= 506,
    SystemZ_DDBR	= 507,
    SystemZ_DEB	= 508,
    SystemZ_DEBR	= 509,
    SystemZ_DL	= 510,
    SystemZ_DLG	= 511,
    SystemZ_DLGR	= 512,
    SystemZ_DLR	= 513,
    SystemZ_DSG	= 514,
    SystemZ_DSGF	= 515,
    SystemZ_DSGFR	= 516,
    SystemZ_DSGR	= 517,
    SystemZ_DXBR	= 518,
    SystemZ_EAR	= 519,
    SystemZ_FIDBR	= 520,
    SystemZ_FIDBRA	= 521,
    SystemZ_FIEBR	= 522,
    SystemZ_FIEBRA	= 523,
    SystemZ_FIXBR	= 524,
    SystemZ_FIXBRA	= 525,
    SystemZ_FLOGR	= 526,
    SystemZ_IC	= 527,
    SystemZ_IC32	= 528,
    SystemZ_IC32Y	= 529,
    SystemZ_ICY	= 530,
    SystemZ_IIFMux	= 531,
    SystemZ_IIHF	= 532,
    SystemZ_IIHF64	= 533,
    SystemZ_IIHH	= 534,
    SystemZ_IIHH64	= 535,
    SystemZ_IIHL	= 536,
    SystemZ_IIHL64	= 537,
    SystemZ_IIHMux	= 538,
    SystemZ_IILF	= 539,
    SystemZ_IILF64	= 540,
    SystemZ_IILH	= 541,
    SystemZ_IILH64	= 542,
    SystemZ_IILL	= 543,
    SystemZ_IILL64	= 544,
    SystemZ_IILMux	= 545,
    SystemZ_IPM	= 546,
    SystemZ_J	= 547,
    SystemZ_JG	= 548,
    SystemZ_L	= 549,
    SystemZ_L128	= 550,
    SystemZ_LA	= 551,
    SystemZ_LAA	= 552,
    SystemZ_LAAG	= 553,
    SystemZ_LAAL	= 554,
    SystemZ_LAALG	= 555,
    SystemZ_LAN	= 556,
    SystemZ_LANG	= 557,
    SystemZ_LAO	= 558,
    SystemZ_LAOG	= 559,
    SystemZ_LARL	= 560,
    SystemZ_LAX	= 561,
    SystemZ_LAXG	= 562,
    SystemZ_LAY	= 563,
    SystemZ_LB	= 564,
    SystemZ_LBH	= 565,
    SystemZ_LBMux	= 566,
    SystemZ_LBR	= 567,
    SystemZ_LCDBR	= 568,
    SystemZ_LCEBR	= 569,
    SystemZ_LCGFR	= 570,
    SystemZ_LCGR	= 571,
    SystemZ_LCR	= 572,
    SystemZ_LCXBR	= 573,
    SystemZ_LD	= 574,
    SystemZ_LDEB	= 575,
    SystemZ_LDEBR	= 576,
    SystemZ_LDGR	= 577,
    SystemZ_LDR	= 578,
    SystemZ_LDXBR	= 579,
    SystemZ_LDY	= 580,
    SystemZ_LE	= 581,
    SystemZ_LEDBR	= 582,
    SystemZ_LER	= 583,
    SystemZ_LEXBR	= 584,
    SystemZ_LEY	= 585,
    SystemZ_LFH	= 586,
    SystemZ_LG	= 587,
    SystemZ_LGB	= 588,
    SystemZ_LGBR	= 589,
    SystemZ_LGDR	= 590,
    SystemZ_LGF	= 591,
    SystemZ_LGFI	= 592,
    SystemZ_LGFR	= 593,
    SystemZ_LGFRL	= 594,
    SystemZ_LGH	= 595,
    SystemZ_LGHI	= 596,
    SystemZ_LGHR	= 597,
    SystemZ_LGHRL	= 598,
    SystemZ_LGR	= 599,
    SystemZ_LGRL	= 600,
    SystemZ_LH	= 601,
    SystemZ_LHH	= 602,
    SystemZ_LHI	= 603,
    SystemZ_LHIMux	= 604,
    SystemZ_LHMux	= 605,
    SystemZ_LHR	= 606,
    SystemZ_LHRL	= 607,
    SystemZ_LHY	= 608,
    SystemZ_LLC	= 609,
    SystemZ_LLCH	= 610,
    SystemZ_LLCMux	= 611,
    SystemZ_LLCR	= 612,
    SystemZ_LLCRMux	= 613,
    SystemZ_LLGC	= 614,
    SystemZ_LLGCR	= 615,
    SystemZ_LLGF	= 616,
    SystemZ_LLGFR	= 617,
    SystemZ_LLGFRL	= 618,
    SystemZ_LLGH	= 619,
    SystemZ_LLGHR	= 620,
    SystemZ_LLGHRL	= 621,
    SystemZ_LLH	= 622,
    SystemZ_LLHH	= 623,
    SystemZ_LLHMux	= 624,
    SystemZ_LLHR	= 625,
    SystemZ_LLHRL	= 626,
    SystemZ_LLHRMux	= 627,
    SystemZ_LLIHF	= 628,
    SystemZ_LLIHH	= 629,
    SystemZ_LLIHL	= 630,
    SystemZ_LLILF	= 631,
    SystemZ_LLILH	= 632,
    SystemZ_LLILL	= 633,
    SystemZ_LMG	= 634,
    SystemZ_LMux	= 635,
    SystemZ_LNDBR	= 636,
    SystemZ_LNEBR	= 637,
    SystemZ_LNGFR	= 638,
    SystemZ_LNGR	= 639,
    SystemZ_LNR	= 640,
    SystemZ_LNXBR	= 641,
    SystemZ_LOC	= 642,
    SystemZ_LOCG	= 643,
    SystemZ_LOCGR	= 644,
    SystemZ_LOCR	= 645,
    SystemZ_LPDBR	= 646,
    SystemZ_LPEBR	= 647,
    SystemZ_LPGFR	= 648,
    SystemZ_LPGR	= 649,
    SystemZ_LPR	= 650,
    SystemZ_LPXBR	= 651,
    SystemZ_LR	= 652,
    SystemZ_LRL	= 653,
    SystemZ_LRMux	= 654,
    SystemZ_LRV	= 655,
    SystemZ_LRVG	= 656,
    SystemZ_LRVGR	= 657,
    SystemZ_LRVR	= 658,
    SystemZ_LT	= 659,
    SystemZ_LTDBR	= 660,
    SystemZ_LTDBRCompare	= 661,
    SystemZ_LTEBR	= 662,
    SystemZ_LTEBRCompare	= 663,
    SystemZ_LTG	= 664,
    SystemZ_LTGF	= 665,
    SystemZ_LTGFR	= 666,
    SystemZ_LTGR	= 667,
    SystemZ_LTR	= 668,
    SystemZ_LTXBR	= 669,
    SystemZ_LTXBRCompare	= 670,
    SystemZ_LX	= 671,
    SystemZ_LXDB	= 672,
    SystemZ_LXDBR	= 673,
    SystemZ_LXEB	= 674,
    SystemZ_LXEBR	= 675,
    SystemZ_LXR	= 676,
    SystemZ_LY	= 677,
    SystemZ_LZDR	= 678,
    SystemZ_LZER	= 679,
    SystemZ_LZXR	= 680,
    SystemZ_MADB	= 681,
    SystemZ_MADBR	= 682,
    SystemZ_MAEB	= 683,
    SystemZ_MAEBR	= 684,
    SystemZ_MDB	= 685,
    SystemZ_MDBR	= 686,
    SystemZ_MDEB	= 687,
    SystemZ_MDEBR	= 688,
    SystemZ_MEEB	= 689,
    SystemZ_MEEBR	= 690,
    SystemZ_MGHI	= 691,
    SystemZ_MH	= 692,
    SystemZ_MHI	= 693,
    SystemZ_MHY	= 694,
    SystemZ_MLG	= 695,
    SystemZ_MLGR	= 696,
    SystemZ_MS	= 697,
    SystemZ_MSDB	= 698,
    SystemZ_MSDBR	= 699,
    SystemZ_MSEB	= 700,
    SystemZ_MSEBR	= 701,
    SystemZ_MSFI	= 702,
    SystemZ_MSG	= 703,
    SystemZ_MSGF	= 704,
    SystemZ_MSGFI	= 705,
    SystemZ_MSGFR	= 706,
    SystemZ_MSGR	= 707,
    SystemZ_MSR	= 708,
    SystemZ_MSY	= 709,
    SystemZ_MVC	= 710,
    SystemZ_MVCLoop	= 711,
    SystemZ_MVCSequence	= 712,
    SystemZ_MVGHI	= 713,
    SystemZ_MVHHI	= 714,
    SystemZ_MVHI	= 715,
    SystemZ_MVI	= 716,
    SystemZ_MVIY	= 717,
    SystemZ_MVST	= 718,
    SystemZ_MVSTLoop	= 719,
    SystemZ_MXBR	= 720,
    SystemZ_MXDB	= 721,
    SystemZ_MXDBR	= 722,
    SystemZ_N	= 723,
    SystemZ_NC	= 724,
    SystemZ_NCLoop	= 725,
    SystemZ_NCSequence	= 726,
    SystemZ_NG	= 727,
    SystemZ_NGR	= 728,
    SystemZ_NGRK	= 729,
    SystemZ_NI	= 730,
    SystemZ_NIFMux	= 731,
    SystemZ_NIHF	= 732,
    SystemZ_NIHF64	= 733,
    SystemZ_NIHH	= 734,
    SystemZ_NIHH64	= 735,
    SystemZ_NIHL	= 736,
    SystemZ_NIHL64	= 737,
    SystemZ_NIHMux	= 738,
    SystemZ_NILF	= 739,
    SystemZ_NILF64	= 740,
    SystemZ_NILH	= 741,
    SystemZ_NILH64	= 742,
    SystemZ_NILL	= 743,
    SystemZ_NILL64	= 744,
    SystemZ_NILMux	= 745,
    SystemZ_NIY	= 746,
    SystemZ_NR	= 747,
    SystemZ_NRK	= 748,
    SystemZ_NY	= 749,
    SystemZ_O	= 750,
    SystemZ_OC	= 751,
    SystemZ_OCLoop	= 752,
    SystemZ_OCSequence	= 753,
    SystemZ_OG	= 754,
    SystemZ_OGR	= 755,
    SystemZ_OGRK	= 756,
    SystemZ_OI	= 757,
    SystemZ_OIFMux	= 758,
    SystemZ_OIHF	= 759,
    SystemZ_OIHF64	= 760,
    SystemZ_OIHH	= 761,
    SystemZ_OIHH64	= 762,
    SystemZ_OIHL	= 763,
    SystemZ_OIHL64	= 764,
    SystemZ_OIHMux	= 765,
    SystemZ_OILF	= 766,
    SystemZ_OILF64	= 767,
    SystemZ_OILH	= 768,
    SystemZ_OILH64	= 769,
    SystemZ_OILL	= 770,
    SystemZ_OILL64	= 771,
    SystemZ_OILMux	= 772,
    SystemZ_OIY	= 773,
    SystemZ_OR	= 774,
    SystemZ_ORK	= 775,
    SystemZ_OY	= 776,
    SystemZ_PFD	= 777,
    SystemZ_PFDRL	= 778,
    SystemZ_RISBG	= 779,
    SystemZ_RISBG32	= 780,
    SystemZ_RISBHG	= 781,
    SystemZ_RISBHH	= 782,
    SystemZ_RISBHL	= 783,
    SystemZ_RISBLG	= 784,
    SystemZ_RISBLH	= 785,
    SystemZ_RISBLL	= 786,
    SystemZ_RISBMux	= 787,
    SystemZ_RLL	= 788,
    SystemZ_RLLG	= 789,
    SystemZ_RNSBG	= 790,
    SystemZ_ROSBG	= 791,
    SystemZ_RXSBG	= 792,
    SystemZ_Return	= 793,
    SystemZ_S	= 794,
    SystemZ_SDB	= 795,
    SystemZ_SDBR	= 796,
    SystemZ_SEB	= 797,
    SystemZ_SEBR	= 798,
    SystemZ_SG	= 799,
    SystemZ_SGF	= 800,
    SystemZ_SGFR	= 801,
    SystemZ_SGR	= 802,
    SystemZ_SGRK	= 803,
    SystemZ_SH	= 804,
    SystemZ_SHY	= 805,
    SystemZ_SL	= 806,
    SystemZ_SLB	= 807,
    SystemZ_SLBG	= 808,
    SystemZ_SLBR	= 809,
    SystemZ_SLFI	= 810,
    SystemZ_SLG	= 811,
    SystemZ_SLGBR	= 812,
    SystemZ_SLGF	= 813,
    SystemZ_SLGFI	= 814,
    SystemZ_SLGFR	= 815,
    SystemZ_SLGR	= 816,
    SystemZ_SLGRK	= 817,
    SystemZ_SLL	= 818,
    SystemZ_SLLG	= 819,
    SystemZ_SLLK	= 820,
    SystemZ_SLR	= 821,
    SystemZ_SLRK	= 822,
    SystemZ_SLY	= 823,
    SystemZ_SQDB	= 824,
    SystemZ_SQDBR	= 825,
    SystemZ_SQEB	= 826,
    SystemZ_SQEBR	= 827,
    SystemZ_SQXBR	= 828,
    SystemZ_SR	= 829,
    SystemZ_SRA	= 830,
    SystemZ_SRAG	= 831,
    SystemZ_SRAK	= 832,
    SystemZ_SRK	= 833,
    SystemZ_SRL	= 834,
    SystemZ_SRLG	= 835,
    SystemZ_SRLK	= 836,
    SystemZ_SRST	= 837,
    SystemZ_SRSTLoop	= 838,
    SystemZ_ST	= 839,
    SystemZ_ST128	= 840,
    SystemZ_STC	= 841,
    SystemZ_STCH	= 842,
    SystemZ_STCMux	= 843,
    SystemZ_STCY	= 844,
    SystemZ_STD	= 845,
    SystemZ_STDY	= 846,
    SystemZ_STE	= 847,
    SystemZ_STEY	= 848,
    SystemZ_STFH	= 849,
    SystemZ_STG	= 850,
    SystemZ_STGRL	= 851,
    SystemZ_STH	= 852,
    SystemZ_STHH	= 853,
    SystemZ_STHMux	= 854,
    SystemZ_STHRL	= 855,
    SystemZ_STHY	= 856,
    SystemZ_STMG	= 857,
    SystemZ_STMux	= 858,
    SystemZ_STOC	= 859,
    SystemZ_STOCG	= 860,
    SystemZ_STRL	= 861,
    SystemZ_STRV	= 862,
    SystemZ_STRVG	= 863,
    SystemZ_STX	= 864,
    SystemZ_STY	= 865,
    SystemZ_SXBR	= 866,
    SystemZ_SY	= 867,
    SystemZ_Select32	= 868,
    SystemZ_Select32Mux	= 869,
    SystemZ_Select64	= 870,
    SystemZ_SelectF128	= 871,
    SystemZ_SelectF32	= 872,
    SystemZ_SelectF64	= 873,
    SystemZ_Serialize	= 874,
    SystemZ_TM	= 875,
    SystemZ_TMHH	= 876,
    SystemZ_TMHH64	= 877,
    SystemZ_TMHL	= 878,
    SystemZ_TMHL64	= 879,
    SystemZ_TMHMux	= 880,
    SystemZ_TMLH	= 881,
    SystemZ_TMLH64	= 882,
    SystemZ_TMLL	= 883,
    SystemZ_TMLL64	= 884,
    SystemZ_TMLMux	= 885,
    SystemZ_TMY	= 886,
    SystemZ_X	= 887,
    SystemZ_XC	= 888,
    SystemZ_XCLoop	= 889,
    SystemZ_XCSequence	= 890,
    SystemZ_XG	= 891,
    SystemZ_XGR	= 892,
    SystemZ_XGRK	= 893,
    SystemZ_XI	= 894,
    SystemZ_XIFMux	= 895,
    SystemZ_XIHF	= 896,
    SystemZ_XIHF64	= 897,
    SystemZ_XILF	= 898,
    SystemZ_XILF64	= 899,
    SystemZ_XIY	= 900,
    SystemZ_XR	= 901,
    SystemZ_XRK	= 902,
    SystemZ_XY	= 903,
    SystemZ_ZEXT128_32	= 904,
    SystemZ_ZEXT128_64	= 905,
    SystemZ_INSTRUCTION_LIST_END = 906
};

#endif // GET_INSTRINFO_ENUM
