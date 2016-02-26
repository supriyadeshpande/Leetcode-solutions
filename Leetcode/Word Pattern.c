Given a pattern and a string str, find if str follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in str.

Examples:
1. pattern = "abba", str = "dog cat cat dog" should return true.
2. pattern = "abba", str = "dog cat cat fish" should return false.
3. pattern = "aaaa", str = "dog cat cat dog" should return false.
4. pattern = "abba", str = "dog dog dog dog" should return false.

Notes:
You may assume pattern contains only lowercase letters, and str contains lowercase letters separated by a single space.


******************/


public class Solution {
    public boolean wordPattern(String pattern, String str) {
        
        if(pattern.length() == 0 || str.length() == 0)
            return false;
            
        String[] stripped = str.split(" ");
        
        if(pattern.length() != (stripped.length))
            return false;

        HashMap<Character, String> myHash1 = new HashMap<Character, String>();
        HashMap<String, Character> myHash2 = new HashMap<String, Character>();
        int i = 0;
        for(String s:stripped)
        {
         
            if(myHash1.containsKey(pattern.charAt(i)) && myHash2.containsKey(s))
            {
                if(myHash1.get(myHash2.get(s)).equals(s))
                {
                    i++;
                }
                else {
                    return false;
                }
            }
            else if (!myHash1.containsKey(pattern.charAt(i)) && !myHash2.containsKey(s))
            {
                myHash2.put(s, pattern.charAt(i));
                myHash1.put(pattern.charAt(i), s);
                i++;            
            }
            else
            {
                return false;
            }
        }
        return true;
    }
}