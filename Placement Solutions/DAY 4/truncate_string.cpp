#include<iostream>
using namespace std;
string truncateSentence(string s, int k) {
        int l=0;

       while(l!=s.length())
       {
           if(s[l]==' ')
           {
               k--;
               if(k==0)
               {
                   break;
               }
           }
           l++;
       }
      return  s.substr(0,l);
    }
    int main()
    {
        string s="hello friends this side ritika";
        cout<<truncateSentence(s, 4);
    }