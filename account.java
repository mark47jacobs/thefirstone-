package accountManager;

import java.util.Scanner;

public class account {
	int Accno;String name;int phone_no;float balance_amt;
	
	
	void getinput(){
		Scanner sc = new Scanner(System.in);
		System.out.println("enter valid account no(5-digits)");
		Accno = sc.nextInt();
		System.out.println("enter name of the cutomer(only first name): ");
		name = sc.next();
		System.out.println("enter valid phone no(6-digits)");
		phone_no = sc.nextInt();
		System.out.println("enter current balance (this our trusted site)");
		balance_amt = sc.nextFloat();
		sc.close();
		
	}
	void deposit(float val){
		Scanner sc = new Scanner(System.in);
		balance_amt += val;
		System.out.println("Do you want the new balance to be displayed on the screen | 1 to display | 0 otherwise");
		int ch = sc.nextInt();
		if(ch == 1){
			System.out.println(balance_amt);
		}
		sc.close();
	}
	void withdraw(float amt){
		Scanner sc = new Scanner(System.in);
		balance_amt -= amt;
		System.out.println("Do you want the new balance to be displayed on the screen | 1 to display | 0 otherwise");
		int ch = sc.nextInt();
		if(ch == 1){
			System.out.println(balance_amt);
		}
		sc.close();
	}
	void displayDetails(){
		System.out.println(" account no: " + Accno);
		
		System.out.println("name of the cutomer(only first name): "+ name);
		
		System.out.println("phone no(6-digits): "+phone_no);
		
		System.out.println("current balance (this our trusted site)" + balance_amt);
	}
	
	
}
