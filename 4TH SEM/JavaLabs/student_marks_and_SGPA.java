import java.util.*;
class stud{
	String USN,name;
	float sgpa;
	int arr[]=new int[10];
	int marks[]=new int[10];
	void get_info(){
		Scanner S=new Scanner(System.in);
		System.out.println("Enter Name");
		name=S.nextLine();
		System.out.println("Enter USN");
		USN=S.nextLine();
		for(int i=0;i<5;i++){
			System.out.println("Enter Credts of Subject "+(i+1));
			arr[i]=S.nextInt();
			System.out.println("Enter marks of Subject "+(i+1));
			marks[i]=S.nextInt();
		}
	}
	void calculate_SGPA(){
		float sum=0,SumOfCreds=0;
		int grade;
		for(int i=0;i<5;i++){
			if(marks[i]>=90)
				grade=10;
			else if(marks[i]>=75)
				grade=9;
			else if(marks[i]>=60)
				grade=8;
			else if(marks[i]>=50)
				grade=7;
			else if(marks[i]>=45)
				grade=6;
			else if(marks[i]>=40)
				grade=5;
			else 
				grade=0;
			sum+=(arr[i]*grade);
			SumOfCreds+=arr[i];
		}
		sgpa=sum/SumOfCreds;
	}
	void display_info(){
		System.out.println("Name: "+name);
		System.out.println("USN: "+USN);
		for(int i=0;i<5;i++){
			System.out.println("Marks of Subject "+(i+1)+": "+marks[i]);
			System.out.println("Credits: "+arr[i]);
		}
		System.out.println("Your SGPA is: "+sgpa);
	}
	public static void main(String []args){
		Scanner m=new Scanner(System.in);
		System.out.println("Enter Number of Students to run the program for");
		int n= m.nextInt();
		stud a1[]=new stud[n];
		for(int i=0;i<n;i++){
			
			a1[i].get_info();
			a1[i].calculate_SGPA();
			a1[i].display_info();
		}
	}
}


