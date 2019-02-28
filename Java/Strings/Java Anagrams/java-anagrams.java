import java.util.Scanner;

public class Solution {
    static boolean isAnagram(String a, String b) {

        a = a.toLowerCase();
        b = b.toLowerCase();

        int[] cache = new int[26];
        if (a.length() != b.length() || a.length() == 0 || b.length() == 0)
            return false;

        for (int i = 0; i < a.length(); i++) {
            int index = (int) a.charAt(i);
            index -= (int) 'a';
            cache[index]++;
        }

        for (int i = 0; i < b.length(); i++) {
            int index = (int) b.charAt(i);
            index -= (int) 'a';
            cache[index]--;
        }

        for (int i = 0; i < 26; i++) {
            if (cache[i] != 0)
                return false;
        }

        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
