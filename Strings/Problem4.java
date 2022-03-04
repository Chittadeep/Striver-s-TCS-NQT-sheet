import java.util.*;
import java.io.*;

class Problem4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String string = sc.nextLine();

        //String changed ="";
        for(int i =0; i<string.length(); i++)
        {
            switch(string.toLowerCase().charAt(i)){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u': string=string.substring(0, i)+string.substring(i+1);
            }
        }
        System.out.println(string);
    }
}