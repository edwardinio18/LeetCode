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

class Solution {
public:
    bool isPalindrome(ListNode* head) {
	int k = 0;
	std::string s1, s2;
	s1 = s2 = "";

	ListNode* aux = head;

	while (head->next != NULL) {
		++k;
		head = head->next;
	}

	int cp = k;
	k /= 2;

	char ch;
	while (k > 0) {
		ch = 48 + aux->val;
		s1 += ch;
		aux = aux->next;
		--k;
	}

	k = cp / 2;
	if (k % 2 == 1 && aux->next != NULL) {
		aux = aux->next;
	}

	while (k > 0 && aux->next != NULL) {
		ch = 48 + aux->val;
		s2 += ch;
		aux = aux->next;
		--k;
	}

	for (int i = 0; i < s1.size(); ++i) {
		if (s1[i] != s2[s2.size() - 1 - i]) return false;
	}

	return true;
    }
};
