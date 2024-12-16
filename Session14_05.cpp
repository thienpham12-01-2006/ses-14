#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int n = 1;
	printf("nhap chuoi ky tu: ");
	fgets(str, 1000, stdin);
	int length = strlen(str);
	for(int i = 0; i < length - 1; i++){
        if(' ' == str[i]){
        	n++;
		}
	}
	printf("chuoi co %d tu", n);
    return 0;
}

