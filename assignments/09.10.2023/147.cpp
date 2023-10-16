class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }

        vector<int> v;
        ListNode* temp = head;

        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());

        temp = head;
        int i = 0;

        while (temp != NULL) {
            temp->val = v[i];
            i++;
            temp = temp->next;
        }

        return head;
    }
};
