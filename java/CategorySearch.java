import java.io.*;
import java.util.*;


class BusinessInfo {
  int id;
  List<String> categories;

  public BusinessInfo(int id, List<String> categories){
    this.id = id;
    this.categories = categories;
  }
}

class CategorySearch {

  public static final List<String> CATEGORIES_TO_MATCH = Arrays.asList("restaurants", "japanese");

  /**
   *  Return all business ids whose categories include both
   * 'restaurants' and 'japanese'. (available in global list CATEGORIES_TO_MATCH)
   *
   * @param businessInfoList List of business info objects where BusinessInfo
   *     is a class containing id and categories.
   *
   * @return List of business ids matching
   */
  public static List<Integer> categorySearch(List<BusinessInfo> businessInfoList) {
      // Create an Integer list to add all the id's that contains CATEGORIES
      List<Integer> ids = new ArrayList<Integer>();
      
      // Loop through all the available businesses
      for (int i=0; i< businessInfoList.size(); i++)
      {
          // count of categories to match
          int count  = CATEGORIES_TO_MATCH.size();
            // Loop through all the available categories to match
            for (int j=0; j< CATEGORIES_TO_MATCH.size(); j++)
            {
                // Compare if bussinesses are of the given categories
                if (businessInfoList.get(i).categories.contains(CATEGORIES_TO_MATCH.get(j).toLowerCase()))
                {
                    // If matched decrement the count.
                    count--;
                }
            }
          
          // Check if all the categories are matched. 
          if (count > 0)
          {
                continue;
          }
          else{
              // Add all the business id to the list and return    
              ids.add(businessInfoList.get(i).id);
          }
      }
      // return the list of id's that are in the given category 
      return ids;
  }

  public static void main(String[] args) {
    String line;
    List<BusinessInfo> businessInfoList = new ArrayList<BusinessInfo>();
    try{
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      while ((line = br.readLine()) != null) {
        String[] parts = line.split(" ");
        businessInfoList.add(
          new BusinessInfo(
            Integer.parseInt(parts[0]),
            Arrays.asList(Arrays.copyOfRange(parts, 1, parts.length))
          )
        );
      }

      List<Integer> matching_business_ids = categorySearch(businessInfoList);
      Collections.sort(matching_business_ids);
      for(int business_id : matching_business_ids)
        System.out.println(business_id);
    } catch(Exception e) {
      e.printStackTrace();
    }
  }
}
