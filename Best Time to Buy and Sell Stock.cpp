class Solution
{
	int maxProfit(vector<int>& price )
	{
		if(price.size()<2) return 0;
		int profile=0;
		int cur_min=price[0];
		for(int i=1;i<price.size();i++)
		{
			profile=max(profile,profile-cur_min);
			cur_min =min(cur_min,price[i]);
		}
		return profile;
	}
}