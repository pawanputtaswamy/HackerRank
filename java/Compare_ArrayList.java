package Yelp;
import java.util.ArrayList;

public class Compare_ArrayList {

	
	
	     public static void main(String [] args)
	     {
	          ArrayList<String> al1= new ArrayList<String>();
	          al1.add("hi");
	          al1.add("How are you");
	          al1.add("Good Morning");
	          al1.add("bye");
	          al1.add("Good night");

	          ArrayList<String> al2= new ArrayList<String>();
	          al2.add("Howdy");
	          al2.add("Good Evening");
	          al2.add("bye");
	          

	          ArrayList<String> al= new ArrayList<String>();
	          
	          al.add("bye");
	          al.add("Good night");

	          
	          //Storing the comparison output in ArrayList<String>
	          ArrayList<String> res1= new ArrayList<String>();
	          ArrayList<String> res2= new ArrayList<String>();
	          
	            if(al1.containsAll(al)) 
	            {
	            	res1.addAll(al1);
	            }
	            
	            System.out.println(res1);
	            
	            if(al2.containsAll(al)) 
	            {
	            	res2.addAll(al2);
	            }
	            
	            System.out.println(res2);


	     }
	
}
