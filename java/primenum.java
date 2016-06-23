package eaitech;

public class primenum {

	public Boolean IsPrime(int num)
	{
		if (num == 1 || num == 2 || num == 3)
		{
			return true;
		}
		else if(num%2 == 0)
		{
			return false;
		}
		else
		{
			for (int i=3; i < num; i += 2)
			{
				if (num %i == 0)
				{
					return false;
				}
			}
		}
		return true;
	}
	
	public static void main(String[] args) {
		int number = 21;
		primenum pClass = new primenum();
		if ( pClass.IsPrime(number) )
		{
			System.out.println("It is prime");
		}
		else
		{
			System.out.println("It is not prime");
		}
	}
}
