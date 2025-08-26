class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int n = chars.size();
        
        for (int i = 0; i < n; ) {
            char current = chars[i];
            int count = 0;

            while (i < n && chars[i] == current) {
                i++;
                count++;
            }

            ans.push_back(current);

            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) ans.push_back(c);
            }
        }

        for (int i = 0; i < ans.size(); i++) {
            chars[i] = ans[i];
        }

        return ans.size();
    }
};
