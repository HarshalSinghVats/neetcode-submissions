class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seenElement;
        int length=nums.size();
        for (int i=0;i<length;i++){
            //check if in hashmap, insert if false, return true else
            if(seenElement.count(nums[i])){
                return true;
            }
            else{
                seenElement[nums[i]]=1;
            }
        }
        return false;
    }
};