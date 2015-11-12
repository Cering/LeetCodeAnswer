/*
 *  Question 53 Link: https://leetcode.com/problems/maximum-subarray/
 */

#include <iostream>
#include "Solution.h"
using namespace std;

/***
	测试函数
	data:数组形式的输入数据
	len:数组的长度
	answer:正确答案
***/
bool test( int* data, int len , int answer )
{
	if( data==NULL )
		return false;
	
	Solution sol;
	vector<int> nums( data, data+len );
	int result = sol.maxSubArray(nums);
	for( int i=0; i<len; i++ )
		cout << data[i] << " ";
	cout << endl;
	cout << result << endl;
	cout << (result==answer?"true":"false") << endl << endl;
	return result==answer;
}

//测试用例
void testcase1()
{
	int data[] = {-2,1,-3,4,-1,2,1,-5,4};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = 6;
	test( data, len, answer );
}

void testcase2()
{
	int data[] = {-1};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = -1;
	test( data, len, answer );
}

void testcase3()
{
	int data[] = {-1,2};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = 2;
	test( data, len, answer );
}

void testcase4()
{
	int data[] = {5,4,3,2,1};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = 15;
	test( data, len, answer );
}

void testcase5()
{
	int data[] = {-5,-4,-3,-2,-1};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = -1;
	test( data, len, answer );
}

void testcase6()
{
	int data[] = {1,2,-2,5,-1,-9,3,2,1};
	int len = sizeof(data)/sizeof(data[0]);
	int answer = 6;
	test( data, len, answer );
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