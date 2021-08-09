#include<iostream>
#include<strings.h>
#include<bitset>

using namespace std;

class Solution {
    string intToBinary(int number){
    	string bin_stream = "";
	while( number != 0){
	    bin_stream = to_string(number&1)+bin_stream;
	    number /= 2;
	}
	return bin_stream;
    }
    
public:
    int hammingDistance(int x, int y) {
        string bin_x = intToBinary(x);
	string bin_y = intToBinary(y);
	if(bin_x.size() > bin_y.size())
		while(bin_x.size() > bin_y.size()) bin_y = '0'+bin_y;
	if(bin_y.size() > bin_x.size())
		while(bin_y.size() > bin_x.size()) bin_x = '0'+bin_x;
	int count = 0;
	for(int idx = bin_x.size(); idx >=0; --idx)
	    if(bin_x[idx] != bin_y[idx]) ++count;
	return count;
    }
};

int main(void){
	int x, y;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	Solution s;
	cout << s.hammingDistance(x, y) << endl;
	return 0;
}
