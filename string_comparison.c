#include <stdio.h>
#include <string.h>

int strcompare(const char *s1, const char *s2) {
    int i;
    for (i = 0; s1[i] == s2[i]; i++) {
        if (s1[i] == '\0') {
            return 0;
        }
    }
    return s1[i] - s2[i];
}

void demo1() {
    char s1[] = "Apple";
    char *s2 = "Banana";
//    int v = strcmp(s1, s2);
//    int v = strcasecmp(s1, s2);
    int v = strcompare(s1, s2);
    printf("v = %d\n", v);
    printf("s1 = %s (%p)\n", s1, s1);
    printf("s2 = %s (%p)\n", s2, s2);
    if (v == 0) {
        printf("contents: s1 == s2\n");
    } else {
        printf("contents: s1 != s2\n");
    }
    if (s1 == s2) {
        printf("address: s1 == s2\n");
    } else {
        printf("address: s1 != s2\n");
    }
}

int main() {
    demo1();
    return 0;
}