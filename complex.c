#include<stdio.h>

struct complex
{
	int r,i;
};
void inputValues(struct complex *p,int n)
{	int i;
	for(i=0; i<n;i++)
	{	printf("enter real part of %d ",i+1);
		scanf("%d",&(p+i)->r);
		printf("enter imaginary part of %d ",i+1);
		scanf("%d",&(p+i)->i);
	}
}
void printValues(struct complex *p,int n)
{	int i;	
	for(i=0; i<n;i++)
	{	printf("%d complpex no is: %d + %di\n",i+1,(p+i)->r,(p+i)->i);
		
	}
}
void addComplex(struct complex *p,int n)
{	int i;	
	printf("\nsum of all the complex nos is: %d +%di\n",p->r+(p+1)->r+(p+2)->r,p->i+(p+1)->i+(p+2)->i);
}


void main()
{	struct complex c[3];
	inputValues(c,3);
	printValues(c,3);
	addComplex(c,3);
}
	
