#include<stdio.h>
#include<string.h>
#include<ctype.h>
char postfix[30],ch;
int s[30], top = -1, j = 0,num = 0,op1,op2;

void push(int x)
{
	s[++top] = x;
}
int pop()
{
	return(s[top--]);
}

void main()
{
	printf("\nenter the postfix expression\n");
	gets(postfix);
	
	while(postfix[j] != '\0' )
	{
		ch = postfix[j];
		if(isalpha(ch))
		{
			printf("Enter the numerical value\n");
			scanf("%d",&num);
			push(num);
		}	
		else
		{
			op2 = pop(); op1  = pop();
			switch(ch)
			{
				case '+': push(op1+op2);
						  break;
				case '*': push(op1*op2);
						  break;
				case '/': push(op1/op2);
						  break;
				case '-': push(op1-op2);
						  break;
			}		
		}
	j++;
	}
	printf("%d",s[top]);
}
