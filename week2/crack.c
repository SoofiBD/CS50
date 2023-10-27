#include <stdio.h>
#include <string.h>
#include <crypt.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./crack hash\n");
        return 1;
    }

    char *hash = argv[1];
    char salt[3];
    strncpy(salt, hash, 2);
    salt[2] = '\0';

    char guess[6];
    for (int length = 1; length <= 5; length++) {
        for (int i = 0; i < length; i++) {
            for (char c = 'A'; c <= 'z'; c++) {
                if (!isalpha(c)) continue;
                guess[i] = c;
                if (i == length - 1) {
                    guess[length] = '\0';
                    char *guess_hash = crypt(guess, salt);
                    if (strcmp(guess_hash, hash) == 0) {
                        printf("%s\n", guess);
                        return 0;
                    }
                }
            }
        }
    }

    printf("Password not found\n");
    return 1;
}
