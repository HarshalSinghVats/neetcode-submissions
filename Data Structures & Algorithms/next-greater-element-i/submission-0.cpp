class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> greaterElement;

        for (int x : nums2) {
            while (!st.empty() && x > st.top()) {
                greaterElement[st.top()] = x;
                st.pop();
            }   
            st.push(x);
        }

        while (!st.empty()) {
            greaterElement[st.top()] = -1;
            st.pop();
        }

        for(int i =0;i<nums1.size();i++){
            nums1[i]=greaterElement[nums1[i]];
        }

        return nums1;
    }
};