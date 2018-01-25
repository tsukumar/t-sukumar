#include<stdio.h>
void main()
{
int m,n,i;
printf("\nEnter the value");
scanf("%d",&m);
printf("\nEnter the value");
scanf("%d",&n);
printf("\nThe even numbers between %d to %d",m,n);
for(i=m;i<=n;i++)
{
if((i%2)==0)
{
printf("\n%d",i);
}
}
}
