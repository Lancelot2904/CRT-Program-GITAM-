#include<stdio.h>
int main()
{int n,r,sum=0;
 printf("Enter the value of N:");
 scanf("%d",&n);
 while(n!=0)
 {
 r=n%10;
 n/=10;
 sum=sum*10+r;
 }
printf("%d",sum);
return 0;
}
