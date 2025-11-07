/*write a c program to perform bitwise operators*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two integer numbers");
	scanf("%d%d",&a,&b);
	
	printf("\nBitwise operator of %d & %d =%d ",a,b,a&b);
	printf("\nBitwise operator of %d | %d =%d ",a,b,a|b);
	printf("\nBitwise operator of %d ^ %d =%d",a,b,a^b);
	printf("\nBitwise operator of %d << %d =%d",a,b,a<<b);
	printf("\nBitwise operator of %d >> %d =%d",a,b,a>>b);
return 0;
}
