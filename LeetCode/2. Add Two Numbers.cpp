/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        queue<int> q;
        vector<int> vec;

        ListNode *result = new ListNode();
        ListNode *head = result;

        while (l1 != NULL || l2 != NULL)
        {
            if (l1 == NULL)
            {
                q.push(l2->val);
                l2 = l2->next;
            }
            else if (l2 == NULL)
            {
                q.push(l1->val);
                l1 = l1->next;
            }
            else
            {
                q.push(l1->val + l2->val);
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        while (!q.empty())
        {
            vec.push_back(q.front());
            q.pop();
        }
        for (size_t i = 0; i < vec.size(); i++)
        {
            if (vec[i] >= 10)
            {
                if (i == vec.size() - 1)
                {
                    vec.push_back(vec[i] / 10);
                    vec[i] = vec[i] % 10;
                }
                vec[i + 1] += vec[i] / 10;
                vec[i] = vec[i] % 10;
            }
            result->val = vec[i];
            if (i != vec.size() - 1)
            {
                result->next = new ListNode();
                result = result->next;
            }
        }
        return head;
    }
};