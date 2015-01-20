                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.1.0 #7066 (Apr 25 2013) (Linux)
                              4 ; This file was generated Wed Dec 17 22:30:27 2014
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _delay
                             14 	.globl _TF2
                             15 	.globl _EXF2
                             16 	.globl _RCLK
                             17 	.globl _TCLK
                             18 	.globl _EXEN2
                             19 	.globl _TR2
                             20 	.globl _C_T2
                             21 	.globl _CP_RL2
                             22 	.globl _T2CON_7
                             23 	.globl _T2CON_6
                             24 	.globl _T2CON_5
                             25 	.globl _T2CON_4
                             26 	.globl _T2CON_3
                             27 	.globl _T2CON_2
                             28 	.globl _T2CON_1
                             29 	.globl _T2CON_0
                             30 	.globl _PT2
                             31 	.globl _ET2
                             32 	.globl _CY
                             33 	.globl _AC
                             34 	.globl _F0
                             35 	.globl _RS1
                             36 	.globl _RS0
                             37 	.globl _OV
                             38 	.globl _F1
                             39 	.globl _P
                             40 	.globl _PS
                             41 	.globl _PT1
                             42 	.globl _PX1
                             43 	.globl _PT0
                             44 	.globl _PX0
                             45 	.globl _RD
                             46 	.globl _WR
                             47 	.globl _T1
                             48 	.globl _T0
                             49 	.globl _INT1
                             50 	.globl _INT0
                             51 	.globl _TXD
                             52 	.globl _RXD
                             53 	.globl _P3_7
                             54 	.globl _P3_6
                             55 	.globl _P3_5
                             56 	.globl _P3_4
                             57 	.globl _P3_3
                             58 	.globl _P3_2
                             59 	.globl _P3_1
                             60 	.globl _P3_0
                             61 	.globl _EA
                             62 	.globl _ES
                             63 	.globl _ET1
                             64 	.globl _EX1
                             65 	.globl _ET0
                             66 	.globl _EX0
                             67 	.globl _P2_7
                             68 	.globl _P2_6
                             69 	.globl _P2_5
                             70 	.globl _P2_4
                             71 	.globl _P2_3
                             72 	.globl _P2_2
                             73 	.globl _P2_1
                             74 	.globl _P2_0
                             75 	.globl _SM0
                             76 	.globl _SM1
                             77 	.globl _SM2
                             78 	.globl _REN
                             79 	.globl _TB8
                             80 	.globl _RB8
                             81 	.globl _TI
                             82 	.globl _RI
                             83 	.globl _P1_7
                             84 	.globl _P1_6
                             85 	.globl _P1_5
                             86 	.globl _P1_4
                             87 	.globl _P1_3
                             88 	.globl _P1_2
                             89 	.globl _P1_1
                             90 	.globl _P1_0
                             91 	.globl _TF1
                             92 	.globl _TR1
                             93 	.globl _TF0
                             94 	.globl _TR0
                             95 	.globl _IE1
                             96 	.globl _IT1
                             97 	.globl _IE0
                             98 	.globl _IT0
                             99 	.globl _P0_7
                            100 	.globl _P0_6
                            101 	.globl _P0_5
                            102 	.globl _P0_4
                            103 	.globl _P0_3
                            104 	.globl _P0_2
                            105 	.globl _P0_1
                            106 	.globl _P0_0
                            107 	.globl _TH2
                            108 	.globl _TL2
                            109 	.globl _RCAP2H
                            110 	.globl _RCAP2L
                            111 	.globl _T2CON
                            112 	.globl _B
                            113 	.globl _ACC
                            114 	.globl _PSW
                            115 	.globl _IP
                            116 	.globl _P3
                            117 	.globl _IE
                            118 	.globl _P2
                            119 	.globl _SBUF
                            120 	.globl _SCON
                            121 	.globl _P1
                            122 	.globl _TH1
                            123 	.globl _TH0
                            124 	.globl _TL1
                            125 	.globl _TL0
                            126 	.globl _TMOD
                            127 	.globl _TCON
                            128 	.globl _PCON
                            129 	.globl _DPH
                            130 	.globl _DPL
                            131 	.globl _SP
                            132 	.globl _P0
                            133 ;--------------------------------------------------------
                            134 ; special function registers
                            135 ;--------------------------------------------------------
                            136 	.area RSEG    (ABS,DATA)
   0000                     137 	.org 0x0000
                    0080    138 _P0	=	0x0080
                    0081    139 _SP	=	0x0081
                    0082    140 _DPL	=	0x0082
                    0083    141 _DPH	=	0x0083
                    0087    142 _PCON	=	0x0087
                    0088    143 _TCON	=	0x0088
                    0089    144 _TMOD	=	0x0089
                    008A    145 _TL0	=	0x008a
                    008B    146 _TL1	=	0x008b
                    008C    147 _TH0	=	0x008c
                    008D    148 _TH1	=	0x008d
                    0090    149 _P1	=	0x0090
                    0098    150 _SCON	=	0x0098
                    0099    151 _SBUF	=	0x0099
                    00A0    152 _P2	=	0x00a0
                    00A8    153 _IE	=	0x00a8
                    00B0    154 _P3	=	0x00b0
                    00B8    155 _IP	=	0x00b8
                    00D0    156 _PSW	=	0x00d0
                    00E0    157 _ACC	=	0x00e0
                    00F0    158 _B	=	0x00f0
                    00C8    159 _T2CON	=	0x00c8
                    00CA    160 _RCAP2L	=	0x00ca
                    00CB    161 _RCAP2H	=	0x00cb
                    00CC    162 _TL2	=	0x00cc
                    00CD    163 _TH2	=	0x00cd
                            164 ;--------------------------------------------------------
                            165 ; special function bits
                            166 ;--------------------------------------------------------
                            167 	.area RSEG    (ABS,DATA)
   0000                     168 	.org 0x0000
                    0080    169 _P0_0	=	0x0080
                    0081    170 _P0_1	=	0x0081
                    0082    171 _P0_2	=	0x0082
                    0083    172 _P0_3	=	0x0083
                    0084    173 _P0_4	=	0x0084
                    0085    174 _P0_5	=	0x0085
                    0086    175 _P0_6	=	0x0086
                    0087    176 _P0_7	=	0x0087
                    0088    177 _IT0	=	0x0088
                    0089    178 _IE0	=	0x0089
                    008A    179 _IT1	=	0x008a
                    008B    180 _IE1	=	0x008b
                    008C    181 _TR0	=	0x008c
                    008D    182 _TF0	=	0x008d
                    008E    183 _TR1	=	0x008e
                    008F    184 _TF1	=	0x008f
                    0090    185 _P1_0	=	0x0090
                    0091    186 _P1_1	=	0x0091
                    0092    187 _P1_2	=	0x0092
                    0093    188 _P1_3	=	0x0093
                    0094    189 _P1_4	=	0x0094
                    0095    190 _P1_5	=	0x0095
                    0096    191 _P1_6	=	0x0096
                    0097    192 _P1_7	=	0x0097
                    0098    193 _RI	=	0x0098
                    0099    194 _TI	=	0x0099
                    009A    195 _RB8	=	0x009a
                    009B    196 _TB8	=	0x009b
                    009C    197 _REN	=	0x009c
                    009D    198 _SM2	=	0x009d
                    009E    199 _SM1	=	0x009e
                    009F    200 _SM0	=	0x009f
                    00A0    201 _P2_0	=	0x00a0
                    00A1    202 _P2_1	=	0x00a1
                    00A2    203 _P2_2	=	0x00a2
                    00A3    204 _P2_3	=	0x00a3
                    00A4    205 _P2_4	=	0x00a4
                    00A5    206 _P2_5	=	0x00a5
                    00A6    207 _P2_6	=	0x00a6
                    00A7    208 _P2_7	=	0x00a7
                    00A8    209 _EX0	=	0x00a8
                    00A9    210 _ET0	=	0x00a9
                    00AA    211 _EX1	=	0x00aa
                    00AB    212 _ET1	=	0x00ab
                    00AC    213 _ES	=	0x00ac
                    00AF    214 _EA	=	0x00af
                    00B0    215 _P3_0	=	0x00b0
                    00B1    216 _P3_1	=	0x00b1
                    00B2    217 _P3_2	=	0x00b2
                    00B3    218 _P3_3	=	0x00b3
                    00B4    219 _P3_4	=	0x00b4
                    00B5    220 _P3_5	=	0x00b5
                    00B6    221 _P3_6	=	0x00b6
                    00B7    222 _P3_7	=	0x00b7
                    00B0    223 _RXD	=	0x00b0
                    00B1    224 _TXD	=	0x00b1
                    00B2    225 _INT0	=	0x00b2
                    00B3    226 _INT1	=	0x00b3
                    00B4    227 _T0	=	0x00b4
                    00B5    228 _T1	=	0x00b5
                    00B6    229 _WR	=	0x00b6
                    00B7    230 _RD	=	0x00b7
                    00B8    231 _PX0	=	0x00b8
                    00B9    232 _PT0	=	0x00b9
                    00BA    233 _PX1	=	0x00ba
                    00BB    234 _PT1	=	0x00bb
                    00BC    235 _PS	=	0x00bc
                    00D0    236 _P	=	0x00d0
                    00D1    237 _F1	=	0x00d1
                    00D2    238 _OV	=	0x00d2
                    00D3    239 _RS0	=	0x00d3
                    00D4    240 _RS1	=	0x00d4
                    00D5    241 _F0	=	0x00d5
                    00D6    242 _AC	=	0x00d6
                    00D7    243 _CY	=	0x00d7
                    00AD    244 _ET2	=	0x00ad
                    00BD    245 _PT2	=	0x00bd
                    00C8    246 _T2CON_0	=	0x00c8
                    00C9    247 _T2CON_1	=	0x00c9
                    00CA    248 _T2CON_2	=	0x00ca
                    00CB    249 _T2CON_3	=	0x00cb
                    00CC    250 _T2CON_4	=	0x00cc
                    00CD    251 _T2CON_5	=	0x00cd
                    00CE    252 _T2CON_6	=	0x00ce
                    00CF    253 _T2CON_7	=	0x00cf
                    00C8    254 _CP_RL2	=	0x00c8
                    00C9    255 _C_T2	=	0x00c9
                    00CA    256 _TR2	=	0x00ca
                    00CB    257 _EXEN2	=	0x00cb
                    00CC    258 _TCLK	=	0x00cc
                    00CD    259 _RCLK	=	0x00cd
                    00CE    260 _EXF2	=	0x00ce
                    00CF    261 _TF2	=	0x00cf
                            262 ;--------------------------------------------------------
                            263 ; overlayable register banks
                            264 ;--------------------------------------------------------
                            265 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     266 	.ds 8
                            267 ;--------------------------------------------------------
                            268 ; internal ram data
                            269 ;--------------------------------------------------------
                            270 	.area DSEG    (DATA)
                            271 ;--------------------------------------------------------
                            272 ; overlayable items in internal ram 
                            273 ;--------------------------------------------------------
                            274 	.area	OSEG    (OVR,DATA)
                            275 ;--------------------------------------------------------
                            276 ; Stack segment in internal ram 
                            277 ;--------------------------------------------------------
                            278 	.area	SSEG	(DATA)
   0008                     279 __start__stack:
   0008                     280 	.ds	1
                            281 
                            282 ;--------------------------------------------------------
                            283 ; indirectly addressable internal ram data
                            284 ;--------------------------------------------------------
                            285 	.area ISEG    (DATA)
                            286 ;--------------------------------------------------------
                            287 ; absolute internal ram data
                            288 ;--------------------------------------------------------
                            289 	.area IABS    (ABS,DATA)
                            290 	.area IABS    (ABS,DATA)
                            291 ;--------------------------------------------------------
                            292 ; bit data
                            293 ;--------------------------------------------------------
                            294 	.area BSEG    (BIT)
                            295 ;--------------------------------------------------------
                            296 ; paged external ram data
                            297 ;--------------------------------------------------------
                            298 	.area PSEG    (PAG,XDATA)
                            299 ;--------------------------------------------------------
                            300 ; external ram data
                            301 ;--------------------------------------------------------
                            302 	.area XSEG    (XDATA)
                            303 ;--------------------------------------------------------
                            304 ; absolute external ram data
                            305 ;--------------------------------------------------------
                            306 	.area XABS    (ABS,XDATA)
                            307 ;--------------------------------------------------------
                            308 ; external initialized ram data
                            309 ;--------------------------------------------------------
                            310 	.area XISEG   (XDATA)
                            311 	.area HOME    (CODE)
                            312 	.area GSINIT0 (CODE)
                            313 	.area GSINIT1 (CODE)
                            314 	.area GSINIT2 (CODE)
                            315 	.area GSINIT3 (CODE)
                            316 	.area GSINIT4 (CODE)
                            317 	.area GSINIT5 (CODE)
                            318 	.area GSINIT  (CODE)
                            319 	.area GSFINAL (CODE)
                            320 	.area CSEG    (CODE)
                            321 ;--------------------------------------------------------
                            322 ; interrupt vector 
                            323 ;--------------------------------------------------------
                            324 	.area HOME    (CODE)
   0000                     325 __interrupt_vect:
   0000 02 00 08            326 	ljmp	__sdcc_gsinit_startup
                            327 ;--------------------------------------------------------
                            328 ; global & static initialisations
                            329 ;--------------------------------------------------------
                            330 	.area HOME    (CODE)
                            331 	.area GSINIT  (CODE)
                            332 	.area GSFINAL (CODE)
                            333 	.area GSINIT  (CODE)
                            334 	.globl __sdcc_gsinit_startup
                            335 	.globl __sdcc_program_startup
                            336 	.globl __start__stack
                            337 	.globl __mcs51_genXINIT
                            338 	.globl __mcs51_genXRAMCLEAR
                            339 	.globl __mcs51_genRAMCLEAR
                            340 	.area GSFINAL (CODE)
   0061 02 00 03            341 	ljmp	__sdcc_program_startup
                            342 ;--------------------------------------------------------
                            343 ; Home
                            344 ;--------------------------------------------------------
                            345 	.area HOME    (CODE)
                            346 	.area HOME    (CODE)
   0003                     347 __sdcc_program_startup:
   0003 12 00 8C            348 	lcall	_main
                            349 ;	return from main will lock up
   0006 80 FE               350 	sjmp .
                            351 ;--------------------------------------------------------
                            352 ; code
                            353 ;--------------------------------------------------------
                            354 	.area CSEG    (CODE)
                            355 ;------------------------------------------------------------
                            356 ;Allocation info for local variables in function 'delay'
                            357 ;------------------------------------------------------------
                            358 ;ms                        Allocated to registers r6 r7 
                            359 ;j                         Allocated to registers r5 
                            360 ;------------------------------------------------------------
                            361 ;	hf.h:4: int delay(int ms)
                            362 ;	-----------------------------------------
                            363 ;	 function delay
                            364 ;	-----------------------------------------
   0064                     365 _delay:
                    0007    366 	ar7 = 0x07
                    0006    367 	ar6 = 0x06
                    0005    368 	ar5 = 0x05
                    0004    369 	ar4 = 0x04
                    0003    370 	ar3 = 0x03
                    0002    371 	ar2 = 0x02
                    0001    372 	ar1 = 0x01
                    0000    373 	ar0 = 0x00
   0064 AE 82               374 	mov	r6,dpl
   0066 AF 83               375 	mov	r7,dph
                            376 ;	hf.h:9: return 0;
   0068                     377 00105$:
                            378 ;	hf.h:7: for(;ms!=0;ms--)
   0068 BE 00 05            379 	cjne	r6,#0x00,00120$
   006B BF 00 02            380 	cjne	r7,#0x00,00120$
   006E 80 18               381 	sjmp	00108$
   0070                     382 00120$:
                            383 ;	hf.h:8: for(j=98;j>0;j--);
   0070 7D 62               384 	mov	r5,#0x62
   0072                     385 00101$:
   0072 ED                  386 	mov	a,r5
   0073 60 04               387 	jz	00111$
   0075 7C 01               388 	mov	r4,#0x01
   0077 80 02               389 	sjmp	00112$
   0079                     390 00111$:
   0079 7C 00               391 	mov	r4,#0x00
   007B                     392 00112$:
   007B EC                  393 	mov	a,r4
   007C 60 03               394 	jz	00107$
   007E 1D                  395 	dec	r5
   007F 80 F1               396 	sjmp	00101$
   0081                     397 00107$:
                            398 ;	hf.h:7: for(;ms!=0;ms--)
   0081 1E                  399 	dec	r6
   0082 BE FF 01            400 	cjne	r6,#0xFF,00123$
   0085 1F                  401 	dec	r7
   0086                     402 00123$:
   0086 80 E0               403 	sjmp	00105$
   0088                     404 00108$:
                            405 ;	hf.h:9: return 0;
   0088 90 00 00            406 	mov	dptr,#0x0000
   008B 22                  407 	ret
                            408 ;------------------------------------------------------------
                            409 ;Allocation info for local variables in function 'main'
                            410 ;------------------------------------------------------------
                            411 ;k1                        Allocated to registers r6 r7 
                            412 ;k2                        Allocated to registers r4 r5 
                            413 ;------------------------------------------------------------
                            414 ;	main.c:11: void main(void)
                            415 ;	-----------------------------------------
                            416 ;	 function main
                            417 ;	-----------------------------------------
   008C                     418 _main:
                            419 ;	main.c:13: int k1='F',k2='F';
   008C 7E 46               420 	mov	r6,#0x46
   008E 7F 00               421 	mov	r7,#0x00
   0090 7C 46               422 	mov	r4,#0x46
   0092 7D 00               423 	mov	r5,#0x00
                            424 ;	main.c:14: K2=1;
   0094 D2 B1               425 	setb	_P3_1
                            426 ;	main.c:15: K1=1;
   0096 D2 B0               427 	setb	_P3_0
                            428 ;	main.c:16: OUT1=1;
   0098 D2 91               429 	setb	_P1_1
                            430 ;	main.c:17: OUT2=1;
   009A D2 92               431 	setb	_P1_2
                            432 ;	main.c:18: while(1)
   009C                     433 00119$:
                            434 ;	main.c:21: if(K1==0)
   009C 20 B0 24            435 	jb	_P3_0,00116$
                            436 ;	main.c:23: if(k1=='F')
   009F BE 46 0D            437 	cjne	r6,#0x46,00105$
   00A2 BF 00 0A            438 	cjne	r7,#0x00,00105$
                            439 ;	main.c:25: k1='T';
   00A5 7E 54               440 	mov	r6,#0x54
   00A7 7F 00               441 	mov	r7,#0x00
                            442 ;	main.c:26: OUT1=0;
   00A9 C2 91               443 	clr	_P1_1
                            444 ;	main.c:27: K1=1;
   00AB D2 B0               445 	setb	_P3_0
   00AD 80 39               446 	sjmp	00117$
   00AF                     447 00105$:
                            448 ;	main.c:29: else if(k1=='T')
   00AF BE 54 0D            449 	cjne	r6,#0x54,00102$
   00B2 BF 00 0A            450 	cjne	r7,#0x00,00102$
                            451 ;	main.c:31: k1='F';
   00B5 7E 46               452 	mov	r6,#0x46
   00B7 7F 00               453 	mov	r7,#0x00
                            454 ;	main.c:32: OUT1=1;
   00B9 D2 91               455 	setb	_P1_1
                            456 ;	main.c:33: K1=1;
   00BB D2 B0               457 	setb	_P3_0
   00BD 80 29               458 	sjmp	00117$
   00BF                     459 00102$:
                            460 ;	main.c:35: else K1=1;
   00BF D2 B0               461 	setb	_P3_0
   00C1 80 25               462 	sjmp	00117$
   00C3                     463 00116$:
                            464 ;	main.c:37: else if(K2==0)
   00C3 20 B1 22            465 	jb	_P3_1,00117$
                            466 ;	main.c:39: if(k2=='F')
   00C6 BC 46 0D            467 	cjne	r4,#0x46,00111$
   00C9 BD 00 0A            468 	cjne	r5,#0x00,00111$
                            469 ;	main.c:41: k2='T';
   00CC 7C 54               470 	mov	r4,#0x54
   00CE 7D 00               471 	mov	r5,#0x00
                            472 ;	main.c:42: OUT2=0;
   00D0 C2 92               473 	clr	_P1_2
                            474 ;	main.c:43: K2=1;
   00D2 D2 B1               475 	setb	_P3_1
   00D4 80 12               476 	sjmp	00117$
   00D6                     477 00111$:
                            478 ;	main.c:45: else if(k2=='T')
   00D6 BC 54 0D            479 	cjne	r4,#0x54,00108$
   00D9 BD 00 0A            480 	cjne	r5,#0x00,00108$
                            481 ;	main.c:47: k2='F';
   00DC 7C 46               482 	mov	r4,#0x46
   00DE 7D 00               483 	mov	r5,#0x00
                            484 ;	main.c:48: OUT2=1;
   00E0 D2 92               485 	setb	_P1_2
                            486 ;	main.c:49: K2=1;
   00E2 D2 B1               487 	setb	_P3_1
   00E4 80 02               488 	sjmp	00117$
   00E6                     489 00108$:
                            490 ;	main.c:51: else K2=1;
   00E6 D2 B1               491 	setb	_P3_1
   00E8                     492 00117$:
                            493 ;	main.c:53: delay(130);
   00E8 90 00 82            494 	mov	dptr,#0x0082
   00EB C0 07               495 	push	ar7
   00ED C0 06               496 	push	ar6
   00EF C0 05               497 	push	ar5
   00F1 C0 04               498 	push	ar4
   00F3 12 00 64            499 	lcall	_delay
   00F6 D0 04               500 	pop	ar4
   00F8 D0 05               501 	pop	ar5
   00FA D0 06               502 	pop	ar6
   00FC D0 07               503 	pop	ar7
   00FE 80 9C               504 	sjmp	00119$
                            505 	.area CSEG    (CODE)
                            506 	.area CONST   (CODE)
                            507 	.area XINIT   (CODE)
                            508 	.area CABS    (ABS,CODE)
