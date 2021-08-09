#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
	int size = nums.size();
	sort(nums.begin(), nums.end());
	return max(nums[size-1]*nums[size-2]*nums[size-3], nums[0]*nums[1]*nums[size-1]);	
    }
};


int main(void){
	vector<int> nums;
	int num;
	char choice;
	do{
		cout << "Enter number to push: ";
		cin >> num;
		nums.push_back(num);
		cout << "Continue(Y/N)? ";
		cin >> choice;
		if(choice == 'N' || choice == 'n') break;
	}while(true);

	Solution s;
	cout << "Product is: " << s.maximumProduct(nums) << endl;
	return 0;
}
