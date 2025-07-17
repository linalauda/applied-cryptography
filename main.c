#include <stdio.h>
#include "chapters/chapter01/xor_cipher.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s key input_file output_file\n", argv[0]);
        return 1;
    }

    xor_encrypt(argv[1], argv[2], argv[3]);
    return 0;
}


