#include<stdio.h>
int gcd(int m,int n)
{
   if(n==0)
   {
       return m;
   }
   else
   {
       gcd(n,m%n);
   }
}
int main()
{
    int m,n;
    printf("Number 1: ");
    scanf("%d",&m);
    printf("Number 2: ");
    scanf("%d",&n);
    int val=gcd(m,n);
    printf("Greatest Common Divisor: %d",val);
}
