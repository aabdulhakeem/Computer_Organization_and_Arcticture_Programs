#include <stdio.h>

int main() {
    int a[10] = {10, 31, 5, 7, 11, 3, 8, 40, 12, 4};
    int a2[10] = {11, 2, 3, 7, 5, 10, 9, 22, 6, 1};
    int min=a[0];
    for (int i = 0; i < 10; ++i) {
        if(a[i]<min)min = a[i];
    }
    printf("Min element is: %d\n",min);
}
