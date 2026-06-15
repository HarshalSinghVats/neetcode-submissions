class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length=nums.size();
        int maxCount=0,currentCount=0;
        for(int i=0;i<length;i++){
            if(nums[i]==1){
                currentCount++;
            }
            else if(nums[i]==0){
                if(currentCount>maxCount){
                    maxCount=currentCount;
                }
                currentCount=0;
            }
            if(i==length-1){
                if(currentCount>maxCount){
                    maxCount=currentCount;
                }
            }
        }
        return maxCount;
    }
};