class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int length = arr.size();
        if (length == 0) return arr;

        int maxRight = arr[length - 1];
        arr[length - 1] = -1;

        for (int i = length - 2; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxRight;
            maxRight = max(maxRight, temp);
        }

        return arr;
    }
};
