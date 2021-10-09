#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> results;
		for(int candy : candies)
			results.push_back(candy + extraCandies >= max);

		return results;
    }
};

int main(int args_c, char* args_v[]) {
	vector<int> candies = {
// 		2,3,5,1,3
// 		4,2,1,1,2
		12,1,12
	};

	Solution s;
	for(bool val : s.kidsWithCandies(candies, 10))
		cout << val << endl;
	return 0;
}
