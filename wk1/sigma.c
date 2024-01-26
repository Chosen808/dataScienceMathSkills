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

int sigmaFour (int index, int sum, int mul)
{
    int sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += mul * pow (i, 3);
    }

    return sig;
}

int sigFive (int index, int sum, int mul)
{
    int sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += pow (i, 2) + mul * i;
    }

    return sig;
}

double mean (int arr[], int size)
{
    double mean = 0;

    for (int i = 0; i < size; i++)
    {
        mean += arr[i];
    }

    return mean = (double)mean / size;
}

double variance (int arr[], int size, double mean, int index)
{
    int sig = 0;

    for (int i = index; i < size; i++)
    {
        sig += pow (arr[i] - mean, 2);
    }

    return (double)sig / size;
}

int sigSix (int index, int sum, int power)
{
    int sig = 0;

    for (int i = index; i < sum + 1; i++)
    {
        sig += pow (i, power);
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
    int i3 = 4;
    int sum4 = 25;

    int z[3] = {1, 5, 12};
    int sum5 = 3;
    int w[3] = {5, 6, 7};
    int sum6 = 3;

    printf ("Sum = %d \n", sigma (i, sum));
    printf ("Sum = %d \n", sigmaTwo (i, sum2, 2, 3));
    printf ("Sum = %f \n", sigmaThree(i2, sum3, 2));
    printf ("Sum = %d \n", sigmaFour (i3, sum4, 18));
    printf ("Sum = %d \n", sigFive (i, sum, 2));

    printf ("Mean = %f \n", mean (z, sum5));
    printf ("Variance z = %f \n", variance (z, sum5, mean (z,sum5), 0));
    printf ("Variance w = %f \n", variance (w, sum6, mean (w, sum6), 0));

    printf ("Sum = %d \n", sigSix (1, 100, 4));

    return 0;
}