import java.util.Scanner;
public class greatenumber {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the 2 no:");
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a>b){
            System.out.println(a+"is grater number");
            System.out.println(b+"is small number");
        }
        else{
            System.out.println(b+"is grate number");
            System.out.println(a+"is small number");
        }
    }
}
