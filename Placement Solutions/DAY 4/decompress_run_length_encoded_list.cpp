#include<bits/stdc++.h>
using namespace std;
 vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i=i+2)
        {
            while(nums[i]--)
            {
                v.push_back(nums[i+1]);
            }
        }
        return v;
    }
    int main(){
    vector<int> nums {1,2,3,4};
    vector<int> result= decompressRLElist(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"  ";
    }
}