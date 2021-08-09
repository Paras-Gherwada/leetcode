class Solution {
    vector<int> stringToVector(int size,string& temp)
    {
        vector<int> dummy;
        for(int i=0;i<size;i++)
            dummy.push_back(temp[i]-'0');
        return dummy;
    }
    vector<int> adjustVector(string& temp,vector<int> dummy)
    {
        temp=string(dummy.size()-temp.size(),'0')+temp;
        return stringToVector(temp.size(),temp);
    }
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        string temp=to_string(K);
        vector<int> vectK;
        if(A.size() < temp.size())
        {
            while(A.size()<temp.size())
                A.insert(A.begin(),0);
        }
        vectK=adjustVector(temp,A);
        temp="";
        int idx=(A.size() & vectK.size())-1;
        int carry=0;
        while(idx>=0)
        {
            if(A[idx]+vectK[idx]+carry > 9)
            {
                temp=to_string((A[idx]+vectK[idx]+carry)-10)+temp;
                carry=1;
            }
            else
            {
                 temp=to_string(A[idx]+vectK[idx]+carry)+temp;
                 carry=0;
            }
            idx--;
        }
        
        if(carry==1)
            temp="1"+temp;            
        return stringToVector(temp.size(),temp);;
    }
};
