import CIE.*;
import SEE.*;
import java.util.*;
class Driver{
    public static void main(){
        Scanner S =new Scanner(System.in);
        System.out.println("Enter Number of students to run for");
        int n=S.nextInt();
        Student s1[]=new Student[n];
        Internals s2[]=new Internals[n];
        External s3[]=new External[n];
        for(int j=0;j<n;j++){
            System.out.println("Enter info for Student "+(j+1));
            s1[j]=new Student();
            s1[j].get_student_data();
            s2[j]=new Internals();
            s2[j].get_internals();
            s3[j]=new External();
            s3[j].get_see_marks();
            for(int k
        }
    }
}
            