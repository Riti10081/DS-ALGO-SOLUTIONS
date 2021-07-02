#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int>& encoded, int first) {
         encoded.insert(encoded.begin(),first);
        for(int i=0;i<encoded.size()-1;i++)
        {

            encoded[i+1]=encoded[i]^encoded[i+1];
        }

        return encoded;
    }
    int main(){
    vector<int> encoded {1,2,3};
    int first=1;
    vector<int> result= decode(encoded,first);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
}