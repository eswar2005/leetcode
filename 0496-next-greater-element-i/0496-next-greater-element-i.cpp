class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nge;  // stores next greater element for nums2[i]
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop smaller or equal elements
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            // If stack is empty → no greater element
            nge[nums2[i]] = st.empty() ? -1 : st.top();
            // Push current element
            st.push(nums2[i]);
        }

        vector<int> ans;
        for (int num : nums1) {
            ans.push_back(nge[num]);
        }
        return ans;
    }
};
