                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.1.0 #7066 (Apr 25 2013) (Linux)
                              4 ; This file was generated Mon Dec  8 00:18:08 2014
                              5 ;--------------------------------------------------------
                              6 	.module led3
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl _TF2
                             14 	.globl _EXF2
                             15 	.globl _RCLK
                             16 	.globl _TCLK
                             17 	.globl _EXEN2
                             18 	.globl _TR2
                             19 	.globl _C_T2
                             20 	.globl _CP_RL2
                             21 	.globl _T2CON_7
                             22 	.globl _T2CON_6
                             23 	.globl _T2CON_5
                             24 	.globl _T2CON_4
                             25 	.globl _T2CON_3
                             26 	.globl _T2CON_2
                             27 	.globl _T2CON_1
                             28 	.globl _T2CON_0
                             29 	.globl _PT2
                             30 	.globl _ET2
                             31 	.globl _CY
                             32 	.globl _AC
                             33 	.globl _F0
                             34 	.globl _RS1
                             35 	.globl _RS0
                             36 	.globl _OV
                             37 	.globl _F1
                             38 	.globl _P
                             39 	.globl _PS
                             40 	.globl _PT1
                             41 	.globl _PX1
                             42 	.globl _PT0
                             43 	.globl _PX0
                             44 	.globl _RD
                             45 	.globl _WR
                             46 	.globl _T1
                             47 	.globl _T0
                             48 	.globl _INT1
                             49 	.globl _INT0
                             50 	.globl _TXD
                             51 	.globl _RXD
                             52 	.globl _P3_7
                             53 	.globl _P3_6
                             54 	.globl _P3_5
                             55 	.globl _P3_4
                             56 	.globl _P3_3
                             57 	.globl _P3_2
                             58 	.globl _P3_1
                             59 	.globl _P3_0
                             60 	.globl _EA
                             61 	.globl _ES
                             62 	.globl _ET1
                             63 	.globl _EX1
                             64 	.globl _ET0
                             65 	.globl _EX0
                             66 	.globl _P2_7
                             67 	.globl _P2_6
                             68 	.globl _P2_5
                             69 	.globl _P2_4
                             70 	.globl _P2_3
                             71 	.globl _P2_2
                             72 	.globl _P2_1
                             73 	.globl _P2_0
                             74 	.globl _SM0
                             75 	.globl _SM1
                             76 	.globl _SM2
                             77 	.globl _REN
                             78 	.globl _TB8
                             79 	.globl _RB8
                             80 	.globl _TI
                             81 	.globl _RI
                             82 	.globl _P1_7
                             83 	.globl _P1_6
                             84 	.globl _P1_5
                             85 	.globl _P1_4
                             86 	.globl _P1_3
                             87 	.globl _P1_2
                             88 	.globl _P1_1
                             89 	.globl _P1_0
                             90 	.globl _TF1
                             91 	.globl _TR1
                             92 	.globl _TF0
                             93 	.globl _TR0
                             94 	.globl _IE1
                             95 	.globl _IT1
                             96 	.globl _IE0
                             97 	.globl _IT0
                             98 	.globl _P0_7
                             99 	.globl _P0_6
                            100 	.globl _P0_5
                            101 	.globl _P0_4
                            102 	.globl _P0_3
                            103 	.globl _P0_2
                            104 	.globl _P0_1
                            105 	.globl _P0_0
                            106 	.globl _TH2
                            107 	.globl _TL2
                            108 	.globl _RCAP2H
                            109 	.globl _RCAP2L
                            110 	.globl _T2CON
                            111 	.globl _B
                            112 	.globl _ACC
                            113 	.globl _PSW
                            114 	.globl _IP
                            115 	.globl _P3
                            116 	.globl _IE
                            117 	.globl _P2
                            118 	.globl _SBUF
                            119 	.globl _SCON
                            120 	.globl _P1
                            121 	.globl _TH1
                            122 	.globl _TH0
                            123 	.globl _TL1
                            124 	.globl _TL0
                            125 	.globl _TMOD
                            126 	.globl _TCON
                            127 	.globl _PCON
                            128 	.globl _DPH
                            129 	.globl _DPL
                            130 	.globl _SP
                            131 	.globl _P0
                            132 	.globl _Delay10ms
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
   0003 12 00 64            348 	lcall	_main
                            349 ;	return from main will lock up
   0006 80 FE               350 	sjmp .
                            351 ;--------------------------------------------------------
                            352 ; code
                            353 ;--------------------------------------------------------
                            354 	.area CSEG    (CODE)
                            355 ;------------------------------------------------------------
                            356 ;Allocation info for local variables in function 'main'
                            357 ;------------------------------------------------------------
                            358 ;LED                       Allocated to registers r7 
                            359 ;------------------------------------------------------------
                            360 ;	led3.c:23: main()
                            361 ;	-----------------------------------------
                            362 ;	 function main
                            363 ;	-----------------------------------------
   0064                     364 _main:
                    0007    365 	ar7 = 0x07
                    0006    366 	ar6 = 0x06
                    0005    367 	ar5 = 0x05
                    0004    368 	ar4 = 0x04
                    0003    369 	ar3 = 0x03
                    0002    370 	ar2 = 0x02
                    0001    371 	ar1 = 0x01
                    0000    372 	ar0 = 0x00
                            373 ;	led3.c:27: LED = 0xfe;	  //0xfe = 1111 1110
   0064 7F FE               374 	mov	r7,#0xFE
                            375 ;	led3.c:29: while (1)
   0066                     376 00104$:
                            377 ;	led3.c:31: P0 = LED;
   0066 8F 80               378 	mov	_P0,r7
                            379 ;	led3.c:32: Delay10ms(50);
   0068 90 00 32            380 	mov	dptr,#0x0032
   006B C0 07               381 	push	ar7
   006D 12 00 7D            382 	lcall	_Delay10ms
   0070 D0 07               383 	pop	ar7
                            384 ;	led3.c:33: LED = LED << 1;    //循环右移1位，点亮下一个LED "<<"为左移位
   0072 EF                  385 	mov	a,r7
   0073 2F                  386 	add	a,r7
   0074 FF                  387 	mov	r7,a
                            388 ;	led3.c:34: if (P0 == 0x00)	//当它全灭的时候，重新赋值
   0075 E5 80               389 	mov	a,_P0
   0077 70 ED               390 	jnz	00104$
                            391 ;	led3.c:36: LED = 0xfe;  	// 0xfe = 1111 1110
   0079 7F FE               392 	mov	r7,#0xFE
   007B 80 E9               393 	sjmp	00104$
                            394 ;------------------------------------------------------------
                            395 ;Allocation info for local variables in function 'Delay10ms'
                            396 ;------------------------------------------------------------
                            397 ;c                         Allocated to registers r6 r7 
                            398 ;a                         Allocated to registers r4 
                            399 ;b                         Allocated to registers r5 
                            400 ;------------------------------------------------------------
                            401 ;	led3.c:49: void Delay10ms(unsigned int c)   //误差 0us
                            402 ;	-----------------------------------------
                            403 ;	 function Delay10ms
                            404 ;	-----------------------------------------
   007D                     405 _Delay10ms:
   007D AE 82               406 	mov	r6,dpl
   007F AF 83               407 	mov	r7,dph
   0081                     408 00109$:
                            409 ;	led3.c:54: for (;c>0;c--)
   0081 EE                  410 	mov	a,r6
   0082 4F                  411 	orl	a,r7
   0083 60 04               412 	jz	00115$
   0085 7D 01               413 	mov	r5,#0x01
   0087 80 02               414 	sjmp	00116$
   0089                     415 00115$:
   0089 7D 00               416 	mov	r5,#0x00
   008B                     417 00116$:
   008B ED                  418 	mov	a,r5
   008C 60 29               419 	jz	00113$
                            420 ;	led3.c:56: for (b=38;b>0;b--)
   008E 7D 26               421 	mov	r5,#0x26
   0090                     422 00105$:
   0090 ED                  423 	mov	a,r5
   0091 60 04               424 	jz	00117$
   0093 7C 01               425 	mov	r4,#0x01
   0095 80 02               426 	sjmp	00118$
   0097                     427 00117$:
   0097 7C 00               428 	mov	r4,#0x00
   0099                     429 00118$:
   0099 EC                  430 	mov	a,r4
   009A 60 14               431 	jz	00111$
                            432 ;	led3.c:58: for (a=130;a>0;a--);
   009C 7C 82               433 	mov	r4,#0x82
   009E                     434 00101$:
   009E EC                  435 	mov	a,r4
   009F 60 04               436 	jz	00119$
   00A1 7B 01               437 	mov	r3,#0x01
   00A3 80 02               438 	sjmp	00120$
   00A5                     439 00119$:
   00A5 7B 00               440 	mov	r3,#0x00
   00A7                     441 00120$:
   00A7 EB                  442 	mov	a,r3
   00A8 60 03               443 	jz	00107$
   00AA 1C                  444 	dec	r4
   00AB 80 F1               445 	sjmp	00101$
   00AD                     446 00107$:
                            447 ;	led3.c:56: for (b=38;b>0;b--)
   00AD 1D                  448 	dec	r5
   00AE 80 E0               449 	sjmp	00105$
   00B0                     450 00111$:
                            451 ;	led3.c:54: for (;c>0;c--)
   00B0 1E                  452 	dec	r6
   00B1 BE FF 01            453 	cjne	r6,#0xFF,00139$
   00B4 1F                  454 	dec	r7
   00B5                     455 00139$:
   00B5 80 CA               456 	sjmp	00109$
   00B7                     457 00113$:
   00B7 22                  458 	ret
                            459 	.area CSEG    (CODE)
                            460 	.area CONST   (CODE)
                            461 	.area XINIT   (CODE)
                            462 	.area CABS    (ABS,CODE)
