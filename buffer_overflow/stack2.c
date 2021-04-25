#include<stdio.h>

int main(){
	int cookie;
	char buf[16];
	printf("&buf : %p, &cookie : %p\n", buf, &cookie);
	gets(buf);
	printf("\n cookie = %10x \n", cookie);
	if (cookie == 0x01020305){
		printf("you win!");
	}
	else printf("\n we need cookie = 0x01020305\n");
}
