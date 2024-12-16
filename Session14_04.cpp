#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    char c;
    int n;
	printf("nhap chuoi ky tu: ");
	fgets(str, 1000, stdin);
	int length = strlen(str);
	printf("nhap ki tu bat ki: ");
	scanf("%c", &c);
	for(int i = 0; i < length - 1; i++){
        if(c == str[i]){
        	n++;
		}
	}
	printf("ki tu '%c' xuat hien %d lan", c, n);
    return 0;
}

