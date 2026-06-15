class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int i=0,j=heights.size()-1;
        int waterCapacity=INT_MIN;
        while(i<j){
            int tempCapacity=(j-i)*min(heights[j],heights[i]);
            waterCapacity=max(waterCapacity, tempCapacity);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return waterCapacity;
    }
};
