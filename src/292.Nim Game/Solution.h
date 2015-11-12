class Solution 
{
public:
    bool canWinNim(int n) 
	{
		//当n不是4的整数倍时，肯定能赢
		return n%4!=0;
    }
};