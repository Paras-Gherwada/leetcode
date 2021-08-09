#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count_char_ransomNote = 0, count_char_magazine = 0;
        for(char alphabet : ransomNote){
            count_char_ransomNote = count(ransomNote.begin(), ransomNote.end(), alphabet);
	    count_char_magazine = count(magazine.begin(), magazine.end(), alphabet);
	    if(count_char_ransomNote > count_char_magazine) return false;
        }
	return true;
    }
};

int main(void){
	string str1, str2;
	cout << "Enter str1: ";
	cin >> str1;
	cout << "Enter str2: ";
	cin >> str2;
	Solution s;
	cout << s.canConstruct(str1, str2) << endl;
	return 0;
} 
