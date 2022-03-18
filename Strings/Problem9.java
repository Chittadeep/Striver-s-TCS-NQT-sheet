import java.util.*;
import java.io.*;

class Problem9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a String");

        String string = sc.nextLine();

        int sum =0;

        for (int i = 0; i < string.length(); i++) {
            if((int)string.charAt(i)>=48 && (int)string.charAt(i)<=57)  sum+=Integer.parseInt(string.substring(i, i+1));
        }

        System.out.println(sum);
    }
}
