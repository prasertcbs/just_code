#include <stdio.h>
#include <stdbool.h>

// boolean (name after George Boole)
bool leapYear(int year) {
//    int r;
//    r = year % 4;
//    if (r == 0) {
//        return true;
//    } else {
//        return false;
//    }
    return year % 4 == 0 ? true : false;
}

bool isOdd(int n) {
//    return n % 2 == 1 ? 1: 0;
    return n % 2 == 1 ? true : false;
}

bool isEven(int n) {
//    return n % 2 == 0 ? true : false;
    return !isOdd(n);
}

int main() {
    int isLeapYear = leapYear(2017);
    printf("%d\n", isLeapYear);
}