#include <stdio.h>

void demo1() {
    char grade[4]; // 0..3
    grade[0] = 'A';
    grade[1] = 'B';
    grade[2] = 'C';
    grade[3] = 'D';
    printf("%c\n", grade[2]);
}

void demo2() {
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%c\n", grade[2]);
}

void demo3() {
    char grade[] = "ABCD";
    printf("%c\n", grade[2]);
}

void demo4() {
    char grade[] = {'A', 'B', 'C', 'D', '\0'};
    char letter[] = "ABCD";
    printf("%c\n", grade[2]);
    printf("%c\n", letter[2]);
    printf("grade  = %s\n", grade);
    printf("letter = %s\n", letter);
}

int main() {
//    demo1();
//    demo2();
//    demo3();
    demo4();
    return 0;
}