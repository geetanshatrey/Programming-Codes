import java.util.*;

class Grade {
    public static void main(String args[]) {
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter your marks :");
        int x = obj.nextInt();
        if(x > 50) {
            System.out.println("Passed !");
        }
        else {
            System.out.println("Failed :(");
        }
    }
}
