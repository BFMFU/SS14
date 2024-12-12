#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}

