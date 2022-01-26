class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        int idx = 0;
        
        while(((idx + 1) < size) && (arr[idx] < arr[idx + 1]))
            ++idx;
        
        if((idx == 0) || (idx == (size - 1)))
            return false;
        
        while(((idx + 1) < size) && (arr[idx] > arr[idx + 1]))
            ++idx;
        
        return (idx == (size - 1));
    }
};