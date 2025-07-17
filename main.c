#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *fi, *fo;
    char *cp;
    int c;

    // Check for key argument
    if ((cp = argv[1]) && *cp != '\0') {
        // Öffne Eingabedatei (read binary)
        if ((fi = fopen(argv[2], "rb")) != NULL) {
            // Öffne Ausgabedatei (write binary)
            if ((fo = fopen(argv[3], "wb")) != NULL) {
                // Lese Zeichenweise aus Eingabedatei
                while ((c = getc(fi)) != EOF) {
                    if (!*cp) cp = argv[1]; // Schlüssel zurücksetzen
                    c ^= *cp++;             // XOR mit Schlüsselzeichen
                    putc(c, fo);            // in Ausgabedatei schreiben
                }
                fclose(fo);
            }
            fclose(fi);
        }
    }
    return 0;
}

