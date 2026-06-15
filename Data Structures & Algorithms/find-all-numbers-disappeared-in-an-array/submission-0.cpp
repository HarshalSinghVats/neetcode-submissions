class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        unordered_map<int,int> check;
        vector<int> final;

        for(int i = 0;i<nums.size();i++){
            if(check.contains(i+1)){
                check[nums[i]]++;
            }
            else{
                check[i+1]=0;
                check[nums[i]]++;
            }
        }

        for(auto x:check){
            if(x.second==0){
                final.push_back(x.first);
            }
        }
        return final;
    }
};