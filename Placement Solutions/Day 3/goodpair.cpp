#include<bits/stdc++.h>
using namespace std;
int goodpair(int n){
    int gp=0;
    for(int i=0;i<n;i++){
        gp+=i;
    }
    return gp;
} 

int main(){
    vector<int> v={1,2,3,1,1,3};
    map<int,int> freq;
    for(int i=0;i<v.size();i++){
        freq[v[i]]++;
    }
    int c=1;
    int sum=0;
    for(auto a : freq){
        c=1;
        if(a.second>c){
            c=a.second;
            sum=sum+goodpair(c);
        }
    }
    cout<<sum;

}