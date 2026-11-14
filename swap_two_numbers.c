#include <stdio.h>
int a;
int b;
int temp;
int main() {
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    temp =a;
    a=b;
    b= temp;
printf("a:%d\n", a);
printf("b:%d\n",b);
return 0;
}
