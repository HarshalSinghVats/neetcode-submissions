class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //we get the length of nums, and make a vector and push the elements twice
        int length=nums.size();
        vector <int> ans(length*2);
        for(int i=0;i<length*2;i++){
            if(i<length){
                ans[i]=nums[i];
            }
            else{
                ans[i]=nums[i-length];
            }
        }
        return ans;
    }
};