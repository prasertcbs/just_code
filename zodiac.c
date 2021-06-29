#include <stdio.h>

//char *zodiac1(int y) {
//    int r = y % 12;
//    if (r == 0) {
//        return "snake";
//    } else if (r == 1) {
//        return "horse";
//    }
//}
//
//char *zodiac2(int y) {
//    int r = y % 12;
//    switch (r) {
//        case 0:
//            return "snake";
//        case 1:
//            return "horse";
//
//    }
//}

char *zodiac3(int y) {
    char *z[] = {"Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Rabbit", "Dragon"};
    return z[y % 12];
}

int main() {

    // 0 - 11
//    printf("%d\n", 2556 % 12);  // snake
//    printf("%d\n", 2557 % 12);  // horse
//    printf("%d\n", 2558 % 12);  // goat
//    printf("%d\n", 2559 % 12);  // monkey
//    printf("%d\n", 2560 % 12);  // rooster
//    printf("%d\n", 2561 % 12);
//    printf("%d\n", 2562 % 12);

    int y;
    printf("enter Buddhist year: ");
    scanf("%d", &y);
    printf("Zodiac = %s\n", zodiac3(y));

    return 0;
}