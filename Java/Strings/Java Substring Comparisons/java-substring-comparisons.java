import java.util.Scanner;

public class Solution {

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        
        for(int i = 0; i < s.length() - k + 1; i++){
            String sub = s.substring(i,i + k);
            if(sub.compareTo(largest) > 0 || largest.isEmpty())
                largest = sub;
            if(sub.compareTo(smallest) < 0 || smallest.isEmpty())
                smallest = sub;
        }
        
        return smallest + "\n" + largest;
    }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}