// xor_cipher.c

#include <stdio.h>
#include "xor_cipher.h"

void xor_encrypt(const char *key, const char *input_file, const char *output_file) {
    FILE *fi, *fo;
    const char *cp = key;
    int c;

    if ((fi = fopen(input_file, "rb")) != NULL) {
        if ((fo = fopen(output_file, "wb")) != NULL) {
            while ((c = getc(fi)) != EOF) {
                if (!*cp) cp = key;
                c ^= *cp++;
                putc(c, fo);
            }
            fclose(fo);
        }
        fclose(fi);
    }
}
