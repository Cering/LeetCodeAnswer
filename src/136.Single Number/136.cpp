/*
 *  Question 136 Link: https://leetcode.com/problems/single-number/
 */

#include <iostream>
#include "Solution.h"
using namespace std;

/***
	测试函数
	data: 	数组形式的原始数据
	len: 	数组长度
	answer: 正确的结果
***/
bool testcase( int* data, int len, int answer )
{
	vector<int> nums(data, data+len);
	for( vector<int>::const_iterator it=nums.begin(); it!=nums.end(); it++ )
		cout << *it << " ";
	cout << endl;
	Solution sol;
	int result = sol.singleNumber(nums);
	cout << result << endl;
	cout << (result==answer) << endl << endl;
	return result==answer;
}

//测试用例
void test1()
{
	int data[] = {1};
	testcase(data, sizeof(data)/sizeof(data[0]), 1);
}

void test2()
{
	int data[] = {1,2,2};
	testcase(data, sizeof(data)/sizeof(data[0]), 1);
}

void test3()
{
	int data[] = {1,1,1};
	testcase(data, sizeof(data)/sizeof(data[0]), 1);
}

void test4()
{
	int data[] = {1,1,5,3,5};
	testcase(data, sizeof(data)/sizeof(data[0]), 3);
}

int main()
{
	test1();
	test2();
	test3();
	test4();
}