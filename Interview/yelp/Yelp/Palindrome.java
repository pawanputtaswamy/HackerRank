package Yelp;

public class Palindrome {

	
	static boolean palindrome(char[] s){
		if(s==null || s.length==1)
			return true;
		int l=0,h=s.length-1;
		while(l<=h){
			
			if(s[l++]!=s[h--])
				return false;
		}
		return true;
	}
	public static void main(String[] args) {
		
		
		char[] str={'m','a','d','a','m','n'};
		char[] str1={'a','b','b','a'};
		boolean res=palindrome(str);
		boolean res1=palindrome(str1);

		System.out.println("Is String Palindrome: ??  "+res);
		System.out.println("Is String Palindrome: ??  "+res1);
	}

}
