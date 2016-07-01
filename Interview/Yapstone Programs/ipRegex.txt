//Write your code here
public class MyRegex extends Solution{
    public static String pattern;
    Matcher m;
    public MyRegex(String iP){ 
        String pat = "(\\d{1,2}|(0|1)\\d{2}|2[0-5]{2})";
        pattern = "^" + pat + "\\." + pat + "\\." + pat + "\\."  + pat + "$";
        Pattern r = Pattern.compile(pattern);
        m = r.matcher(iP);
       }
    public boolean isMatches(){
        if (m.find( )) {
            return true;
        }
        else{
            return false;
        }
    }
}