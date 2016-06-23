import java.util.Arrays;
import java.util.Comparator;


public class sortIntArray {
	public static void main(String []args){
		Integer[] arr = { 12, 67, 1, 34, 9, 78, 6, 31 };
		
		//Arrays.sort(arr);
		//System.out.println(Arrays.toString(arr));
		
	    Arrays.sort(arr, new Comparator<Integer>()
	    	    {
	    	        @Override
	    	        public int compare(Integer x, Integer y)
	    	        {
	    	            return x - y;
	    	        }
	    	    });
	    System.out.println("low to high:" + Arrays.toString(arr));
	}
}
