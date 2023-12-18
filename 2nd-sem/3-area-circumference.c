// WAP to calculate the area and circumference of a circle.
#include <stdio.h>
#include<math.h>
#define PI 22/7

int main() {
    float radius,area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    return 0;
}