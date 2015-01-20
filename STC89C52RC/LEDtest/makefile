filename=new
auto:$(filename).c
	echo "Compilering......";sdcc $(filename).c;echo "Packing......";packihx $(filename).ihx>$(filename).hex;hex2bin $(filename).hex;echo "Installing......";python stcflash.py $(filename).bin

com:$(filename).c
	sdcc $(filename).c

pack:$(filename).ihx
	packihx $(filename).ihx>$(filename).hex

bin:$(filename).hex
	hex2bin $(filename).hex

install:$(filename).bin
	python stcflash.py $(filename).bin

clean:
	mv $(filename).c ../ ;rm $(filename).* ;mv ../$(filename).c ./

zip:
	zip -9r $(filename).zip $(filename).*
