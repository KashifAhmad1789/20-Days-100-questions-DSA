public class string {
    public static void main(String[] args) {
        String s1 = "hello";
        System.out.println(s1);
        for (int i = 0; i < s1.length(); i++) {
            char ch = s1.charAt(i);
            System.out.println(ch);
        }
        System.out.println(10+20+30+"kashif"+40+50);

        String s2 = "hello";
        System.out.println(s2.substring(0,3));  // hel
        System.out.println(s2.substring(0));  // hello

    }
}