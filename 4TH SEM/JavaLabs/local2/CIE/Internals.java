package CIE;
import java.util.*;
public class Internals{
    public int marks[]=new int[5];
    public void get_internals(){
        System.out.println("Enter marks for five subjects");
        Scanner S=new Scanner(System.in);
        for(int i =0;i<5;i++){
            System.out.println("Enter marks for subject"+(i+1));
            marks[i]=S.nextInt();
        }
    }
}