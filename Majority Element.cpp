class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(map.find(nums[i])==map.end()) map[nums[i]]=0;
            else
                map[nums[i]]++;
            if(map[nums[i]]>=len/2) return nums[i];
        }
        
    }
};