import java.util.LinkedList;


class vehicle
{
	public void getOp()
	{
		System.out.println("vehicle::getOp()");
	}
}

class car extends vehicle
{
	public void getOp()
	{
		System.out.println("car::getOp()");
	}
	
	public void haswheels()
	{
		System.out.println("car::wheels()");
	}
}

public class mathwork {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Question 1
		//LinkedList <Integer> Llist = new LinkedList<Integer>(); // what does it do
		
		// Question 2
		vehicle ch = new car();
		
		ch.getOp();
		((vehicle)ch).getOp();
		((car)ch).haswheels();
		//ch.haswheels();
		
		
		 String s = "Hello";
		 s.concat("Java!");
		 System.out.println(s);
		 
		 StringBuffer sb = new StringBuffer();
		 sb.append(" Hello Java!");
		 System.out.println(sb);
	}
}
