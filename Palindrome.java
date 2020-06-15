import java.util.*;

class Palindrome {
    public static void main(String args[]) {
        int x = 52251;
        int c = x;
        int n = 0;
        while(c > 0) {
           n = n * 10 + c % 10;
           c = c / 10;

        }
        if(x == n) {
            System.out.println("Palindrome !");
        }   
    }
}
