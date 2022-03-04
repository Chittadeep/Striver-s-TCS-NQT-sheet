import java.util.*;
import java.io.*;

class Problem2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String str = sc.nextLine();

        String temp = str.toLowerCase();

        int vowels =0, consonants =0, spaces = 0;

        for(int i = 0; i<temp.length(); i++)
        {
            char c = temp.charAt(i);

            if(c=='a' || c =='e' || c=='i' || c=='o' || c=='u')  ++vowels;
            else if(c==' ') ++spaces;
            else ++consonants;
        }

        System.out.println("vowels: "+vowels);
        System.out.println("consonants: "+consonants);
        System.out.println("spaces: "+spaces);

    }
}