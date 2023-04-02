import java.util.Scanner;
public class SUM3 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the 3 number for sum:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c=sc.nextInt();
        int d=a+b+c;
        System.out.print("sum of 3 number is="+d);
    }
}
