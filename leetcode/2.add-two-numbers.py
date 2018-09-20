#
# [2] Add Two Numbers
#
# https://leetcode.com/problems/add-two-numbers/description/
#
# algorithms
# Medium (29.14%)
# Total Accepted:    582.6K
# Total Submissions: 2M
# Testcase Example:  '[2,4,3]\n[5,6,4]'
#
# You are given two non-empty linked lists representing two non-negative
# integers. The digits are stored in reverse order and each of their nodes
# contain a single digit. Add the two numbers and return it as a linked list.
# 
# You may assume the two numbers do not contain any leading zero, except the
# number 0 itself.
# 
# Example:
# 
# 
# Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
# Output: 7 -> 0 -> 8
# Explanation: 342 + 465 = 807.
class ListNode:
    def __init__(self,x):
        self.val = x
        self.next = None


class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        list1 = []
        list2 = []

        p1 = l1
        while p1 is not None:
            list1.append(p1.val)
            p1 = p1.next

        p2 = l2
        while p2 is not None:
            list2.append(p2.val)
            p2 = p2.next

        list1.reverse()
        list2.reverse()

        str1 = str2 = ''
        for t in list1:
            str1 += str(t)
        for t in list2:
            str2 += str(t)

        result = int(str1) + int(str2)
        
        res_str = [a for a  in str(result)]
        res_str.reverse()
        result = [int(a) for a in res_str]

        #result = ListNode(res_str[0])
        #p = result
        #for ln in res_str[1:]:
        #    p.next = ListNode(l)
        #    p = p.next
        return result

       

#if __name__ == '__main__':
#
#    list1 = [2,4,3]
#    list2 = [5,6,4]
#
#    l1 = ListNode(list1[0])
#    p1 = l1
#    for l in list1[1:]:
#        p1.next = ListNode(l)
#        p1 = p1.next
#    
#    l2 = ListNode(list2[0])
#    p2 = l2
#    for l in list2[1:]:
#        p2.next = ListNode(l)
#        p2 = p2.next
#
#    s = Solution()
#    print(s.addTwoNumbers(l1,l2))
