#include <cmath>

int add(int a,int b)
{
    return a+b;
}
int substract(int a,int b)
{
    return sqrt(pow((a-b),2));
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    if(b==0)
    {
        return NULL;
    }
    return a/b;
}
