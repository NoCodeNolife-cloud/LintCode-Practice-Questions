给一个单词列表，求出这个列表中出现频次最高的K个单词。

样例
样例 1:

输入:
  [
    "yes", "lint", "code",
    "yes", "code", "baby",
    "you", "baby", "chrome",
    "safari", "lint", "code",
    "body", "lint", "code"
  ]
  k = 3
输出: ["code", "lint", "baby"]
样例 2:

输入:
  [
    "yes", "lint", "code",
    "yes", "code", "baby",
    "you", "baby", "chrome",
    "safari", "lint", "code",
    "body", "lint", "code"
  ]
  k = 4
输出: ["code", "lint", "baby", "yes"] 
挑战
用 O（n log k)的时间和 O(n) 的额外空间完成。