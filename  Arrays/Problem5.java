import java.io.*;
import java.util.*;

class Problem5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int ar[] = new int[n];
        for(int i =0; i<n; i++)
        {
            ar[i]=sc.nextInt();
        }

        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        
        for(int i = 0; i<n; i++)
        {
            if(map.containsKey(ar[i])){
                int temp = map.get(ar[i]);
                ++temp;
                map.put(ar[i], temp);
            }
            else map.put(ar[i], 1);
        }

        for(Map.Entry<Integer, Integer> entry: map.entrySet())
        {
            System.out.println(entry.getKey() + " "+ entry.getValue());
        }
    }
}