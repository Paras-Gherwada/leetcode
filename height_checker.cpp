#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>temp(0, heights.size());
        int counter = 0;

        for(int height : heights)
            temp.push_back(height);

        sort(temp.begin(), temp.end());

        for(int idx = 0; idx < heights.size(); ++idx){
            if(temp[idx] != heights[idx])
                ++counter;
        }
        return counter;
    }
};


int main(void){
	vector<int> h1 = {1,1,4,2,1,3};
	vector<int> h2 = {5,1,2,3,4};
	vector<int> h3 = {1,2,3,4,5};

	Solution s;
	cout << s.heightChecker(h1) << endl;
	return 0;
}
