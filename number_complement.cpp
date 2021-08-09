#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

class Solution {
public:
    int findComplement(int num) {
	vector<int> bin_stream;
	while(num > 0){
		bin_stream.push_back(!(num%2));
		num /= 2;
	}
	int multiplier = num;
	for(int bit : bin_stream){
		if(bit)
			num += pow((2*bit), multiplier);
		++multiplier;
	}
        return num;
    }
};

int main(void){
	int number;
	cout << "Enter number: ";
	cin >> number;
	Solution s;
	cout << "Answer: " << s.findComplement(number) << endl;
	return 0;
}
