#include <vector>

class Solution 
{
public:
    int maxSubArray(std::vector<int>& nums) 
	{
        std::vector<int>::const_iterator it=nums.begin();
		int sum = *it;
		int max = sum;
		it++;
		for( ; it!=nums.end(); it++ )
		{
			if( sum>=0 )
				sum += *it;
			else
				sum = *it;
			max = max>sum ? max : sum;
		}
		return max;
    }
};