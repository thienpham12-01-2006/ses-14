#include<stdio.h>
#include<string.h>
int main(){
	char str[1000];
	printf("nhap chuoi ky tu: ");
	fgets(str, 1000, stdin);
	printf("%s", str);
	return 0;
}
