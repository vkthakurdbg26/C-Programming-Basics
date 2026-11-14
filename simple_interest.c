#include <stdio.h>
double principal, time, rate;
int main() {
    printf("Enter Details :\n");
    printf("Principal:");
    scanf("%lf", &principal);
    printf("Time :");
    scanf("%lf",&time);
    printf("Rate : ");
    scanf("%lf", &rate);

    printf("Simple Interest Is: %.4lf", (principal*time*rate/100));
    return 0;

}
