# Makefile

CC = clang
CFLAGS = -Wall
SRC = main.c chapters/chapter01/xor_cipher.c
OUT = crypto

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

run: all
	./crypto secret input.txt output.txt

clean:
	rm -f $(OUT) *.o output.txt decrypted.txt
