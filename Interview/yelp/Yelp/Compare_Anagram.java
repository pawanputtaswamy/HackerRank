package Yelp;

import java.util.Arrays;
import java.util.HashMap;

public class Compare_Anagram {

	
	static boolean anagram(String s1,String s2){
		s1.toLowerCase();
		char []S1=s1.toLowerCase().toCharArray();
		Arrays.sort(S1);
		char[] S2=s2.toLowerCase().toCharArray();
		Arrays.sort(S2);
		
		return Arrays.equals(S1, S2);
	}
	
	static boolean anagrams(String s1,String s2){
		//Using Iterative Method
		
		char[] S1=s1.toCharArray();
		
		for(char c:S1){
			
			int index=s2.indexOf(c);
			if(index!=-1){
				//Other method by deleting chars from StringBulider of s2
				s2=s2.substring(0,index)+s2.substring(index+1,s2.length());
			}
			else
				return false;
		}
		
		return true;
	}
	
	
	static boolean anagramsHashMap(String s1,String s2){
		if(s1.length()!=s2.length())
			return false;
		
		HashMap<Character,Integer>map=new HashMap();
		
		for(int i=0;i<s1.length();i++){
			
			//for first string increment char count
			char key=s1.charAt(i);
			int count=0;
			if(map.containsKey(key))
				count=map.get(key);
			map.put(key, ++count);
			
			//For second string decrement char count
			key=s2.charAt(i);
			count=0;
			if(map.containsKey(key))
				count=map.get(key);
			map.put(key, --count);
			
		}
		
		for(int values:map.values())
		{
			if(values!=0)
				return false;
		}
		return true;
		
	}
	public static void main(String[] args) {
	
		
		String s1="abcd";
		
		String s2="bacd";
		boolean res=anagramsHashMap(s1,s2);
		System.out.println("Is Anagram:??"+res);

	}

}
