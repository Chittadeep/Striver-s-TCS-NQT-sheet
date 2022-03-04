import java.util.*;
import java.io.*;

class Problem6{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String string = sc.nextLine();

        String result = "";

        for(int i = 0; i<string.length(); i++)
        {
            int a = (int) string.charAt(i);

            if(a>=65 && a<=90 || a>=97 && a<=122) result=result+string.charAt(i);
        }

        System.out.println(result);
    }
}
