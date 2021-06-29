#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int *array, size_t n) {
    for (int i = 0; i <= n - 2; ++i) {
        int j = rand() % n;
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

void createCard() {
    int a[25];
    for (int i = 0; i < 25; ++i) {
        a[i] = i + 1;
    }
    shuffle(a, 25);
//    for (int i = 0; i < 5; ++i) {
//        printf("|");
//        for (int j = 0; j < 5; ++j) {
//            printf(" %2d |", a[i * 5 + j]);
//        }
//        printf("\n");
//    }
    int *p = &a[0];
    for (int i = 0; i < 5; ++i) {
        printf("|");
        for (int j = 0; j < 5; ++j) {
            if (i == 2 & j == 2) {
                printf("    |");
            } else {
                printf(" %2d |", *(p++));
            }
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL)); // seed number

    for (int i = 0; i < 3; ++i) {
        createCard();
        printf("\n\n");
    }
}