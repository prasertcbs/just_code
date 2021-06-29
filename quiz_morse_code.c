// http://morsecode.scphillips.com/morse2.html
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int indexOf(char *haystack, char c) {
    for (int i = 0; i < strlen(haystack); ++i) {
        if (c == haystack[i]) {
            return i;
        }
    }
    return -1;
}

void text2morse(char *msg) {
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char *m[] = {
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
            "-----",
            ".----",
            "..---",
            "...--",
            "....-",
            ".....",
            "-....",
            "--...",
            "---..",
            "----."
    };
    for (int i = 0; i < strlen(msg); ++i) {
        int pos = indexOf(a, (char) toupper(msg[i]));
        if (pos != -1) {
            printf("%s ", m[pos]);
        }
    }
}

int main() {
    char msg[] = "SOS";
    text2morse(msg);
    return 0;
}