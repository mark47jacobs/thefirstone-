/* printing nth term of a sequence where first three terms have been given and value of n has been given */
#include<stdio.h>

int calc(int a,int b, int c,int n)
{	int sum;
	sum=a+b+c;
	if(n==1)
		return(a);
	else if(n==2)
		return(b);	
	else if(n==3)
		return(c);
	else
		return(calc(b,c,sum,n-1));
}

void main()
{	int a,b,c,n;
	printf("enter value of a,b,c,n: \n");
	scanf("%d%d%d%d",&a,&b,&c,&n);
	printf("%d",calc(a,b,c,n));
}

