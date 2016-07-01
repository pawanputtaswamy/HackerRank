package Yelp;

public class Compare_Anagram_Array {

	
	static boolean anagram(String s1,String s2){
		
		if(s1.length()!=s2.length())
			return false;
		int[] arr=new int[26];
		for(int i=0;i<s1.length();i++){
			arr[s1.charAt(i)-'a']++;
			
			
		}
		for(int i=0;i<s1.length();i++){
		
			arr[s2.charAt(i)-'a']--;
			
		}
		for(int i=0;i<26;i++){
			if(arr[i]!=0)
				return false;
		}
		
		return true;
	}
	public static void main(String[] args) {

		
		String str1="act";
		String str2="cat";
		boolean res=anagram(str1,str2);
		System.out.println("Is anagram:??  "+res);
	}

}
