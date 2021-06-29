#include <stdio.h>
#include <ctype.h>
#include <string.h>

void strcap(char s[]) {
    s[0] = (char) toupper(s[0]);
}

void strcap2(char s[]) {
    printf("address (s) = %p\n", s);
    printf("*s   = %c\n", *s);
    printf("s[0] = %c\n", s[0]);
    *s = (char) toupper(*s);
}

size_t strlength(char *s) {
    size_t i;
    for (i = 0; *s != '\0'; i++) {
        s++;
    }
    return i;
}

void strupper(char *s) {
    for (int i = 0; i < strlen(s); ++i) {
        s[i] = (char) toupper(s[i]);
    }
}

void strupper2(char *s) {
    for (; *s; s++) {
        *s = (char) toupper(*s);
    }
}

int main() {
    char a[] = "mango";
    strupper2(a);
    printf("upper = %s\n", a);
//    printf("len = %zu\n", strlength(a));
//    printf("address (a) = %p\n", a);
//    strcap2(a);
//    printf("a = %s\n", a);
    return 0;
}