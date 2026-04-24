class Solution {
    public boolean isValid(String s) {
        Map<Character, Character> mp = new HashMap<>();
        mp.put('}','{');
        mp.put(')','(');
        mp.put(']','[');

        String open="{[(";
        String close="}])";
        Stack<Character> st = new Stack<>();

        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(open.contains(String.valueOf(ch))){
                st.push(ch);
            }
           if(close.contains(String.valueOf(ch))){
                if(st.isEmpty()){
                    return false;
                }
                else{
                    if (mp.get(ch)==st.peek()){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }

           }
        }
        if(st.isEmpty()){
            return true;
        }
        return false;
    }
}