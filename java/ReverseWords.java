package Yelp;

public class ReverseWords {

	
	static String reverse(String str){
		
		StringBuilder sb=new StringBuilder(str.length()+1);
		String[] words=str.split(" ");
		for(int i=words.length-1;i>=0;i--)
			sb.append(words[i]).append(' ');
		sb.setLength(sb.length()-1);
		return sb.toString();
		
	}
	public static void main(String[] args) {
		
		String str="I like cats";
		String reverse_String=reverse(str);
		System.out.println(reverse_String);

	}

}
