  
package CIE;

import java.util.*;

public class Student {
    public String name, usn;
    public int sem;
    
     public void get_student_data() {
        System.out.println("Enter Name, USN, Sem");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Name:");
        name = sc.next();
        System.out.println("Enter USN:");
        usn = sc.next();
        System.out.println("Enter Sem:");
        sem = sc.nextInt();
    }
}

    
    
