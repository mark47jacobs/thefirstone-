package accountManager;

import java.util.Scanner;

public class accountMenu {

	public static void main(String[] args) {
		int ch;
		Scanner sc = new Scanner(System.in);
		account ac = new account();
		System.out.println("congratulations!!!!!!! You now have an accout with us");
		ac.getinput();
		
		while(true){
			System.out.println("enter a choice: 1 to deposit money| 2 to withdraw amt | 3 display account details");
			
			ch = 1;//sc.nextInt();
			
			switch(ch){
			case 1: System.out.println("enter the amount to deposit");
					float temp = sc.nextFloat();
					ac.deposit(temp);
					break;
			 
			case 2:	System.out.println("enter the amount to deposit");
					temp = sc.nextFloat();
					ac.withdraw(temp);
					break;
			
			case 3: ac.displayDetails();
					break;
			
			}
			

		}
		
	}

}
