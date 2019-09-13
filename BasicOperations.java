import java.util.*;

class BasicOperations
{
        public static void main(String x[])
        {
            int a,b;
            Scanner obj1=new Scanner(System.in);
            System.out.println("Enter 2 numbers : ");
            a=obj1.nextInt();
            b=obj1.nextInt();
            System.out.println("Addition : "+(a+b));
            System.out.println("Subtraction : "+(a-b));
            System.out.println("Multiplication : "+(a*b));
            System.out.println("Division : "+(a/b));
        }
}
