#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
	    vector<int> result(num_people, 0);
	    int distributed = 0;
	    int idx = 0;
	    while(candies > 0){
		    ++distributed;
		    if(candies > distributed)
			    result[idx] += distributed;
		    else
			    result[idx] += candies;
		    ++idx;
		    candies -= distributed;
		    if(idx == num_people)
			    idx = 0;
	    }
	    return result;
    }
};


int main(void){
	int candies, people;
	cout << "Enter number of candies : ";
	cin >> candies;
	cout << "Enter number of people : ";
	cin >> people;

	Solution s;
	vector<int> result = s.distributeCandies(candies, people);
	for(int val : result)
		cout << val << " ";

	return 0;
}
