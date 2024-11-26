#include <stdio.h>

int main() {
    int password = 12345;
    int userInput;

    printf("Nhap mat khau: ");
    scanf("%d", &userInput);

    if (userInput == password) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
