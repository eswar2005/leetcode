class Solution {
public:
    vector<int> nse(vector<int> arr){
        int n=arr.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            ans[i]= st.empty()?n:st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> psee(vector<int> arr){
        int n=arr.size();
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            ans[i]= st.empty()?-1:st.top();
            st.push(i);
        }
        return ans;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int mod=(int)(1e9+7);
        vector<int> ns;
        vector<int> pse;
        long long int total=0;
        ns=nse(arr);
        pse=psee(arr);
        for(int i=0;i<arr.size();i++){
            int left=i-pse[i];
            int right=ns[i]-i;
            total=(total+(1LL *left*right*arr[i])%mod)%mod;
        }
        return total;
    }
};