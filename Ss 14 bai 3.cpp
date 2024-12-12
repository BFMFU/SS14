#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);
	int j=length-1;
	for (int i=0;i<length/2;i++){
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		j--;
	}
	printf("Chuoi sau khi dao nguoc la: ");
	for(int i=0;i<length;i++){
		printf("%c",str[i]);
	}
    return 0;
}

