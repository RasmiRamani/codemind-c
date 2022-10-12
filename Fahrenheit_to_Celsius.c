#include<stdio.h>
float cel(float f)
{
    float c;
    c = (f-32)*5/9;
    return c;
}
int main()
{
    float f;
    scanf("%f",&f);
    float c=cel(f);
    printf("%0.2f",c);
}
