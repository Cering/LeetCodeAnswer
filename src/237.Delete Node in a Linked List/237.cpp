/*
 *  Question 237 Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
 */
 
#include <iostream>
#include "Solution.h"
using namespace std;

/***
	根据数组创建链表
***/
ListNode* createList( int* data , int len )
{
	if( data==NULL || len<=0 )
		return NULL;
	ListNode* head = new ListNode(data[0]);
	ListNode* cur = head;
	for( int i=1; i<len; i++ )
	{
		cur->next = new ListNode(data[i]);
		cur = cur->next;
	}
	return head;
}

/***
	打印链表
	head: 链表头结点
***/
void printList( ListNode* head )
{
	while( head!= NULL )
	{
		cout << head->val;
		if( head->next == NULL )
			break;
		else
		{
			cout << "->";
			head = head->next;
		}
	}
	cout << endl;
}
 
/***
	测试函数
	head: 链表的头结点，不参与删除计算
	target: 欲删除的结点指针
***/
void test( ListNode* head, ListNode* target)
{
	printList(head);
	Solution sol;
	cout << "del:" << target->val << endl;
	sol.deleteNode(target);
	printList(head);
	cout << endl;
}
 
//测试用例
void testcase1()
{
	int data[] = {1,2,3,4};
	ListNode* head = createList( data, sizeof(data)/sizeof(data[0]) );
	test( head, head->next );
}

void testcase2()
{
	int data[] = {1,2,3,4};
	ListNode* head = createList( data, sizeof(data)/sizeof(data[0]) );
	test( head, head->next->next );
}

void testcase3()
{
	int data[] = {1,2,3,4};
	ListNode* head = createList( data, sizeof(data)/sizeof(data[0]) );
	test( head, head );
}

void testcase4()
{
	int data[] = {1,2};
	ListNode* head = createList( data, sizeof(data)/sizeof(data[0]) );
	test( head, head );
}
 
int main()
{
	testcase1();
	testcase2();
	testcase3();
	testcase4();
}