import java.util.*;
class book{
	public String name,author;
	public int price,num_pages;
	
	book(){
		name=author=" ";
		price=num_pages=0;
	}
	
	book(String n,String a,int p,int pages){
		name=n;
		author=a;
		price=p;
		num_pages=pages;
	}

	public void set_details(String n,String a,int p,int pages){
		name=n;
		author=a;
		price=p;
		num_pages=pages;
	}
	
	
	public void ToString(){
		System.out.println("Name: "+name);
		System.out.println("Author: "+author);
		System.out.println("Price: "+price);
		System.out.println("Number of Pages: "+num_pages);
	}

}

class book_details{
	public static void main(String args[]){
		Scanner S=new Scanner(System.in);
		System.out.println("Enter Number of books to Enter");
		int n=S.nextInt();
		book b1[]=new book[n-1];
		int i=0;
		int in;
		do{
		System.out.println("Input");
		System.out.println("1.Enter Book Details");
		System.out.println("2.Update book Details");
		System.out.println("3.Print Book Details");
		System.out.println("4.Next book");
		System.out.println("5.Previous book");
		System.out.println("6.Exit");
		in=S.nextInt();
		switch(in){
			case 1:{
		
				System.out.println("Enter Name of book");
				String na=S.next();
				System.out.println("Enter Author");
				String au=S.next();
				System.out.println("Enter price");
				int pr=S.nextInt();
				System.out.println("Enter Number of pages");
				int np=S.nextInt();
				b1[i]=new book(na,au,pr,np);
				break;
			}
			case 2:{
				System.out.println("Enter new Name of book");
				String na=S.next();
				System.out.println("Enter new Author");
				String au=S.next();
				System.out.println("Enter new price");
				int pr=S.nextInt();
				System.out.println("Enter new Number of pages");
				int np=S.nextInt();
				b1[i].set_details(na,au,pr,np);
				break;
			}
				
			case 3:{
				b1[i].ToString();
				break;
			}
			case 4:{
				if(i==n){
					System.out.println("End of Array reached!");
					break;}
				else
				i++;
				break;}
			case 5:{
				i--;
				break;}
			case 6:System.exit(0);
			default:System.out.println("Invalid");
		}
		}while(in>-1);
 	}
}
