#include <stdio.h>

int main()
{
    float r, area;

    printf("Enter radius: ");
    scanf("%f", &r);

    area = 3.14 * r * r;

    printf("Area of circle = %f", area);

    return 0;
}
