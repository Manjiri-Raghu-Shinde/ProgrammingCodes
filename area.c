#include <stdio.h>
int main()
{
    float radius = 0, Circumference = 0, area = 0;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    Circumference = radius * 3.14;
    area = radius * radius * 3.14;
    printf("The circumference of the circle is: %f\n", Circumference);
    printf("The area of the circle is: %f\n", area);
    return 0;
}