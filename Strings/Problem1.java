import java.util.*;
import java.io.*;

class Problem1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String str = sc.nextLine();

        boolean flag = true;
        for(int i = 0; i<str.length()/2; i++)
        {
            if(str.charAt(i)!=str.charAt(str.length()-1-i)) {flag=false; break;}
        }

        if(flag==true) System.out.println("Pallindrome string");
        else System.out.println("Not a pallindrome string");
    }
}