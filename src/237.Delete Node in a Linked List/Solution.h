/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution 
{
public:
    void deleteNode(ListNode* node) 
	{
        if( node == NULL || node->next==NULL )
			return;
		
		//��node�ڵ��滻����һ���ڵ�
		ListNode* tmp = node->next;
		node->val = tmp->val;
		node->next = tmp->next;
		//ɾ����һ���ڵ�
		delete tmp;
    }
};