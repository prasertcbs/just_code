#include <stdio.h>
#include <ctype.h>

void strupper(char s[]) {
    int i = 0;
    while (s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
}

void strupper2(char *s) {
    int i = 0;
    while (s[i]) {
        s[i] = toupper(s[i]);
        i++;
    }
}

int strlength(char *s) {
    int i = 0;
    while (*s != '\0') {
        s++;
        i++;
    }
    return i;
}

int main() {
//    char flower[] = "lily";
    char *flower = "lily"; // constant
    printf("%s(%p)\n", flower, flower);
//    strupper2(flower); // flower -> address
//    printf("length = %d\n", strlength(flower));
//    printf("%s\n", flower);
    flower = "jasmine";
    printf("%s(%p)\n", flower, flower);
//    printf("flower = %s\n", flower);
    return 0;
}