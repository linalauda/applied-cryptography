# Kapitel 1 – XOR-Verschlüsselung

In diesem Kapitel wird eine einfache symmetrische Verschlüsselung mit **XOR** vorgestellt.  
Die Implementierung basiert auf dem Beispiel aus *Applied Cryptography*.

## 🔐 Funktionsweise

Der Klartext wird Zeichen für Zeichen mit einem sich wiederholenden Schlüssel XOR-verknüpft.


## 📂 Dateien

- `xor_cipher.c` – Implementierung der XOR-Verschlüsselung
- `xor_cipher.h` – Funktionsprototyp
- `test_xor.c` – Testanwendung
- `test_input.txt`, `test_output.txt` – Testdaten

## 🛠️ Kompilieren und Ausführen

```bash
make         # Hauptprojekt kompilieren
make run     # input.txt → output.txt mit Schlüssel "secret"

# Testdatei separat kompilieren
clang test_xor.c xor_cipher.c -o test_xor
./test_xor


#Beispiel
echo "Hello World" > input.txt
./crypto secret input.txt output.txt
./crypto secret output.txt decrypted.txt
cat decrypted.txt

