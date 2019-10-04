#include<stdio.h>
#include<string.h>
#include<ctype.h>
char infix[30],postfix[30],s[30],temp,ch;
int j = 0, top = -1;
void push(char x)
{
	s[++top] = x;
}
char pop()
{
	return(s[top--]);
}
int precedence(char c)
{
	switch(c)
	{
		case '^': return(4);
			 break;	
		case '*':
		case '/': return(3);
			  break;	
		case '+': 	
		case '-': return(2);
			  break;	
	}
}

int isoperator(char ch)
{
	if(ch == '+'||ch == '-'||ch == '*'||ch == '/'||ch == '^')
		return 1 ;
	else
		return 0 ;
}
int main()
{
	int i = 0;
	printf("\n Enter a valid infix expression \n");
	gets(infix);
	
	while(infix[i] != '\0')
	{	ch = infix[i];
		if(isalpha(ch))
		{	postfix[j++] = ch;	}
		else if(isoperator(ch))
		{	if (ch != '^')
			{
				while(top != -1 && precedence(s[top]) >= precedence(ch))
				{	
					postfix[j++] = pop();
				}
			}
			push(ch);
		}
		else if(ch == '(')
		{	push(ch);	}
		else if(ch ==')')
		{
			while(s[top] != '(')
			{
				postfix[j++] = pop();
			
			}
			temp = pop();
		}
		else
		{	printf("\n invalid character\n");	}
		i++;
	} 
	while(top>-1)
	{
		postfix[j++] = pop();
	}
	postfix[j++] = '\0';
	printf("\n The postfix expression is :\n");
	puts(postfix);
}

