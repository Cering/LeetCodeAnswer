/***
	Question 292 Link: https://leetcode.com/problems/nim-game/
***/

#include <iostream>
#include "Solution.h"
using namespace std;

/***
	测试函数
	n: 石头个数
	answer: 正确答案
***/
bool test( int n, bool answer )
{
	cout << n << endl;
	Solution sol;
	bool result = sol.canWinNim(n);
	cout << (result==answer?"true":"false") << endl << endl;
	return result;
}

//测试用例
void testcase1()
{
	int n = 5;
	bool answer = true;
	test(n, answer);
}

void testcase2()
{
	int n = 4;
	bool answer = false;
	test(n, answer);
}

void testcase3()
{
	int n = 0;
	bool answer = false;
	test(n, answer);
}

void testcase4()
{
	int n = 1;
	bool answer = true;
	test(n, answer);
}

void testcase5()
{
	int n = 3;
	bool answer = true;
	test(n, answer);
}

void testcase6()
{
	int n = 8;
	bool answer = false;
	test(n, answer);
}

int main()
{
	testcase1();
	testcase2();
	testcase3();
	testcase4();
	testcase5();
	testcase6();
}