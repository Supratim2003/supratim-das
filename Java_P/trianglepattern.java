import java.util.Scanner;
public class trianglepattern {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the row number:");
        int row=sc.nextInt();
        for(int i=1;i<=row;i++)
        {
            for(int j=row-1;j>=1;j--)
            {
                System.out.println("");
            }
            for(int j=1;j<=i;j++){
                System.out.println("*");
            }
            System.out.println("");

        }


    }

}
