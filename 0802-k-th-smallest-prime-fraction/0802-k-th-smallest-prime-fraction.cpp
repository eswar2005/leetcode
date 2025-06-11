class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n=arr.size();
        vector<float> ans;
        vector<float> ans1;
        vector<pair<int, int>> p;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                float result=static_cast<float>(arr[i]) / arr[j];
                ans.push_back(result);
                ans1.push_back(result);
                p.emplace_back(arr[i],arr[j]);
            }
        }
        int find=0;
        sort(ans1.begin(),ans1.end());
        float key=ans1[k-1];
        for(int i=0;i<ans.size();i++){
            if(ans[i]==key){
                find=i;
                break;
            }
        }
        cout<<key;
        return {p[find].first,p[find].second};
    }
};