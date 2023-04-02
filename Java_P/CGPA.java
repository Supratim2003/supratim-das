import java.util.Scanner;
public class CGPA {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the marks subject 1:");
        int sub1=sc.nextInt();
        System.out.println("enter the marks subject 2:");
        int sub2=sc.nextInt();
        System.out.println("enter the marks subject 3:");
        int sub3=sc.nextInt();
        float CGPA=(sub1+sub2+sub3)/30f;
        System.out.println("CGPA is:"+CGPA);
        System.out.println("**********THANK YOU************");

    }
}
