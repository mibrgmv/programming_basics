#include <stdio.h>
#include <math.h>

void MyFunc(double x, double y)
{
    double z1, z2;
    z1 = pow(cos(x), 4) + pow(sin(y), 2) + 0.25*pow(sin(2*x-1), 2);
    z2 = sin(y + x) * sin(y - x);
    printf("z1 = %lf \nz2 = %lf", z1, z2);
};

int main()
{
    double alpha, beta;
    scanf("%lf %lf", &alpha, &beta);
    MyFunc(alpha, beta);

    return 0;
}
