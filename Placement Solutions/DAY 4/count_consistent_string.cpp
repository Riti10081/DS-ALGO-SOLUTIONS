#include<bits/stdc++.h>
using namespace std; 
 int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> m;
        for(int i=0;i<allowed.length();i++)
        {
            m[allowed[i]]++;
        }
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            int f=0;
            for(int j=0;j<words[i].length();j++)
            {
                if(m[words[i][j]]!=1)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                count++;
            }
        }
        return count;
    }
    int main(){
    vector<string> str={"ad","bd","aaab","baa","badab"};
    cout<<countConsistentStrings("ab",str);
}