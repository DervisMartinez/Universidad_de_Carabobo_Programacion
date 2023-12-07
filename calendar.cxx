
#include <stdio.h>

int main() {
    printf("L  M  M  J  V  S  D\n");
    for (int i = 1; i <= 31; i++) {
        printf("%2d ", i);
        if (i % 7 == 0) {
            printf("\n");
        }
    }
    return 0;
}
