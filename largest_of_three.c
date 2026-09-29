#include <stdio.h>
int X;
int Y;
int Z;
int main() {
printf("Enter Value of X: \n");
scanf("%d", &X);
printf("Enter Value of Y:\n");
scanf("%d", &Y);
printf("Enter Value of Z:\n");
scanf("%d", &Z);

if (X>=Y && X>=Z) {
    printf("X is the largest Number");
} else if (Y>=Z && Y>=X) { 
    printf("Y is the largest Number");
}
else { 
    printf("Z is the largest Number");
}

return 0;
}
