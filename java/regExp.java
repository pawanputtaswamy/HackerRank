    import java.io.*;
    import java.util.*;

public class regExp {
        public static void main(String[] args) 
        {
          Scanner scan = new Scanner(System.in);
          String s=scan.nextLine();
        //Complete the code
            String pattern = "[A-Za-z !,?.\\_'@]+";
            String pattern1 = "[ !,?.\\_'@]+";
            //f (s.matches(pattern))
            //{
            	String[] fstr = s.split(pattern1);
            	System.out.println(fstr.length);
            	for (String st : fstr)
            	{
            		System.out.println(st);
            	}
            //}
        }
    }