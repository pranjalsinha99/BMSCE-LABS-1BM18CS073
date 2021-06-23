import java.util.*;
class bank
{
    Scanner S=new Scanner(System.in);
    float bal;
    int min_bal=10000;
	public void main(String[] args) {
	    
		System.out.println("Welcome.Choose your Choice");
		System.out.println("1.Savings Account");
		System.out.println("2.Current Account");
		int choice=S.nextInt();
		Main a=new Main();
		if(choice==1)
		    savings_account();
		else if(choice==2)
		    current_account();
		else
		    System.out.println("Invalid Input");
	}
	
    
    public void current_account(){
        System.out.println("Enter your balance");
        bal=S.nextFloat();
        if(bal<min_bal){
            double charge=(0.05*bal);
            System.out.println("Balance below Minimum.Service charge of "+charge+" will be imposed");}
        else
            System.out.println("Balance above Minimum. No service charge will be charged");
        System.out.println("Would you like a check book? (y/n)");
        char ch=S.next().charAt(0);
        if(ch=='y'){
            System.out.println("A cheque book will be dispactched in few days");
        }
        else
            System.out.println("Okay.Thank You");
            System.exit(0);
        
    }
    public void savings_account(){
        System.out.println("Enter your balance");
        bal=S.nextFloat();
        System.out.println("Would you like to find out compound interest for you balance amount? (y/n)");
        char com=S.next().charAt(0);
            if(com=='y')
                compound_interest();
            System.out.println("Would you like to withdraw money? (y/n)");
            char withd=S.next().charAt(0);
            if(withd=='y'){
                System.out.println("Enter amount to withdraw");
                int am=S.nextInt();
                if(am<=bal)
                    System.out.println("Money Withdrawn. New balance is: "+(bal-am));
                else
                    System.out.println("Insufficient Balance.Exiting Program");
            }
            else
                System.exit(0);
    }
    
     public void compound_interest(){
         double r=0.05;
         float p=bal;
         System.out.println("Enter Time period");
         int t=S.nextInt();
         double amount = p*(Math.pow((1+(r/12)),(12*t)));
         double inter=amount-p;
         System.out.println("Compound Interest: "+inter);
         System.out.println("Final Amount: "+amount);
     }
    
    
}
