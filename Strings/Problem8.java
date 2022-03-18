import java.util.*;
import java.io.*;

class Problem8
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter an Algebric Expression");
        String string = sc.nextLine();

        String changed="";
        
        for(int i = 0; i<string.length(); i++)
        {
            //System.out.println(string.charAt(i));
            if(string.charAt(i)!='(' && string.charAt(i)!=')')
            {
                changed = changed + string.charAt(i);
            } else continue;
        }
        System.out.println(changed);
    }
}