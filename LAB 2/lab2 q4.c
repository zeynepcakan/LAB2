#include <stdio.h>
#include <stdlib.h>

//recursive OBEB;

int obeb(int, int);
 
int main() {
    int sayi1, sayi2;
    printf("Please enter the two positive numbers: \n");
    scanf("%d %d",&sayi1,&sayi2);
    int sonuc = obeb(sayi1, sayi2);
    printf("obeb(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}

