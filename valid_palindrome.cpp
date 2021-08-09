#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

class Solution {
public:
    string reducedString(string& s)
    {
        int i;
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	s.erase(remove(s.begin(),s.end(),','),s.end());
	s.erase(remove(s.begin(),s.end(),'-'),s.end());
        for(i=0;i<s.size();i++)
            s[i]=tolower(s[i]);
	cout<<"Lower s : "<<s<<endl;
        string alphabets="abcdefghijklmnopqrstuvwxyz0123456789";
        i=0;
        string temp="";
        while(i<s.size())
        {
		if(alphabets.find(s[i])!=string::npos)
			temp=temp+s[i];
		i++;
        }
	cout<<"Temp : "<<temp<<endl;
        return temp;
    }
    bool isPalindrome(string s) {
        s=reducedString(s);
        int i=0;
        while(i<s.size()/2)
        {
            if(s[i]!=s[s.size()-1-i])
                return false;
            i++;
        }
        return true;
    }
};

int main(void)
{
	Solution s;
	string val;
	cout<<"Enter a string : ";
	getline(cin,val);
	cout<<"Result : "<<s.isPalindrome(val)<<endl;
	return 0;
}
