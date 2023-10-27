#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void caesar_cipher(char *text, int key) {
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            char offset = islower(ch) ? 'a' : 'A';
            text[i] = (ch - offset + key) % 26 + offset;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2 || !isdigit(argv[1][0])) {
        fprintf(stderr, "Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(argv[1]);
    char plaintext[256];
    printf("plaintext:  ");
    fgets(plaintext, sizeof(plaintext), stdin);
    
    caesar_cipher(plaintext, key);
    printf("ciphertext: %s", plaintext);

    return 0;
}
