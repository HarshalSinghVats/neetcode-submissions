class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> record;
        vector<string> order;
        int flag=0;
        vector<string> temp;
        for(string n:arr){
            if(record[n]==0){
                order.push_back(n);
            }
            record[n]++;
        }
        for(auto n:order){
            if(record[n]==1){
                flag++;
                if(flag==k){
                    return n;
                }
            }
        }
        
        return "";
    }
};