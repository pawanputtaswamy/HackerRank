

    static String shortenString(String input) {

        if (input.length() < 1)
        {
            return "";    
        }
        
        StringBuilder result = new StringBuilder(input.length());
        // Get only letters to find the unique letter length (case insensitive)
        String extractVal = input.replaceAll("[^a-zA-Z]+", "");
        // Get all the unique characters
        String unique = extractVal.replaceAll("(?i)(.)(?=.*?\\1)", "");
        char[] chars = input.toCharArray();
        // Append the first letter to the stringbuffer
        result.append(chars[0]);
        // Loop through the characters and get all the non-alphabetical values appended.
        for (char c : chars) {
	        if(!Character.isLetter(c)) {
	        	result.append(c);
	        }
	    }
        // Append the unique alphabets length (-2: remove first and last letter length) 
        result.append(unique.length()-2);
        // Append the last letter to the stringbuffer.
        result.append(chars[input.length()-1]);
        return result.toString();
    }

	/*
		(?i)     # Mode: case-insensitive
		\b       # Match the start of a word
		([a-z]+) # Match one ASCII "word", capture it in group 1
		\b       # Match the end of a word
		(?:      # Start of non-capturing group:
		 \s+     # Match at least one whitespace character
		 \1      # Match the same word as captured before (case-insensitively)
		 \b      # and make sure it ends there.
		)+       # Repeat that as often as possible
	*/
