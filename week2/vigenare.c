#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int shift(char c) {
    if (isupper(c)) {
        return c - 'A';
    } else {
        return c - 'a';
    }
}

void vigenere_encrypt(char *plaintext, char *keyword) {
    int text_length = strlen(plaintext);
    int key_length = strlen(keyword);
    for (int i = 0, j = 0; i < text_length; i++) {
        char char_to_encrypt = plaintext[i];
        if (isalpha(char_to_encrypt)) {
            char alpha_offset = isupper(char_to_encrypt) ? 'A' : 'a';
            int key_value = shift(keyword[j % key_length]);
            char encrypted_char = ((char_to_encrypt - alpha_offset + key_value) % 26) + alpha_offset;
            printf("%c", encrypted_char);
            j++; 
        } else {
            printf("%c", char_to_encrypt);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2 || !isalpha(argv[1][0])) {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    for(int i = 0; i < strlen(argv[1]); i++) {
        if (!isalpha(argv[1][i])) {
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    char plaintext[256];
    printf("plaintext:  ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = 0; 
    printf("ciphertext: ");
    vigenere_encrypt(plaintext, argv[1]);
    return 0;
}
