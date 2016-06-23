import java.io.IOException;
import java.util.*;

public class PalindromeSubString {
/*
* Complete the function below.
*/

static Set<String> palindrome(String str) {
    String[] strArray = str.split("");
    List<String> list = Arrays.asList(strArray);
    list = list.subList(1, list.size());
    //Set does'nt allow duplicates.
    //Sublist is required because split method gives an extra space.
    Set<String> palindromeSet = new HashSet<String>(list);
    String palindromeStr = null;
    for(int i = 0;i<list.size();i++){
        palindromeStr = list.get(i);
        for(int j = i+1;j<list.size();j++){
            palindromeStr = palindromeStr+list.get(j);
            if(isPalindrome(palindromeStr)){
                palindromeSet.add(palindromeStr);
            }
        }
    }
    return palindromeSet;
}

static boolean isPalindrome(String str){
    char[] chars = str.toCharArray();
    for(int i =0;i<(chars.length/2);i++){
        if(chars[i] != chars[chars.length-1-i]){
            return false;
        }
    }
    return true;
}																							

public static void main(String[] args) throws IOException{
	Set<String> palindromeSubStrings = palindrome("arewenotdrawnonwardtonewera");
	System.out.println(palindromeSubStrings);
}
}