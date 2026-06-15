class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        for(const int& x : nums){
            freq[x]++;
        }

        vector<vector<int>> bucket(nums.size()+1);
        vector<int> result;

        for(auto& val:freq){
            bucket[val.second].push_back(val.first);
        }

        for(int i=nums.size();i>=1;i--){
            for(int num:bucket[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }    
        }
        return result;

    }
};
