import java.util.Scanner;
class fibonacciWhile
{	
	public static void main(String args[])
	{ 	Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		int former = 0, next = 0;
		System.out.println(former);
		int latter= 1;
		System.out.println(latter);
		int i=0;
		while(i<n)
		{	
			next = former + latter;
			System.out.println(next);
			former=latter;
			latter = next;
			i++;	
		}
	}
}

