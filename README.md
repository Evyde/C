# C
.
├── a.out
├── example
│   ├── main.c
│   └── makefile
├── LICENSE
├── monitor_apple
│   ├── CMakeLists.txt
│   ├── install.sh
│   ├── main.c
│   ├── server
│   │   ├── CMakeLists.txt
│   │   ├── server.c
│   │   ├── server.h
│   │   └── wiringPi
│   │       ├── build
│   │       ├── COPYING.LESSER
│   │       ├── debian
│   │       │   └── wiringPi
│   │       │       └── DEBIAN
│   │       │           ├── control
│   │       │           ├── postinst
│   │       │           └── postrm
│   │       ├── devLib
│   │       │   ├── ds1302.c
│   │       │   ├── ds1302.h
│   │       │   ├── font.h
│   │       │   ├── gertboard.c
│   │       │   ├── gertboard.h
│   │       │   ├── lcd128x64.c
│   │       │   ├── lcd128x64.h
│   │       │   ├── lcd.c
│   │       │   ├── lcd.h
│   │       │   ├── Makefile
│   │       │   ├── maxdetect.c
│   │       │   ├── maxdetect.h
│   │       │   ├── piFace.c
│   │       │   ├── piFace.h
│   │       │   ├── piFaceOld.c
│   │       │   ├── piGlow.c
│   │       │   ├── piGlow.h
│   │       │   ├── piNes.c
│   │       │   └── piNes.h
│   │       ├── examples
│   │       │   ├── blink12.c
│   │       │   ├── blink12drcs.c
│   │       │   ├── blink6drcs.c
│   │       │   ├── blink8.c
│   │       │   ├── blink.c
│   │       │   ├── blink.rtb
│   │       │   ├── blink.sh
│   │       │   ├── clock.c
│   │       │   ├── COPYING.LESSER
│   │       │   ├── delayTest.c
│   │       │   ├── ds1302.c
│   │       │   ├── Gertboard
│   │       │   │   ├── 7segments.c.gz
│   │       │   │   ├── buttons.c.gz
│   │       │   │   ├── gertboard.c.gz
│   │       │   │   ├── Makefile.gz
│   │       │   │   ├── record.c.gz
│   │       │   │   ├── temperature.c.gz
│   │       │   │   ├── voltmeter.c.gz
│   │       │   │   └── vumeter.c.gz
│   │       │   ├── header.h
│   │       │   ├── isr.c
│   │       │   ├── isr-osc.c
│   │       │   ├── lcd-adafruit.c
│   │       │   ├── lcd.c
│   │       │   ├── lowPower.c
│   │       │   ├── Makefile
│   │       │   ├── nes.c
│   │       │   ├── okLed.c
│   │       │   ├── PiFace
│   │       │   │   ├── blink.c.gz
│   │       │   │   ├── buttons.c.gz
│   │       │   │   ├── ladder.c.gz
│   │       │   │   ├── Makefile.gz
│   │       │   │   ├── metro.c.gz
│   │       │   │   ├── motor.c.gz
│   │       │   │   └── reaction.c.gz
│   │       │   ├── PiGlow
│   │       │   │   ├── Makefile.gz
│   │       │   │   ├── piGlow0.c.gz
│   │       │   │   ├── piGlow1.c.gz
│   │       │   │   └── piglow.c.gz
│   │       │   ├── pwm.c
│   │       │   ├── q2w
│   │       │   │   ├── binary.c.gz
│   │       │   │   ├── blink.c.gz
│   │       │   │   ├── blink-io.c.gz
│   │       │   │   ├── blink.sh.gz
│   │       │   │   ├── bright.c.gz
│   │       │   │   ├── button.c.gz
│   │       │   │   ├── Makefile.gz
│   │       │   │   └── volts.c.gz
│   │       │   ├── README.TXT
│   │       │   ├── rht03.c
│   │       │   ├── serialRead.c
│   │       │   ├── serialTest.c
│   │       │   ├── servo.c
│   │       │   ├── softPwm.c
│   │       │   ├── softTone.c
│   │       │   ├── speed.c
│   │       │   ├── spiSpeed.c
│   │       │   └── wfi.c
│   │       ├── gpio
│   │       │   ├── COPYING.LESSER
│   │       │   ├── gpio.1
│   │       │   ├── gpio.c
│   │       │   ├── Makefile
│   │       │   ├── newVersion
│   │       │   ├── pins.c
│   │       │   ├── pintest
│   │       │   ├── readall.c
│   │       │   ├── test.sh
│   │       │   └── version.h
│   │       ├── INSTALL
│   │       ├── install.log
│   │       ├── People
│   │       ├── pins
│   │       │   ├── Makefile
│   │       │   ├── pins.pdf
│   │       │   └── pins.tex
│   │       ├── README.TXT
│   │       ├── VERSION
│   │       └── wiringPi
│   │           ├── COPYING.LESSER
│   │           ├── drcSerial.c
│   │           ├── drcSerial.h
│   │           ├── Makefile
│   │           ├── max31855.c
│   │           ├── max31855.h
│   │           ├── max5322.c
│   │           ├── max5322.h
│   │           ├── mcp23008.c
│   │           ├── mcp23008.h
│   │           ├── mcp23016.c
│   │           ├── mcp23016.h
│   │           ├── mcp23016reg.h
│   │           ├── mcp23017.c
│   │           ├── mcp23017.h
│   │           ├── mcp23s08.c
│   │           ├── mcp23s08.h
│   │           ├── mcp23s17.c
│   │           ├── mcp23s17.h
│   │           ├── mcp23x0817.h
│   │           ├── mcp23x08.h
│   │           ├── mcp3002.c
│   │           ├── mcp3002.h
│   │           ├── mcp3004.c
│   │           ├── mcp3004.h
│   │           ├── mcp3422.c
│   │           ├── mcp3422.h
│   │           ├── mcp4802.c
│   │           ├── mcp4802.h
│   │           ├── pcf8574.c
│   │           ├── pcf8574.h
│   │           ├── pcf8591.c
│   │           ├── pcf8591.h
│   │           ├── piHiPri.c
│   │           ├── piThread.c
│   │           ├── sn3218.c
│   │           ├── sn3218.h
│   │           ├── softPwm.c
│   │           ├── softPwm.h
│   │           ├── softServo.c
│   │           ├── softServo.h
│   │           ├── softTone.c
│   │           ├── softTone.h
│   │           ├── sr595.c
│   │           ├── sr595.h
│   │           ├── wiringPi.c
│   │           ├── wiringPi.h
│   │           ├── wiringPiI2C.c
│   │           ├── wiringPiI2C.h
│   │           ├── wiringPiSPI.c
│   │           ├── wiringPiSPI.h
│   │           ├── wiringSerial.c
│   │           ├── wiringSerial.h
│   │           ├── wiringShift.c
│   │           ├── wiringShift.h
│   │           ├── wpiExtensions.c
│   │           └── wpiExtensions.h
│   └── tools
│       ├── CMakeLists.txt
│       ├── init_d.c
│       └── tools.h
├── pointer_first
│   ├── a.out
│   ├── main
│   ├── main.c
│   ├── makefile
│   ├── t.c
│   └── test.c
├── pointer_second
│   ├── main
│   ├── main.c
│   └── makefile
├── README.md
├── STC89C52RC
│   ├── delay.c
│   ├── example
│   │   ├── hf.h
│   │   ├── main.c
│   │   ├── makefile
│   │   └── stcflash.py
│   ├── hex2bin
│   │   ├── Hex2bin-1.0.12
│   │   │   ├── doc
│   │   │   │   ├── ChangeLog_hex2bin
│   │   │   │   ├── ChangeLog_mot2bin
│   │   │   │   ├── formats.txt
│   │   │   │   ├── intelhex.spc
│   │   │   │   ├── README
│   │   │   │   ├── S-record.txt
│   │   │   │   └── srec.txt
│   │   │   ├── hex2bin
│   │   │   ├── hex2bin.1
│   │   │   ├── hex2bin.c
│   │   │   ├── hex2bin.pod
│   │   │   ├── Makefile
│   │   │   ├── mot2bin
│   │   │   ├── mot2bin.c
│   │   │   └── test
│   │   │       ├── example2.bin
│   │   │       ├── example2.s19
│   │   │       ├── example3.s19
│   │   │       ├── example.bin
│   │   │       ├── example.bin1
│   │   │       ├── example.bin2
│   │   │       ├── example.cmd
│   │   │       ├── linear.bin
│   │   │       ├── Makefile
│   │   │       ├── nochecksum.bin
│   │   │       ├── segmented.bin
│   │   │       ├── test-addr_mask.bin
│   │   │       ├── test-addr_mask.s19
│   │   │       ├── test.bin
│   │   │       ├── test-byte-swap.bin
│   │   │       ├── test-end-memory.bin
│   │   │       ├── test-extra-lf.bin
│   │   │       └── test-overlap.bin
│   │   └── Hex2Bin.tar.bz2
│   ├── hf.h
│   ├── inc
│   │   └── hf.h
│   ├── JiDianQi
│   │   ├── hf.h
│   │   ├── main.asm
│   │   ├── main.bin
│   │   ├── main.c
│   │   ├── main.cdb
│   │   ├── main.ihx
│   │   ├── main.lk
│   │   ├── main.lst
│   │   ├── main.map
│   │   ├── main.mem
│   │   ├── main.omf
│   │   ├── main.rel
│   │   ├── main.rst
│   │   ├── main.sym
│   │   ├── makefile
│   │   └── stcflash.py
│   ├── LCD12864
│   │   ├── LCD12864.jpg
│   │   ├── LCD12864例程
│   │   │   ├── 12864程序接线示意图.jpg
│   │   │   ├── 12864接线图.jpg
│   │   │   ├── 12864数据手册.pdf
│   │   │   ├── ST7565p数据手册.pdf
│   │   │   ├── V1.0的屏接线图.jpg
│   │   │   ├── 刷屏
│   │   │   │   ├── 程序
│   │   │   │   │   ├── charcode.h
│   │   │   │   │   ├── keilkilll.bat
│   │   │   │   │   ├── main.c
│   │   │   │   │   ├── main.LST
│   │   │   │   │   ├── main.OBJ
│   │   │   │   │   ├── pro
│   │   │   │   │   ├── pro.lnp
│   │   │   │   │   ├── pro.M51
│   │   │   │   │   ├── pro.plg
│   │   │   │   │   ├── pro.uvopt
│   │   │   │   │   ├── pro_uvopt.bak
│   │   │   │   │   ├── pro.uvproj
│   │   │   │   │   ├── st7565.c
│   │   │   │   │   ├── st7565.h
│   │   │   │   │   ├── st7565.LST
│   │   │   │   │   ├── st7565.OBJ
│   │   │   │   │   ├── STARTUP.A51
│   │   │   │   │   ├── STARTUP.LST
│   │   │   │   │   └── STARTUP.OBJ
│   │   │   │   └── 刷屏效果图.JPG
│   │   │   ├── 文字取模软件的使用说明
│   │   │   │   ├── zimo.ini
│   │   │   │   ├── 取字的使用.pdf
│   │   │   │   └── 取字模软件.EXE
│   │   │   ├── 显示图片
│   │   │   │   ├── 程序
│   │   │   │   │   ├── charcode.h
│   │   │   │   │   ├── keilkilll.bat
│   │   │   │   │   ├── main.c
│   │   │   │   │   ├── pro
│   │   │   │   │   ├── pro.M51
│   │   │   │   │   ├── pro.uvopt
│   │   │   │   │   ├── pro.uvproj
│   │   │   │   │   ├── st7565.c
│   │   │   │   │   ├── st7565.h
│   │   │   │   │   └── STARTUP.A51
│   │   │   │   └── 显示图片效果图.JPG
│   │   │   ├── 显示文字
│   │   │   │   ├── 程序
│   │   │   │   │   ├── charcode.h
│   │   │   │   │   ├── keilkilll.bat
│   │   │   │   │   ├── main.c
│   │   │   │   │   ├── pro
│   │   │   │   │   ├── pro.M51
│   │   │   │   │   ├── pro.uvopt
│   │   │   │   │   ├── pro.uvproj
│   │   │   │   │   ├── st7565.c
│   │   │   │   │   ├── st7565.h
│   │   │   │   │   └── STARTUP.A51
│   │   │   │   └── 显示文字效果图.JPG
│   │   │   └── 怎么区分两种类型的屏.jpg
│   │   ├── pro.bin
│   │   ├── stcflash.py
│   │   └── 带字库12864例程
│   │       ├── 12864图片.JPG
│   │       ├── 画点
│   │       │   ├── lcd12864.c
│   │       │   ├── lcd12864.h
│   │       │   ├── lcd12864.LST
│   │       │   ├── lcd12864.OBJ
│   │       │   ├── main.c
│   │       │   ├── main.LST
│   │       │   ├── main.OBJ
│   │       │   ├── pro
│   │       │   ├── pro.lnp
│   │       │   ├── pro.M51
│   │       │   ├── pro.plg
│   │       │   ├── pro.uvopt
│   │       │   ├── pro_uvopt.bak
│   │       │   ├── pro.uvproj
│   │       │   ├── pro_uvproj.bak
│   │       │   ├── STARTUP.A51
│   │       │   ├── STARTUP.LST
│   │       │   └── STARTUP.OBJ
│   │       ├── 画图
│   │       │   ├── lcd12864.c
│   │       │   ├── lcd12864.h
│   │       │   ├── lcd12864.LST
│   │       │   ├── lcd12864.OBJ
│   │       │   ├── main.c
│   │       │   ├── main.LST
│   │       │   ├── main.OBJ
│   │       │   ├── pro
│   │       │   ├── pro.lnp
│   │       │   ├── pro.M51
│   │       │   ├── pro.plg
│   │       │   ├── pro.uvopt
│   │       │   ├── pro_uvopt.bak
│   │       │   ├── pro.uvproj
│   │       │   ├── pro_uvproj.bak
│   │       │   ├── STARTUP.A51
│   │       │   ├── STARTUP.LST
│   │       │   └── STARTUP.OBJ
│   │       ├── 如何在LCD12864上任意画点.doc
│   │       └── 显示汉字
│   │           ├── lcd12864.c
│   │           ├── lcd12864.h
│   │           ├── lcd12864.LST
│   │           ├── lcd12864.OBJ
│   │           ├── main.c
│   │           ├── main.LST
│   │           ├── main.OBJ
│   │           ├── pro
│   │           ├── pro.lnp
│   │           ├── pro.M51
│   │           ├── pro.plg
│   │           ├── pro.uvgui.Administrator
│   │           ├── pro.uvopt
│   │           ├── pro_uvopt.bak
│   │           ├── pro.uvproj
│   │           ├── pro_uvproj.bak
│   │           ├── STARTUP.A51
│   │           ├── STARTUP.LST
│   │           └── STARTUP.OBJ
│   ├── LCD12864.zip
│   ├── LCD1602
│   │   ├── hf.h
│   │   ├── lcd1.asm
│   │   ├── lcd1.bin
│   │   ├── lcd1.c
│   │   ├── lcd1.cdb
│   │   ├── lcd1.ihx
│   │   ├── lcd1.lk
│   │   ├── lcd1.lst
│   │   ├── lcd1.map
│   │   ├── lcd1.mem
│   │   ├── lcd1.omf
│   │   ├── lcd1.rel
│   │   ├── lcd1.rst
│   │   ├── lcd1.sym
│   │   ├── lcd.bin
│   │   ├── lcd.c
│   │   ├── lcd.h
│   │   ├── makefile
│   │   └── stcflash.py
│   ├── LEDtest
│   │   ├── hf.h
│   │   ├── l.bin
│   │   ├── makefile
│   │   ├── new.asm
│   │   ├── new.bin
│   │   ├── new.c
│   │   ├── new.cdb
│   │   ├── new.ihx
│   │   ├── new.lk
│   │   ├── new.lst
│   │   ├── new.map
│   │   ├── new.mem
│   │   ├── new.omf
│   │   ├── new.rel
│   │   ├── new.rst
│   │   ├── new.sym
│   │   └── stcflash.py
│   ├── pro.bin
│   ├── sdcc
│   │   ├── makefile
│   │   ├── test.asm
│   │   ├── test.bin
│   │   ├── test.c
│   │   ├── test.cdb
│   │   ├── test.ihx
│   │   ├── test.lk
│   │   ├── test.lst
│   │   ├── test.map
│   │   ├── test.mem
│   │   ├── test.omf
│   │   ├── test.rel
│   │   ├── test.rst
│   │   └── test.sym
│   ├── stcflash
│   │   ├── led3.asm
│   │   ├── led3.bin
│   │   ├── LED3.bin
│   │   ├── led3.c
│   │   ├── led3.cdb
│   │   ├── led3.ihx
│   │   ├── led3.lk
│   │   ├── led3.lst
│   │   ├── led3.map
│   │   ├── led3.mem
│   │   ├── led3.omf
│   │   ├── led3.rel
│   │   ├── led3.rst
│   │   ├── led3.sym
│   │   ├── led.bin
│   │   ├── LICENSE
│   │   ├── makefile
│   │   ├── pro.bin
│   │   ├── README.md
│   │   ├── stcflash.py
│   │   └── test.bin
│   └── TOTALTEST
│       ├── makefile
│       ├── pro.bin
│       └── stcflash.py
├── test
│   └── new.c
└── test.c

46 directories, 425 files
