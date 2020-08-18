/*Convright:
 *Filename:
 *File tag:
 *Function:
 *Autor:
 *Email:
 *Date:
 *Version:
 */

// https://leetcode-cn.com/problems/two-sum/
//
// 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
// 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
// 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
// 示例：
// 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
// 输出：7 -> 0 -> 8
// 原因：342 + 465 = 807
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Example:
// Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
// Output: 7 -> 0 -> 8
// Explanation: 342 + 465 = 807.


// lib choose
#include "../../lib/libch.h"


// program part choose
#define PART  THREE

class Solution {
public:
    vector<int> addTwoNumbers1(vector<int>& nums, int target) {

    }

  vector<int> addTwoNumbers2(vector<int>& nums, int target) {

    // ListNode *head, *curr;
        // head = curr = new ListNode(0);
        // bool carry = false;

        // while (true)
        // {
          // ListNode* node  = new ListNode(0);
          // int       v1, v2;

          // if (carry)
          //   node->val = 1;
          // else
          //   node->val = 0;

          // carry = false;

          // if (l1 != NULL)
          // {
          //   v1 = l1->val;
          //   l1 = l1->next;
          // }
          // else
          //   v1 = 0;

          // if (l2 != NULL)
          // {
          //   v2 = l2->val;
          //   l2 = l2->next;
          // }
          // else
          //   v2 = 0;

          // carry     = (node->val + v1 + v2) / 10;
          // node->val = (node->val + v1 + v2) % 10;

          // curr->next = node;
          // curr       = node;

          // if (l1 == NULL && l2 == NULL && !carry)
          //   break;
        // }

      // return head->next;

    }


    vector<int> addTwoNumbers3(vector<int>& nums, int target) {

    }


    int test(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";          //输出为1 2
        return 0;
    }
    int result(vector<int>& result) {
        vector<int> ans;
        cout << "solution : "  ;
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";          //输出为1 2
        return 0;
    }
};


int SAFE_MAIN(int argc, char* argv[])
// int main(int argc, char* argv[])
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    std::cout << "Hello, World!\n";
	return 0;
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    return 0;
#endif

#if PART == THREE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    return 0;
#endif
}