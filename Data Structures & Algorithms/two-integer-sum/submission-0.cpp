class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size(),num1,num2;
        unordered_map<int,int> check;

        for(int i=0;i<length;i++){
            int needed = target - nums[i];
            if(check.find(needed) != check.end()){
                num1=i;
                num2=check[needed];
                break;
            }
            else{
                check[nums[i]]=i;
            }
        }
        vector<int> result = {num1, num2};
        sort(result.begin(), result.end());
        return result;
    }
};
