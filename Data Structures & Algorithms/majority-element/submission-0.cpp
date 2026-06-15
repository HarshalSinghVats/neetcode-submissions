class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();

        for (int x : nums) {
            if (++freq[x] > n / 2)
                return x;
        }
        // Guaranteed to exist
        return -1;
    }
};
