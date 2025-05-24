class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        vector<pair<int,string>> person;
        int n=heights.size();
        for(int i=0;i<n;i++){
            person.emplace_back(heights[i],names[i]);
        }
        sort(person.rbegin(),person.rend());
        for( auto p :person){
            ans.push_back(p.second);
        }
        return ans;
    }
};