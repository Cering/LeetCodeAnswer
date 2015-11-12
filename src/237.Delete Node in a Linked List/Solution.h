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
		
		//把node节点替换成下一个节点
		ListNode* tmp = node->next;
		node->val = tmp->val;
		node->next = tmp->next;
		//删除下一个节点
		delete tmp;
    }
};