import java.util.Scanner;
public class calculate {
    public static void main(String [] args){
        Scanner Sc=new Scanner(System.in);
        System.out.println("enter the 2 no:");
        int a=Sc.nextInt();
        int b=Sc.nextInt();
        System.out.println("addition:"+(a+b));
        System.out.println("subtraction:"+(a-b));
        System.out.println("multiplication:"+(a*b));
        System.out.println("divition:"+(a/b));
    }
}
