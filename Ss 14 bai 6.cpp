#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int count = 0;
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
    return 0;
}
