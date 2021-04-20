#include <stdio.h>
// Iterative function to calculate gcd of two numbers
int euclidi(int a, int b)
{
int t, s;
while (b > 0)
{
t = a / b;
s = a - t * b;
a = b;
b = s;
}
return a;
}
// Recursive function to calculate gcd of two numbers
int euclidr(int a, int b)
{
if (b == 0)
return a;
int q = a / b;
int r = a - q * b;
return euclidr(b, r);
}
int main()
{
int a,b,c;
printf("Enter two non-zero numbers\n");
scanf("%d %d",&a,&b);
printf("1.Iterative gcd\n2.Recursive gcd\n");
printf("Enter your choice\n");
scanf("%d",&c);
switch(c)
{
    case 1:printf("Gcd of two numbers by iterative function is %d\n",euclidi(a,b));
            break;
    case 2:printf("Gcd of two numbers by recursive function is %d\n",euclidr(a,b));
            break;
    default:exit(0);
}
return 0;
}