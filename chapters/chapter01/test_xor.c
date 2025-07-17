// test_xor.c

#include <stdio.h>
#include "xor_cipher.h"

int main() {
    printf("Starte Test: xor_encrypt(\"key\", \"test_input.txt\", \"test_output.txt\")\n");

    xor_encrypt("key", "chapters/chapter01/test_input.txt", "chapters/chapter01/test_output.txt");

    printf("Fertig! Bitte überprüfe den Inhalt von test_output.txt\n");

    return 0;
}
