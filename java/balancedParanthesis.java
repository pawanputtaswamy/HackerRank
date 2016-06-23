/*
 * Complete the function below.
 */

    static String[] Braces(String[] values) {
            
        String[] output = new String[values.length];
        for (int it=0; it < values.length; it++)
        {
            String s = values[it];
	        int flag = 1, i = 0, l = s.length();
	        Stack<Character> st = new Stack<Character>();
	            for( i = 0; i < l; i++ ){
	                char ch = s.charAt(i);
	                if( ch == '(' || ch == '[' || ch == '{' )
	                    st.push( ch );
	                else {
	                    if( st.empty() ){
	                        flag = 0; break;
	                    } else {
	                        char c = (char) st.pop();
	                        if( (c == '(' && ch != ')') || (c == '[' && ch != ']') || (c == '{' && ch != '}') ){
	                            flag = 0; break;
	                        }
	                    }
	                }
	            }
             if( flag == 1 && st.empty() ) { output[it] = "YES"; } 
             else  { output[it] = "NO"; }
	        }
        return output;
    }

