#include<iostream>
#include<string.h>

using namespace std;

class Solution {
public:
    bool isVowel(char temp)
    {
        switch(temp)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                return true;
                break;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        bool i_char,j_char; 
        while(i<j && j>i)
        {
            if(isVowel(s[i]))
                i_char=true;
            else
                i++;
            if(isVowel(s[j]))
                j_char=true;
            else
                j--;
            if(i_char && j_char)
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
		i_char=false;
		j_char=false;
		i++;
		j--;
            }
        }
        return s;
    }
};

int main(void)
{
	Solution s;
	string ip_string;
	cout<<"Enter a string : ";
	cin>>ip_string;
	cout<<"Result : "<<s.reverseVowels(ip_string)<<endl;
	return 0;
}
