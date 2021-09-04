class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int distance = 0;
        for(int num : arr1){
            bool isOkay = true;
            for(int num_2 : arr2){
                if(abs(num - num_2) <= d){
                    isOkay = false;
                    break;
                }   
            }
            if(isOkay) ++distance;
        }
        return distance;
    }
};