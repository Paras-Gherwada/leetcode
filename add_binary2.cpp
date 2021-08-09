#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int idx_a=a.size()-1;
        int idx_b=b.size()-1;
	if(idx_a>idx_b)
	{
		int diff=idx_a-idx_b;
		while(diff)
		{
			b="0"+b;
			diff--;
		}
	}
	if(idx_a<idx_b)
	{
		int diff=idx_b-idx_a;
		while(diff)
		{
			a="0"+a;
			diff--;
		}
	}
	idx_a=a.size()-1;
	idx_b=b.size()-1;
        bool carry=0;
        string result="";
        while(idx_a>=0 && idx_b>=0)
        {
            if(a[idx_a]=='1' && b[idx_b]=='1' && carry==1)
            {
                result="1"+result;
                carry=1;
            }
            else if(a[idx_a]=='1' && b[idx_b]=='1' && carry==0)
            {
                result="0"+result;
                carry=1;
            }
            else if(a[idx_a]=='1' && b[idx_b]=='0' && carry==1)
            {
                result="0"+result;
                carry=1;
            }
            else if(a[idx_a]=='1' && b[idx_b]=='0' && carry==0)
            {
                result="1"+result;
                carry=0;
            }
            else if(a[idx_a]=='0' && b[idx_b]=='1' && carry==1)
            {
                result="0"+result;
                carry=1;
            }
            else if(a[idx_a]=='0' && b[idx_b]=='1' && carry==0)
            {
                result="1"+result;
                carry=0;
            }
            else if(a[idx_a]=='0' && b[idx_b]=='0' && carry==1)
            {
                result="1"+result;
                carry=0;
            }
            else if(a[idx_a]=='0' && b[idx_b]=='0' && carry==0)
            {
                result="0"+result;
                carry=0;
            }
	    idx_a--;
	    idx_b--;
        }
        return (carry==1)?"1"+result:result;
    }
};


int main()
{
	string a,b;
	cout<<"Enter string a : ";
	getline(cin,a);
	cout<<"Enter string b : ";
	getline(cin,b);
	Solution s;
	cout<<"Result : "<<s.addBinary(a,b)<<endl;
	return 0;
}
