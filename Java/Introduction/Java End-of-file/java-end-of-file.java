import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int counter=0;
        String s;
        while(true){
            s = scan.nextLine();
            if(s=="")
                break;
            else
                System.out.println(++counter + " " + s);
        }
    }
}