#
# [3] Longest Substring Without Repeating Characters
#
# https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#
# algorithms
# Medium (25.01%)
# Total Accepted:    573.1K
# Total Submissions: 2.3M
# Testcase Example:  '"abcabcbb"'
#
# Given a string, find the length of the longest substring without repeating
# characters.
# 
# 
# Example 1:
# 
# 
# Input: "abcabcbb"
# Output: 3 
# Explanation: The answer is "abc", with the length of 3. 
# 
# 
# 
# Example 2:
# 
# 
# Input: "bbbbb"
# Output: 1
# Explanation: The answer is "b", with the length of 1.
# 
# 
# 
# Example 3:
# 
# 
# Input: "pwwkew"
# Output: 3
# Explanation: The answer is "wke", with the length of 3. 
# ⁠            Note that the answer must be a substring, "pwke" is a
# subsequence and not a substring.
# 
# 
# 
# 
# 
#
class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = []
        ret = []
        for a in s:
            if a not in ret:
                ret.append(a)
                #print("Adding: " + a)
            else:
                #print("Finding " + a + " in " + str(ret))
                result.append(ret)
                ret = ret[ret.index(a)+1:]
                ret.append(a)
                #print("After remove " + a + " is " + str(ret) + " Result: " + str(result))
        result.append(ret)
        #print("Finaly result is: " + str(result))

        max_len = 0
        for l in result:
            if max_len < len(l):
                max_len = len(l)
        return int(max_len)

if __name__ == '__main__':

    l = "dvdf"
    s = Solution()
    #print(s.lengthOfLongestSubstring(l))
