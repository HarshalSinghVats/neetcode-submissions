class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen=1,incLen=1,decLen=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                incLen++;
                decLen=1;
            }
            else if(nums[i]<nums[i-1]){
                decLen++;
                incLen=1;
            }
            else{
                decLen=1;
                incLen=1;
            }
            maxLen=max({maxLen,incLen,decLen});
        }
        return maxLen;

    }
};