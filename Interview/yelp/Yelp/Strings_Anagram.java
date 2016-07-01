package Yelp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;

public class Strings_Anagram {

	
	static boolean anagram(String[] s){
		
		String str1=s[0];
		char[] ch1=str1.toCharArray();
		Arrays.sort(ch1);
		
		String str2=s[1];
		char[] ch2=str2.toCharArray();
		Arrays.sort(ch2);

		if(!(Arrays.equals(ch1, ch2)))
			return false;
		int i=1;
		
		while(i<s.length)
		{
			 str1=s[i];
			 ch1=str1.toCharArray();
			Arrays.sort(ch1);
			
			 str2=s[i+1];
			 ch2=str2.toCharArray();
			Arrays.sort(ch2);
			
			if(!(Arrays.equals(ch1, ch2)))
				return false;
			i=i+2;
		}
		return true;
	}
	
	static boolean anagramHashMap(String[] s){
		
		HashMap<String,ArrayList<Integer>> map=new HashMap();
		
		
		
		return  true;
	}
	
	/*
	 * 
	static boolean anagram(String[] s){
		
		String str1=s[0];
		char[] ch1=str1.toCharArray();
		Arrays.sort(ch1);
		
		
		for(int i=1;i<s.length;i++)
		{
			String str2=s[i];
			char[] ch2=str2.toCharArray();
			Arrays.sort(ch2);
			if(!(Arrays.equals(ch1, ch2)))
				return false;
		}
		return true;
	}
	*/
	public static void main(String[] args) {

		
		String[] s={"cat","act","tac"};
		String[] Str={"nam","man","nan","nan"};
		
		boolean res=anagram(s);
		//boolean res1=anagram(Str);
		boolean res1=anagramHashMap(s);
		System.out.println("Is anagram??  "+res);
		System.out.println("Is anagram??  "+res1);
	}

}
