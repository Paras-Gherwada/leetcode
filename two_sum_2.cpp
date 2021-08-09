class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++)
        {
            for(int j=0;(j<numbers.size() && j!=i);j++)
            {
                if(numbers[i]+numbers[j]==target)
                    return {j+1,i+1};
            }
        }
        return {0,0};
    }
};

