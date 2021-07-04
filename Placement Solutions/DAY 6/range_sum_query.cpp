class NumArray {
public:
    vector<int>v1;
    NumArray(vector<int>& nums) {
       long long int i;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
           v1.push_back(s);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        {
            return v1[right];
        }
        else
        {
            return (v1[right]-v1[left-1]);
        }
    }
};

