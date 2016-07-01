/*
 * Complete the function below.
 */

    static String[] ClosestColor(String[] hexcodes) {
        
        String[] output = new String[hexcodes.length];
        for (int i=0; i<hexcodes.length; i++){
            String binary=hexcodes[i];
            String firstPixel[] = binary.split("(?<=\\G.{8})");
            Integer[] pixelVal = new Integer[3]; 
            for (int j=0; j<firstPixel.length;j++)
            {
        	   pixelVal[j] = Integer.parseInt(firstPixel[j],2);
            }
            
                    
        Map<String, Double> map = new HashMap<String, Double>();
        
        double blackVal = Math.sqrt((Math.pow((pixelVal[0]-0),2)) + (Math.pow((pixelVal[1]-0),2)) + (Math.pow((pixelVal[2]-0),2)));
        map.put("Black",blackVal);
        double white = ((Math.pow((pixelVal[0]-255),2)) + (Math.pow((pixelVal[1]-255),2)) + (Math.pow((pixelVal[2]-255),2)));
        double whiteVal = Math.sqrt(white);
        map.put("White",whiteVal);
        
        double red = ((Math.pow((pixelVal[0]-255),2)) + (Math.pow((pixelVal[1]-0),2)) + (Math.pow((pixelVal[2]-0),2)));
        double redVal = Math.sqrt(red);
        map.put("Red",redVal);
        
        double green = ((Math.pow((pixelVal[0]-0),2)) + (Math.pow((pixelVal[1]-255),2)) + (Math.pow((pixelVal[2]-0),2)));
        double greenVal = Math.sqrt(green);
        map.put("Green",greenVal);

        double blue = ((Math.pow((pixelVal[0]-0),2)) + (Math.pow((pixelVal[1]-0),2)) + (Math.pow((pixelVal[2]-255),2)));
        double blueVal = Math.sqrt(blue);
        map.put("Blue",blueVal);
        
        Map.Entry<String, Double> min = null;
            for (Map.Entry<String, Double> entry : map.entrySet()) {
                if (min == null || min.getValue() > entry.getValue()) {
                    min = entry;
                }
            }   
        map.remove(min.getKey());
        
        Map.Entry<String, Double> minNext = null;
        for (Map.Entry<String, Double> entry : map.entrySet()) {

            if (minNext == null || minNext.getValue() > entry.getValue()) {
            	minNext = entry;
            }
        }
        if (min.getValue().equals(minNext.getValue())){
        	output[i] = "Ambiguous";
        }
            else{
            output[i] = min.getKey(); 
                }

        }
        
    return output;
    }

