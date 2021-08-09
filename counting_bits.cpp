#include<iostream>
#include<string.h>
#include<vector>
#include<bitset>

using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
	vector<int> result;
        int number, count;
        number = count = 0;
        string bin_stream;
        while(number <= n){
            bin_stream = bitset<32>(number).to_string();
	    for(char bit : bin_stream) if(bit == '1') ++count;
	    result.push_back(count);
            ++number;
	    count = 0;
        }
	return result;
    }
};

int main(void){
	int number;
	cout << "Enter a number: ";
	cin >> number;
	Solution s;
	vector<int> result = s.countBits(number);
	for(int num : result)
		cout << num << "\t";
	cout << endl;
	return 0;
}
