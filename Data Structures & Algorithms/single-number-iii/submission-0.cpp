class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor_one=0;
        for (int i=0;i<nums.size();i++){
            xor_one^= nums[i];
        }
        int rightmost=xor_one&(xor_one-1)^xor_one;
        int b1=0,b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost){
                b1^=nums[i];
            }
            else{
                b2^=nums[i];
            }
        }
        vector<int> xd={b1,b2};
    
        return xd;
    }
};