#include <stdio.h>

int main() {
    int num[12], i, rem, j;

    for (i = 0; i < 12; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Enter number you want to remove: ");
    scanf("%d", &rem);

    j = 0;  
    for (i = 0; i < 12; i++) {
        if (num[i] != rem) {
            num[j] = num[i]; 
            j++;
        }
    }

    printf("Array after removing %d:\n", rem);
    for (i = 0; i < j; i++) {
        printf("%d\t", num[i]);
    }

    return 0;
}
