#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
    for (int i=0;i<length;i++){
    	printf("%c",str[i]);
    	printf(" ");
	}
    return 0;
}

