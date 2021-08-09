#include<iostream>
#include<string.h>
#include<map>

using namespace std;

class Solution{
	public:
	string toHex(int num){
		if(!num) return "0";
		
		map<int, char> m;
		char digit = '0', c = 'a';
		string res = "";
		u_int n = num;

		for (int idx = 0; idx <= 15; ++idx)
			m[idx] = ((idx < 10)? digit++ : c++);

		for(; n; n/=16)
			res = m[n%16]+res;

		return res;
	}
};

int main(void){
	int num;
	cout << "Enter number to convert to hex: ";
	cin >> num;
	Solution s;
	cout << s.toHex(num) << endl;
	return 0;
}
