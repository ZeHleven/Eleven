#include <stdio.h>
int main()
{
	int x,a,b,c;
	for(x=100;x<1000;x++)
	{
		a=x/100;//取百位数
		b=x/10%10;//取十位数
		c=x%10;//取个位数 
		if((a*100+b*10+c)==(a*a*a+b*b*b+c*c*c))
		{
			printf("%d\n",a*100+b*10+c);
		}
	}
	return 0;
}
