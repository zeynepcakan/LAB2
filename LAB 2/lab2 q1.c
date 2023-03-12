#include <stdio.h>
#include <stdlib.h>

//Girilen sayıya kadar toplamı ekrana yazdıran program;
 
int add(int);
 
int main() {
    int number;
    printf("Please enter a number: ");
    scanf("%d",&number);
    int sum = add(number);
    printf("Summary = %d\n", sum);
    return 0;
}
 
int add(int x) {
    if (x == 0)
        return 0;
    return x + add(x - 1);
}
