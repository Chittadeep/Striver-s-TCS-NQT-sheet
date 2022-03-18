import java.util.*;
import java.io.*;

class Problem7{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String string = sc.nextLine();

        String revString ="";
        for(int i = string.length()-1; i>=0; i--)
        {
            revString = revString+string.charAt(i);
        }

        System.out.println(revString);
    }
}