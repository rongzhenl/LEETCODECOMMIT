class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    	unordered_map<int,int> mapping;
    	vector<int> result;
    	for(int i=0;i<numbers.size();i++)
    	{
    		mapping[numbers[i]]=i;
    	}
    	for(int i=0;i<numbers.size();i++)
    	{
    		const int Dvalue =target-numbers[i];
    		if(mapping.find(Dvalue)!=mapping.end())
    		{
    			result.push_back(i+1);
    			result.push_back(mapping[Dvalue]+1);
    			return result;
    		}
    	}
    
    }
};