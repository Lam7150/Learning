package LeetCode;

public class LengthOfLongestString {
    public int getLengthOfLongestString(String s) {
        String longest = "";
        String temp = "";

        for (int i = 0; i < s.length(); i++) {
            if (temp.indexOf(s.charAt(i)) == -1) {
                temp += s.charAt(i);

                if (temp.length() > longest.length())
                    longest = temp;
            } else {
                temp = temp.substring(temp.indexOf(s.charAt(i)) + 1) + s.charAt(i);
            }
        }

        return longest.length();
    }
}
