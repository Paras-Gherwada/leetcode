#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
	    cout << endl;

	    unordered_map<char, int> charFreq;
	    for(char c : s) ++charFreq[c];

	    for(auto x : charFreq) {
		    cout << x.first << "\t" << x.second << endl;
	    }

	    multimap<int, char> freqChar;
	    for(auto x : charFreq) freqChar.insert({x.second, x.first});

	    cout <<  endl;
	    for(auto x : freqChar) {
	    	cout << x.first << "\t" << x.second << endl;
	    }

	    int size = freqChar.size();
	    cout << "Size : " << size << endl;

	    string result = "";
	    for(auto x : freqChar) {
		result = string(x.first, x.second) + result;
	    }


	    return result;
    }
};

int main(int args_c, char* args_v[]) {
	string str;
	cout << "Enter string : ";
	cin >> str;

	Solution s;
	cout << "Result : " << s.frequencySort(str) << endl;
	return 0;
}
