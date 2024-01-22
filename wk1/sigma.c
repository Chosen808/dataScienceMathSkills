#include <stdio.h>
#include <math.h>


int sigma (int index, int sum)
{
    int sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += pow (i, 2);
    }

    return sig;
}

int sigmaTwo (int index, int sum, int mul, int r)
{
    int sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += mul * i + 3;
    }

    return sig;
}

double sigmaThree (int index, int sum, int div)
{
    double sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += (double)i / div;
    }

    return sig;
}


main ()
{
    int i = 1;
    int sum = 4;
    int sum2 = 5;
    int i2 = 3;
    int sum3 = 7;

    printf ("Sum = %d \n", sigma (i, sum));
    printf ("Sum = %d \n", sigmaTwo (i, sum2, 2, 3));
    printf ("Sum = %f \n", sigmaThree(i2, sum3, 2));

    return 0;
}