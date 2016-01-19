CC = clang

CFILES = aes128.c


compile: $(CFILES)
	$(CC) -c $(CFILES)
	ar -cvq libAES128.a aes128.o
