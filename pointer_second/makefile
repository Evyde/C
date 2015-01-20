filename=main
auto:$(filename).c
	gcc -Wall $(filename).c -o $(filename)&&./$(filename)

com:$(filename).c
	gcc -Wall $(filename).c -o $(filename)

clean:
	mv $(filename).c ../ ;rm $(filename).* ;mv ../$(filename).c ./

zip:
	zip -9r $(filename).zip $(filename).*

targz:
	tar -cf $(filename).tar $(filename).* &&gzip -9 $(filename).tar.gz $(filename).tar
