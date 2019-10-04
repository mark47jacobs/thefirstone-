
package matrixMultiplication;
import java.util.Scanner;

public class Matrices {
	Scanner sc = new Scanner(System.in);
	private int [][] mat1; 
	private int [][] mat2;// TODO Auto-generated method stub
	private int [][] matRes;
	
	int m1;int n1;int m2;int n2;

	public Matrices(int m1,int n1,int m2,int n2) {
		this.m1 = m1;
		this.m2 = m2;
		this.n1 = n1;
		this.n2 = n2;
		
	}
	
	void inputMat()
	{	
		mat1 = new int [m1][n1];
		mat2 = new int [m2][n2];
		matRes = new int [m1][n2];
		
	
		System.out.println("Enter the elements of the first matrix");
		for(int i = 0;i < m1 ; i++)
		{	for(int j = 0;j < n1 ; j++)
			{
				mat1[i][j] = sc.nextInt();
			}
			
		}
		System.out.println("Enter the elements of the second matrix");
		for(int i = 0;i < m2 ; i++)
		{	for(int j = 0;j < n2 ; j++)
			{
				mat2[i][j] = sc.nextInt();
			}
			
		}
		
	}
	void Multiply()
	{	
		for(int i = 0;i < m1 ; i++)
		{	for(int j = 0;j < n2 ; j++)
			{
				for(int k = 0;k < n1 ; k++)
				{
					matRes[i][j] += mat1[i][k]*mat2[k][j];
				}
			}
		}
	}
	void Display()
	{	System.out.println("The elements of the result matrix");
		for(int i = 0;i < m1 ; i++)
		{	for(int j = 0;j < n2 ; j++)
			{
				System.out.print("  "+matRes[i][j]+"  ");
			}
			System.out.println(" ");
		}
	}
	

}
