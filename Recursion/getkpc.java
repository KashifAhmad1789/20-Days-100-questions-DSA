import java.io.*;
import java.util.*;

public class getkpc {

    static String data[] = { ".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz" };

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        System.out.println(getKPC(scn.next()));

    }

    public static ArrayList<String> getKPC(String str) {
        if (str.length() == 0) {
            ArrayList<String> base = new ArrayList<>();
            base.add("");
            return base;
        }

        ArrayList<String> recAns = getKPC(str.substring(1));
        ArrayList<String> myAns = new ArrayList<>();

        int idx = str.charAt(0) - '0';
        String code = data[idx];

        for (int i = 0; i < code.length(); i++) {
            char newc = code.charAt(i);
            for (String ele : recAns)
                myAns.add(newc + ele);
        }

        return myAns;
    }

}