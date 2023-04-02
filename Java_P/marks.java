import java.util.Scanner;
public class marks {
    public static void main(String [] args){
        int sum=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of subjects you want to calculate CGPA:");
        int n=sc.nextInt();
        for(int i=1;i<=n;i++) {
            System.out.println("Subject marks");
            int m = sc.nextInt();
            sum+=m;
            int cgpa=sum/n;

            System.out.println("CGPA IS :" + cgpa);
        }
    }
}
