package Yelp;

import java.util.ArrayList;

class compareStringArrList{
	
	public static void main(String[] args){
		
		ArrayList<String> array1=new ArrayList();
		array1.add("Restaurant");
		array1.add("Chinese");
		
		ArrayList<String> array2=new ArrayList();
		array2.add("This is a Chinese hotel in New York");
		array2.add("This is a Chinese restaurant in New York");
		array2.add("This is a Chinese restaurant in Texas");
		int count;
		for(int j=0;j<array2.size();j++){
		
			count=array1.size();
			for(int i=0;i<array1.size();i++){	
				if( array2.get(j).toLowerCase().contains(array1.get(i).toLowerCase()))
						count--;
				
			}
			if(count>0)
				continue;
			else
				System.out.println(array2.get(j));
		}
	}
	
	
}