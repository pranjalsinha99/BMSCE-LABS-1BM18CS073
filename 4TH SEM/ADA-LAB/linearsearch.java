import java.util.*;
class linear
{
    public static void main(){
        Scanner S=new Scanner(System.in);
        System.out.println("Enter Size of array");
        int n=S.nextInt();
        int arr[]=new int[n];
        System.out.println("Enter elements of array");
        for(int i=0;i<n;i++){
            arr[i]=S.nextInt();
        }
        System.out.println("Enter element to search");
        int num=S.nextInt();
        int pos=0,found=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==num){
                pos=j;
                found=1;
                break;
            }
        }
        if(found==1)
            System.out.println("Element "+num+" found at position "+pos);
        else
            System.out.println("Element not found");
        }
    }
