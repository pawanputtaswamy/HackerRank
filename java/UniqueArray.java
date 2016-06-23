import java.util.Arrays;

public class UniqueArray {
    public static int[] removeDuplicates(int[] A) {
    	if (A.length < 2)
    		return A;
     
    	int j = 0;
    	int i = 1;
     
    	while (i < A.length) {
    		if (A[i] == A[j]) {
    			i++;
    		} else {
    			j++;
    			A[j] = A[i];
    			i++;
    		}
    	}
     
    	int[] B = Arrays.copyOf(A, j + 1);
     
    	return B;
    }
    
    public static void main(String []args){
    	int[] A = {1,1,2,2,3,4,5,5,6};
    	System.out.println(removeDuplicates(A));
    }
}