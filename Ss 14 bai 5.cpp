#include<stdio.h>
#include<string.h>
int main(){
	char word[]="Good morning to you. I am Duy Manh. Creater's of this program.";
	int length=strlen(word);
	int countWord=1;
	for (int i=0;i<length;i++){
		if(word[i]==' '){
			countWord+=1;
		}
	}
	printf("Co %d tu trong chuoi da cho.",countWord);
	return 0 ;
}
