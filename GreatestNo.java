import java.util.*;

class GreatestNo
{
    public static void main(String args[])
    {
        Scanner ob1=new Scanner(System.in);
        int a,b,c;
        System.out.println("\nEnter 3 numbers (a,b,c) : ");
        a=ob1.nextInt();
        b=ob1.nextInt();
        c=ob1.nextInt();
        if(a>b)
        {
            if(a>c)
                System.out.println("Greatest No : a : "+a);
            else if(a==c)
                System.out.println("Greatest No : a&c are equal : "+a);
            else
                System.out.println("Greatest No : c : "+c);
        }
        else if(b>a)
        {
            if(b>c)
                System.out.println("Greatest No : b : "+b);
            else if(b==c)
                System.out.println("Greatest No : b&c are equal : "+b);
            else
                System.out.println("Greatest No : c : "+c);
        }
        else
        {
            if(b>c)
                System.out.println("Greatest No : a&b are equal : "+a);
            else if(b==c)
                System.out.println("Greatest No : a&b&c are equal : "+b);
            else
                System.out.println("Greatest No : c : "+c);
        }
    }
}
