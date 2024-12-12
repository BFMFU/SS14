#include <stdio.h>
#include <string.h>

int main() {
    char str[]="Whats up. How have you been ? We have not met since hight school."; 
	char foundWord;
	int count=0;
	printf("Nhap ki tu ban muon kiem tra: ");
	scanf("%c",&foundWord);
    int length = strlen(str);
    for (int i=0;i<length;i++){
    	if(str[i]==foundWord){
    		count+=1;
		}
	}
	printf("So lan xuat hien cua ki tu %c la: %d",foundWord,count);
    return 0;
}

