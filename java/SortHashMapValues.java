import java.util.*;

public class SortHashMapValues{
 public static void main(String []args){
 /* Map<String,Integer> map=new HashMap<String,Integer>();
  map.put("one",1);
  map.put("ten",10);
  map.put("three",3);
  map.put("two",2);
  */
	 Map<String,String> map=new HashMap<String,String>();
	  map.put("one","1");
	  map.put("ten","10");
	  map.put("three","3");
	  map.put("two","2");
	  
	  List mapKeys = new ArrayList(map.keySet());
  List list=new ArrayList(map.values());
  TreeSet sortedSet = new TreeSet(list);
  Map someMap= new LinkedHashMap();

  Object[] sortedArray = sortedSet.toArray();

  int size = sortedArray.length;
  ArrayList<String> st = new ArrayList<String>();
  for (int i=size; i>0;)
  {
	  //st.add(mapKeys.get(mapValues.indexOf(sortedArray[--i])), sortedArray[i]);
	  someMap.put(mapKeys.get(list.indexOf(sortedArray[--i])), sortedArray[i]);
  }

  st.addAll(someMap.keySet());
  System.out.println(st.toString());

 }
}