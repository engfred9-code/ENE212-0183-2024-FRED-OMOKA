#include <stdio.h>
int main()
{
    int radius;
    const double PI= 4*3.142;

    printf("enter radius:");
    scanf("%d",&radius);

    double area=4*3.142*radius*radius;

    printf("area of the sphere is:%.3lf\n",area);

    return 0;
}
