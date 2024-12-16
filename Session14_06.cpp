#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    int n;
	printf("nhap chuoi ky tu: ");
	fgets(str, 1000, stdin);
	int length = strlen(str);
	for(int i = 0; i < length - 1; i++){
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'){
        	n++;
		}
	}
	printf("chuoi co %d ky tu la chu cai", n);
    return 0;
}

