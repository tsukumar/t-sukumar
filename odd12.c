#include <stdio.h>
int main(void) {
int n,t,i;
printf("enterthe number");
scanf("%d",&n);
printf("enter the number");
scanf("%d",&t);
for(i=n;i<t;i++)
{
if(i%2!=0)
printf("%d",i);
}
return 0;
}

