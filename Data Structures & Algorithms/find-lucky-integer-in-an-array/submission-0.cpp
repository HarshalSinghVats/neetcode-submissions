class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> check;
        int largest=-1;
        for(int i=0;i<arr.size();i++){
            check[arr[i]]++;
        }
        for(auto& [num,freq]:check){
            if(num==freq){
                largest=max(largest,freq);
            }
        }

        return largest;
    }
};