                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.1.0 #7066 (Apr 25 2013) (Linux)
                              4 ; This file was generated Wed Dec 24 21:26:54 2014
                              5 ;--------------------------------------------------------
                              6 	.module lcd1
                              7 	.optsdcc -mmcs51 --model-small
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _table1
                             13 	.globl _table
                             14 	.globl _main
                             15 	.globl _init
                             16 	.globl _write_dat
                             17 	.globl _write_com
                             18 	.globl _delay
                             19 	.globl _TF2
                             20 	.globl _EXF2
                             21 	.globl _RCLK
                             22 	.globl _TCLK
                             23 	.globl _EXEN2
                             24 	.globl _TR2
                             25 	.globl _C_T2
                             26 	.globl _CP_RL2
                             27 	.globl _T2CON_7
                             28 	.globl _T2CON_6
                             29 	.globl _T2CON_5
                             30 	.globl _T2CON_4
                             31 	.globl _T2CON_3
                             32 	.globl _T2CON_2
                             33 	.globl _T2CON_1
                             34 	.globl _T2CON_0
                             35 	.globl _PT2
                             36 	.globl _ET2
                             37 	.globl _CY
                             38 	.globl _AC
                             39 	.globl _F0
                             40 	.globl _RS1
                             41 	.globl _RS0
                             42 	.globl _OV
                             43 	.globl _F1
                             44 	.globl _P
                             45 	.globl _PS
                             46 	.globl _PT1
                             47 	.globl _PX1
                             48 	.globl _PT0
                             49 	.globl _PX0
                             50 	.globl _RD
                             51 	.globl _WR
                             52 	.globl _T1
                             53 	.globl _T0
                             54 	.globl _INT1
                             55 	.globl _INT0
                             56 	.globl _TXD
                             57 	.globl _RXD
                             58 	.globl _P3_7
                             59 	.globl _P3_6
                             60 	.globl _P3_5
                             61 	.globl _P3_4
                             62 	.globl _P3_3
                             63 	.globl _P3_2
                             64 	.globl _P3_1
                             65 	.globl _P3_0
                             66 	.globl _EA
                             67 	.globl _ES
                             68 	.globl _ET1
                             69 	.globl _EX1
                             70 	.globl _ET0
                             71 	.globl _EX0
                             72 	.globl _P2_7
                             73 	.globl _P2_6
                             74 	.globl _P2_5
                             75 	.globl _P2_4
                             76 	.globl _P2_3
                             77 	.globl _P2_2
                             78 	.globl _P2_1
                             79 	.globl _P2_0
                             80 	.globl _SM0
                             81 	.globl _SM1
                             82 	.globl _SM2
                             83 	.globl _REN
                             84 	.globl _TB8
                             85 	.globl _RB8
                             86 	.globl _TI
                             87 	.globl _RI
                             88 	.globl _P1_7
                             89 	.globl _P1_6
                             90 	.globl _P1_5
                             91 	.globl _P1_4
                             92 	.globl _P1_3
                             93 	.globl _P1_2
                             94 	.globl _P1_1
                             95 	.globl _P1_0
                             96 	.globl _TF1
                             97 	.globl _TR1
                             98 	.globl _TF0
                             99 	.globl _TR0
                            100 	.globl _IE1
                            101 	.globl _IT1
                            102 	.globl _IE0
                            103 	.globl _IT0
                            104 	.globl _P0_7
                            105 	.globl _P0_6
                            106 	.globl _P0_5
                            107 	.globl _P0_4
                            108 	.globl _P0_3
                            109 	.globl _P0_2
                            110 	.globl _P0_1
                            111 	.globl _P0_0
                            112 	.globl _TH2
                            113 	.globl _TL2
                            114 	.globl _RCAP2H
                            115 	.globl _RCAP2L
                            116 	.globl _T2CON
                            117 	.globl _B
                            118 	.globl _ACC
                            119 	.globl _PSW
                            120 	.globl _IP
                            121 	.globl _P3
                            122 	.globl _IE
                            123 	.globl _P2
                            124 	.globl _SBUF
                            125 	.globl _SCON
                            126 	.globl _P1
                            127 	.globl _TH1
                            128 	.globl _TH0
                            129 	.globl _TL1
                            130 	.globl _TL0
                            131 	.globl _TMOD
                            132 	.globl _TCON
                            133 	.globl _PCON
                            134 	.globl _DPH
                            135 	.globl _DPL
                            136 	.globl _SP
                            137 	.globl _P0
                            138 ;--------------------------------------------------------
                            139 ; special function registers
                            140 ;--------------------------------------------------------
                            141 	.area RSEG    (ABS,DATA)
   0000                     142 	.org 0x0000
                    0080    143 _P0	=	0x0080
                    0081    144 _SP	=	0x0081
                    0082    145 _DPL	=	0x0082
                    0083    146 _DPH	=	0x0083
                    0087    147 _PCON	=	0x0087
                    0088    148 _TCON	=	0x0088
                    0089    149 _TMOD	=	0x0089
                    008A    150 _TL0	=	0x008a
                    008B    151 _TL1	=	0x008b
                    008C    152 _TH0	=	0x008c
                    008D    153 _TH1	=	0x008d
                    0090    154 _P1	=	0x0090
                    0098    155 _SCON	=	0x0098
                    0099    156 _SBUF	=	0x0099
                    00A0    157 _P2	=	0x00a0
                    00A8    158 _IE	=	0x00a8
                    00B0    159 _P3	=	0x00b0
                    00B8    160 _IP	=	0x00b8
                    00D0    161 _PSW	=	0x00d0
                    00E0    162 _ACC	=	0x00e0
                    00F0    163 _B	=	0x00f0
                    00C8    164 _T2CON	=	0x00c8
                    00CA    165 _RCAP2L	=	0x00ca
                    00CB    166 _RCAP2H	=	0x00cb
                    00CC    167 _TL2	=	0x00cc
                    00CD    168 _TH2	=	0x00cd
                            169 ;--------------------------------------------------------
                            170 ; special function bits
                            171 ;--------------------------------------------------------
                            172 	.area RSEG    (ABS,DATA)
   0000                     173 	.org 0x0000
                    0080    174 _P0_0	=	0x0080
                    0081    175 _P0_1	=	0x0081
                    0082    176 _P0_2	=	0x0082
                    0083    177 _P0_3	=	0x0083
                    0084    178 _P0_4	=	0x0084
                    0085    179 _P0_5	=	0x0085
                    0086    180 _P0_6	=	0x0086
                    0087    181 _P0_7	=	0x0087
                    0088    182 _IT0	=	0x0088
                    0089    183 _IE0	=	0x0089
                    008A    184 _IT1	=	0x008a
                    008B    185 _IE1	=	0x008b
                    008C    186 _TR0	=	0x008c
                    008D    187 _TF0	=	0x008d
                    008E    188 _TR1	=	0x008e
                    008F    189 _TF1	=	0x008f
                    0090    190 _P1_0	=	0x0090
                    0091    191 _P1_1	=	0x0091
                    0092    192 _P1_2	=	0x0092
                    0093    193 _P1_3	=	0x0093
                    0094    194 _P1_4	=	0x0094
                    0095    195 _P1_5	=	0x0095
                    0096    196 _P1_6	=	0x0096
                    0097    197 _P1_7	=	0x0097
                    0098    198 _RI	=	0x0098
                    0099    199 _TI	=	0x0099
                    009A    200 _RB8	=	0x009a
                    009B    201 _TB8	=	0x009b
                    009C    202 _REN	=	0x009c
                    009D    203 _SM2	=	0x009d
                    009E    204 _SM1	=	0x009e
                    009F    205 _SM0	=	0x009f
                    00A0    206 _P2_0	=	0x00a0
                    00A1    207 _P2_1	=	0x00a1
                    00A2    208 _P2_2	=	0x00a2
                    00A3    209 _P2_3	=	0x00a3
                    00A4    210 _P2_4	=	0x00a4
                    00A5    211 _P2_5	=	0x00a5
                    00A6    212 _P2_6	=	0x00a6
                    00A7    213 _P2_7	=	0x00a7
                    00A8    214 _EX0	=	0x00a8
                    00A9    215 _ET0	=	0x00a9
                    00AA    216 _EX1	=	0x00aa
                    00AB    217 _ET1	=	0x00ab
                    00AC    218 _ES	=	0x00ac
                    00AF    219 _EA	=	0x00af
                    00B0    220 _P3_0	=	0x00b0
                    00B1    221 _P3_1	=	0x00b1
                    00B2    222 _P3_2	=	0x00b2
                    00B3    223 _P3_3	=	0x00b3
                    00B4    224 _P3_4	=	0x00b4
                    00B5    225 _P3_5	=	0x00b5
                    00B6    226 _P3_6	=	0x00b6
                    00B7    227 _P3_7	=	0x00b7
                    00B0    228 _RXD	=	0x00b0
                    00B1    229 _TXD	=	0x00b1
                    00B2    230 _INT0	=	0x00b2
                    00B3    231 _INT1	=	0x00b3
                    00B4    232 _T0	=	0x00b4
                    00B5    233 _T1	=	0x00b5
                    00B6    234 _WR	=	0x00b6
                    00B7    235 _RD	=	0x00b7
                    00B8    236 _PX0	=	0x00b8
                    00B9    237 _PT0	=	0x00b9
                    00BA    238 _PX1	=	0x00ba
                    00BB    239 _PT1	=	0x00bb
                    00BC    240 _PS	=	0x00bc
                    00D0    241 _P	=	0x00d0
                    00D1    242 _F1	=	0x00d1
                    00D2    243 _OV	=	0x00d2
                    00D3    244 _RS0	=	0x00d3
                    00D4    245 _RS1	=	0x00d4
                    00D5    246 _F0	=	0x00d5
                    00D6    247 _AC	=	0x00d6
                    00D7    248 _CY	=	0x00d7
                    00AD    249 _ET2	=	0x00ad
                    00BD    250 _PT2	=	0x00bd
                    00C8    251 _T2CON_0	=	0x00c8
                    00C9    252 _T2CON_1	=	0x00c9
                    00CA    253 _T2CON_2	=	0x00ca
                    00CB    254 _T2CON_3	=	0x00cb
                    00CC    255 _T2CON_4	=	0x00cc
                    00CD    256 _T2CON_5	=	0x00cd
                    00CE    257 _T2CON_6	=	0x00ce
                    00CF    258 _T2CON_7	=	0x00cf
                    00C8    259 _CP_RL2	=	0x00c8
                    00C9    260 _C_T2	=	0x00c9
                    00CA    261 _TR2	=	0x00ca
                    00CB    262 _EXEN2	=	0x00cb
                    00CC    263 _TCLK	=	0x00cc
                    00CD    264 _RCLK	=	0x00cd
                    00CE    265 _EXF2	=	0x00ce
                    00CF    266 _TF2	=	0x00cf
                            267 ;--------------------------------------------------------
                            268 ; overlayable register banks
                            269 ;--------------------------------------------------------
                            270 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     271 	.ds 8
                            272 ;--------------------------------------------------------
                            273 ; internal ram data
                            274 ;--------------------------------------------------------
                            275 	.area DSEG    (DATA)
                            276 ;--------------------------------------------------------
                            277 ; overlayable items in internal ram 
                            278 ;--------------------------------------------------------
                            279 	.area	OSEG    (OVR,DATA)
                            280 ;--------------------------------------------------------
                            281 ; Stack segment in internal ram 
                            282 ;--------------------------------------------------------
                            283 	.area	SSEG	(DATA)
   0008                     284 __start__stack:
   0008                     285 	.ds	1
                            286 
                            287 ;--------------------------------------------------------
                            288 ; indirectly addressable internal ram data
                            289 ;--------------------------------------------------------
                            290 	.area ISEG    (DATA)
                            291 ;--------------------------------------------------------
                            292 ; absolute internal ram data
                            293 ;--------------------------------------------------------
                            294 	.area IABS    (ABS,DATA)
                            295 	.area IABS    (ABS,DATA)
                            296 ;--------------------------------------------------------
                            297 ; bit data
                            298 ;--------------------------------------------------------
                            299 	.area BSEG    (BIT)
                            300 ;--------------------------------------------------------
                            301 ; paged external ram data
                            302 ;--------------------------------------------------------
                            303 	.area PSEG    (PAG,XDATA)
                            304 ;--------------------------------------------------------
                            305 ; external ram data
                            306 ;--------------------------------------------------------
                            307 	.area XSEG    (XDATA)
                            308 ;--------------------------------------------------------
                            309 ; absolute external ram data
                            310 ;--------------------------------------------------------
                            311 	.area XABS    (ABS,XDATA)
                            312 ;--------------------------------------------------------
                            313 ; external initialized ram data
                            314 ;--------------------------------------------------------
                            315 	.area XISEG   (XDATA)
                            316 	.area HOME    (CODE)
                            317 	.area GSINIT0 (CODE)
                            318 	.area GSINIT1 (CODE)
                            319 	.area GSINIT2 (CODE)
                            320 	.area GSINIT3 (CODE)
                            321 	.area GSINIT4 (CODE)
                            322 	.area GSINIT5 (CODE)
                            323 	.area GSINIT  (CODE)
                            324 	.area GSFINAL (CODE)
                            325 	.area CSEG    (CODE)
                            326 ;--------------------------------------------------------
                            327 ; interrupt vector 
                            328 ;--------------------------------------------------------
                            329 	.area HOME    (CODE)
   0000                     330 __interrupt_vect:
   0000 02 00 08            331 	ljmp	__sdcc_gsinit_startup
                            332 ;--------------------------------------------------------
                            333 ; global & static initialisations
                            334 ;--------------------------------------------------------
                            335 	.area HOME    (CODE)
                            336 	.area GSINIT  (CODE)
                            337 	.area GSFINAL (CODE)
                            338 	.area GSINIT  (CODE)
                            339 	.globl __sdcc_gsinit_startup
                            340 	.globl __sdcc_program_startup
                            341 	.globl __start__stack
                            342 	.globl __mcs51_genXINIT
                            343 	.globl __mcs51_genXRAMCLEAR
                            344 	.globl __mcs51_genRAMCLEAR
                            345 	.area GSFINAL (CODE)
   0061 02 00 03            346 	ljmp	__sdcc_program_startup
                            347 ;--------------------------------------------------------
                            348 ; Home
                            349 ;--------------------------------------------------------
                            350 	.area HOME    (CODE)
                            351 	.area HOME    (CODE)
   0003                     352 __sdcc_program_startup:
   0003 12 00 CF            353 	lcall	_main
                            354 ;	return from main will lock up
   0006 80 FE               355 	sjmp .
                            356 ;--------------------------------------------------------
                            357 ; code
                            358 ;--------------------------------------------------------
                            359 	.area CSEG    (CODE)
                            360 ;------------------------------------------------------------
                            361 ;Allocation info for local variables in function 'delay'
                            362 ;------------------------------------------------------------
                            363 ;x                         Allocated to registers r7 
                            364 ;i                         Allocated to registers r7 
                            365 ;j                         Allocated to registers r6 
                            366 ;------------------------------------------------------------
                            367 ;	lcd1.c:10: void delay(uchar x)
                            368 ;	-----------------------------------------
                            369 ;	 function delay
                            370 ;	-----------------------------------------
   0064                     371 _delay:
                    0007    372 	ar7 = 0x07
                    0006    373 	ar6 = 0x06
                    0005    374 	ar5 = 0x05
                    0004    375 	ar4 = 0x04
                    0003    376 	ar3 = 0x03
                    0002    377 	ar2 = 0x02
                    0001    378 	ar1 = 0x01
                    0000    379 	ar0 = 0x00
   0064 AF 82               380 	mov	r7,dpl
                            381 ;	lcd1.c:13: for(i=x;i>0;i--)
   0066                     382 00105$:
   0066 EF                  383 	mov	a,r7
   0067 60 04               384 	jz	00111$
   0069 7E 01               385 	mov	r6,#0x01
   006B 80 02               386 	sjmp	00112$
   006D                     387 00111$:
   006D 7E 00               388 	mov	r6,#0x00
   006F                     389 00112$:
   006F EE                  390 	mov	a,r6
   0070 60 14               391 	jz	00109$
                            392 ;	lcd1.c:14: for(j=110;j>0;j--);
   0072 7E 6E               393 	mov	r6,#0x6E
   0074                     394 00101$:
   0074 EE                  395 	mov	a,r6
   0075 60 04               396 	jz	00113$
   0077 7D 01               397 	mov	r5,#0x01
   0079 80 02               398 	sjmp	00114$
   007B                     399 00113$:
   007B 7D 00               400 	mov	r5,#0x00
   007D                     401 00114$:
   007D ED                  402 	mov	a,r5
   007E 60 03               403 	jz	00107$
   0080 1E                  404 	dec	r6
   0081 80 F1               405 	sjmp	00101$
   0083                     406 00107$:
                            407 ;	lcd1.c:13: for(i=x;i>0;i--)
   0083 1F                  408 	dec	r7
   0084 80 E0               409 	sjmp	00105$
   0086                     410 00109$:
   0086 22                  411 	ret
                            412 ;------------------------------------------------------------
                            413 ;Allocation info for local variables in function 'write_com'
                            414 ;------------------------------------------------------------
                            415 ;com                       Allocated to registers 
                            416 ;------------------------------------------------------------
                            417 ;	lcd1.c:16: void write_com(uchar com)
                            418 ;	-----------------------------------------
                            419 ;	 function write_com
                            420 ;	-----------------------------------------
   0087                     421 _write_com:
   0087 85 82 80            422 	mov	_P0,dpl
                            423 ;	lcd1.c:19: lcdrs=0;
   008A C2 A6               424 	clr	_P2_6
                            425 ;	lcd1.c:20: lcdwr=0;
   008C C2 A5               426 	clr	_P2_5
                            427 ;	lcd1.c:21: delay(5);
   008E 75 82 05            428 	mov	dpl,#0x05
   0091 12 00 64            429 	lcall	_delay
                            430 ;	lcd1.c:22: lcde=0;
   0094 C2 A7               431 	clr	_P2_7
                            432 ;	lcd1.c:23: delay(5);
   0096 75 82 05            433 	mov	dpl,#0x05
   0099 12 00 64            434 	lcall	_delay
                            435 ;	lcd1.c:24: lcde=1;
   009C D2 A7               436 	setb	_P2_7
   009E 22                  437 	ret
                            438 ;------------------------------------------------------------
                            439 ;Allocation info for local variables in function 'write_dat'
                            440 ;------------------------------------------------------------
                            441 ;dat                       Allocated to registers 
                            442 ;------------------------------------------------------------
                            443 ;	lcd1.c:26: void write_dat(uchar dat)
                            444 ;	-----------------------------------------
                            445 ;	 function write_dat
                            446 ;	-----------------------------------------
   009F                     447 _write_dat:
   009F 85 82 80            448 	mov	_P0,dpl
                            449 ;	lcd1.c:29: lcdrs=1;
   00A2 D2 A6               450 	setb	_P2_6
                            451 ;	lcd1.c:30: lcdwr=0;
   00A4 C2 A5               452 	clr	_P2_5
                            453 ;	lcd1.c:31: delay(5);
   00A6 75 82 05            454 	mov	dpl,#0x05
   00A9 12 00 64            455 	lcall	_delay
                            456 ;	lcd1.c:32: lcde=0;
   00AC C2 A7               457 	clr	_P2_7
                            458 ;	lcd1.c:33: delay(5);
   00AE 75 82 05            459 	mov	dpl,#0x05
   00B1 12 00 64            460 	lcall	_delay
                            461 ;	lcd1.c:34: lcde=1;
   00B4 D2 A7               462 	setb	_P2_7
   00B6 22                  463 	ret
                            464 ;------------------------------------------------------------
                            465 ;Allocation info for local variables in function 'init'
                            466 ;------------------------------------------------------------
                            467 ;	lcd1.c:36: void init()
                            468 ;	-----------------------------------------
                            469 ;	 function init
                            470 ;	-----------------------------------------
   00B7                     471 _init:
                            472 ;	lcd1.c:38: write_com(0x01);
   00B7 75 82 01            473 	mov	dpl,#0x01
   00BA 12 00 87            474 	lcall	_write_com
                            475 ;	lcd1.c:39: write_com(0x3f);
   00BD 75 82 3F            476 	mov	dpl,#0x3F
   00C0 12 00 87            477 	lcall	_write_com
                            478 ;	lcd1.c:40: write_com(0x0d);
   00C3 75 82 0D            479 	mov	dpl,#0x0D
   00C6 12 00 87            480 	lcall	_write_com
                            481 ;	lcd1.c:41: write_com(0x06);
   00C9 75 82 06            482 	mov	dpl,#0x06
   00CC 02 00 87            483 	ljmp	_write_com
                            484 ;------------------------------------------------------------
                            485 ;Allocation info for local variables in function 'main'
                            486 ;------------------------------------------------------------
                            487 ;i                         Allocated to registers r7 
                            488 ;------------------------------------------------------------
                            489 ;	lcd1.c:43: void main()
                            490 ;	-----------------------------------------
                            491 ;	 function main
                            492 ;	-----------------------------------------
   00CF                     493 _main:
                            494 ;	lcd1.c:46: init();
   00CF 12 00 B7            495 	lcall	_init
                            496 ;	lcd1.c:47: write_com(0x80+0x10);
   00D2 75 82 90            497 	mov	dpl,#0x90
   00D5 12 00 87            498 	lcall	_write_com
                            499 ;	lcd1.c:48: for(i=0;i<16;i++)
   00D8 7F 00               500 	mov	r7,#0x00
   00DA                     501 00104$:
   00DA BF 10 00            502 	cjne	r7,#0x10,00126$
   00DD                     503 00126$:
   00DD 50 17               504 	jnc	00107$
                            505 ;	lcd1.c:51: write_dat(table[i]);
   00DF EF                  506 	mov	a,r7
   00E0 90 01 3A            507 	mov	dptr,#_table
   00E3 93                  508 	movc	a,@a+dptr
   00E4 F5 82               509 	mov	dpl,a
   00E6 C0 07               510 	push	ar7
   00E8 12 00 9F            511 	lcall	_write_dat
                            512 ;	lcd1.c:52: delay(50);
   00EB 75 82 32            513 	mov	dpl,#0x32
   00EE 12 00 64            514 	lcall	_delay
   00F1 D0 07               515 	pop	ar7
                            516 ;	lcd1.c:48: for(i=0;i<16;i++)
   00F3 0F                  517 	inc	r7
   00F4 80 E4               518 	sjmp	00104$
   00F6                     519 00107$:
                            520 ;	lcd1.c:54: write_com(0x80+0x40+0x10);
   00F6 75 82 D0            521 	mov	dpl,#0xD0
   00F9 12 00 87            522 	lcall	_write_com
                            523 ;	lcd1.c:55: for(i=0;i<16;i++)
   00FC 7F 00               524 	mov	r7,#0x00
   00FE                     525 00108$:
   00FE BF 10 00            526 	cjne	r7,#0x10,00128$
   0101                     527 00128$:
   0101 50 17               528 	jnc	00111$
                            529 ;	lcd1.c:57: write_dat(table1[i]);
   0103 EF                  530 	mov	a,r7
   0104 90 01 4A            531 	mov	dptr,#_table1
   0107 93                  532 	movc	a,@a+dptr
   0108 F5 82               533 	mov	dpl,a
   010A C0 07               534 	push	ar7
   010C 12 00 9F            535 	lcall	_write_dat
                            536 ;	lcd1.c:58: delay(50);
   010F 75 82 32            537 	mov	dpl,#0x32
   0112 12 00 64            538 	lcall	_delay
   0115 D0 07               539 	pop	ar7
                            540 ;	lcd1.c:55: for(i=0;i<16;i++)
   0117 0F                  541 	inc	r7
   0118 80 E4               542 	sjmp	00108$
   011A                     543 00111$:
                            544 ;	lcd1.c:60: for(i=0;i<16;i++)
   011A 7F 10               545 	mov	r7,#0x10
   011C                     546 00114$:
                            547 ;	lcd1.c:62: write_com(0x18);
   011C 75 82 18            548 	mov	dpl,#0x18
   011F C0 07               549 	push	ar7
   0121 12 00 87            550 	lcall	_write_com
                            551 ;	lcd1.c:63: delay(50);
   0124 75 82 32            552 	mov	dpl,#0x32
   0127 12 00 64            553 	lcall	_delay
   012A D0 07               554 	pop	ar7
   012C 8F 06               555 	mov	ar6,r7
   012E 1E                  556 	dec	r6
   012F 8E 07               557 	mov	ar7,r6
                            558 ;	lcd1.c:60: for(i=0;i<16;i++)
   0131 EF                  559 	mov	a,r7
   0132 70 E8               560 	jnz	00114$
                            561 ;	lcd1.c:65: while(1);
   0134                     562 00102$:
   0134 80 FE               563 	sjmp	00102$
                            564 	.area CSEG    (CODE)
                            565 	.area CONST   (CODE)
   013A                     566 _table:
   013A 20 20 20 20 20 32   567 	.ascii "     21:25     "
        31 3A 32 35 20 20
        20 20 20
   0149 00                  568 	.db 0x00
   014A                     569 _table1:
   014A 20 32 30 31 34 2D   570 	.ascii " 2014-12-24 WED "
        31 32 2D 32 34 20
        57 45 44 20
   015A 00                  571 	.db 0x00
                            572 	.area XINIT   (CODE)
                            573 	.area CABS    (ABS,CODE)
