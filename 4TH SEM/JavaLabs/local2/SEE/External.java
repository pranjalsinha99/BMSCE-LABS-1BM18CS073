package SEE;
import java.util.*;
import CIE.*;
public class External extends Student{
    public int marks_see[]=new int[5];
    public void get_see_marks(){
        Scanner in=new Scanner(System.in);
        System.out.println("Enter SEE marks for 5 subjects");
        for(int i=0;i<5;i++){
            System.out.println("Enter marks for subject"+(i+1));
            marks_see[i]=in.nextInt();
        }
    }
}


