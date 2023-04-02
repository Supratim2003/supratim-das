import java.util.Scanner;
public class leapyear {
    public static void main(String[] args)
    {
        Scanner Sc=new Scanner(System.in);
        System.out.println("ENTER THE NUMBER TO CHEAK LEAPYEAR OR NOT LEAPYEAR:");
        int year=Sc.nextInt();
        if((year%4==0)&&(year%100!=0)|| (year%400==0))
        {
            System.out.println("\t \tthis is leapyear");
        }
        else {
            System.out.println("\t \t this is not a leapyear");
        }
        System.out.println("\t \t\t thank you");

    }
}
