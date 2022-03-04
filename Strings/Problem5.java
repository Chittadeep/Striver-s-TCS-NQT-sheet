import java.util.*;
import java.io.*;

class Problem5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String string = sc.nextLine();

        for(int i = 0; i<string.length(); i++)
        {
            if(string.charAt(i)==' ') string=string.substring(0, i)+string.substring(i+1);
        }

        System.out.println(string);
    }
}