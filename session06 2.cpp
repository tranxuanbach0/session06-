#include <stdio.h>

int main() {
    int evenCount = 0;
    int oddCount = 0; 
    int num;
    for (int i = 1; i <= 5; i++) {
    printf("Nhap vao so thu %d: ", i);
    scanf("%d", &num);
    if (num % 2 == 0) {
    evenCount++; 
    } else {
    oddCount++;   
    }
    }
    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}
