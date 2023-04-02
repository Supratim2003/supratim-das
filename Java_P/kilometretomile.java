import java.util.Scanner;
public class kilometretomile {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the distance in km:");
        double dis=sc.nextDouble();
        double mile=(dis*0.62137);
        System.out.println("the distence in miles is:"+mile);
    }

}
