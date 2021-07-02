#include<bits/stdc++.h>
using namespace std;
 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       
      vector<int> res=nums;
        vector<int> num;
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
        {
            auto a=lower_bound(res.begin(),res.end(),nums[i]);
            num.push_back(a-res.begin());
        }
        return num;
    }
    int main(){
    vector<int> nums {8,1,2,2,3};
    vector<int> result= smallerNumbersThanCurrent(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}