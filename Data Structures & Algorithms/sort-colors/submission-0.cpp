class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> colorMap;
        for(const int& num:nums){
            colorMap[num]++;
        }
        for(int i=0;i<nums.size();i++){
            if(colorMap[0]!=0){
                nums[i]=0;
                colorMap[0]--;
            }
            else if(colorMap[1]!=0){
                nums[i]=1;
                colorMap[1]--;
            }
            else{
                nums[i]=2;
            }
        }
    }
};