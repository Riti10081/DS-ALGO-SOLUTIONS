#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,5,1,3};
    int maximum=*max_element(v.begin(),v.end());
        int extra_toffee=3;
        for(int i=0;i<v.size();i++)
        {
            if((extra_toffee+v[i])>=maximum){
              cout<<"true"<<" ";
            }
            else{
                cout<<"false"<<" ";
            }
        }
    }

