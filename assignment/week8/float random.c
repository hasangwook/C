#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double f_rand(void)
{
    double a;
    a = rand()/(double)RAND_MAX;//랜덤의 최대값
    return a;
}
int main(void)
{
    int i;
    srand((unsigned int)time(NULL));
    for(i=1;i<=5;i++)
    {
    printf("%lf ", f_rand());
    }
    return 0;
}