#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr1={1,2,2,1};
    vector<int>arr2={2,2};
    int n1=sizeof(arr2)/sizeof(arr2[0]);
    
    map<int, int>freq;
    set<int> unique;

     for(int i=0;i<arr1.size();i++){
         freq[arr1[i]]=arr1[i];
     }
     for(int i=0;i<arr2.size();i++){
         if(arr1[i]==freq[arr2[i]]){
             unique.insert(arr2[i]);
         }
     }

     for(auto a : unique){
         cout<<a<<endl;
     }
}