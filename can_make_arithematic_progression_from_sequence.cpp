class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int idx = 1; idx < arr.size(); ++idx)
            if(arr[idx] - arr[idx - 1] != arr[1] - arr[0])
                return false;
        
        return true;
    }
};