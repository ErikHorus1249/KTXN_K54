#include <stdio.h>
 
int main() {
    int cookie;
    char buf[16];
 
    printf("&buf : %p, &cookie : %p\n", buf, &cookie);
    gets(buf);
    printf("\n cookie = %10x \n", cookie);
    if (cookie == 0x01020305)
        printf("you win!\n");
    else 
        printf("We need 0x01020305\n");
}