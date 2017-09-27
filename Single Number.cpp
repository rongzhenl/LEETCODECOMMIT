class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x= nums[0];
        vector<int> ::iterator it=nums.begin()+1;
        for(;it<nums.end();it++)
        {
            x^=*it;
        }
        return x;
    }
};