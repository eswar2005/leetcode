class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length() != t.length()) return false;
        Map<Character,Character> mp = new HashMap<>();
        Map<Character,Character> mp2 = new HashMap<>();
        for(int i=0;i<t.length();i++){
            char ch=s.charAt(i);
            char ch1=t.charAt(i);

            if(mp.containsKey(ch)){
                if(mp.get(ch) !=ch1){
                    return false;
                } 
            }
            else{
                mp.put(ch,ch1);
            }

            if(mp2.containsKey(ch1)){
                if(mp2.get(ch1) !=ch){
                    return false;
                }
            }
            else{
                mp2.put(ch1,ch);
            }
        }
        return true;
    }
}