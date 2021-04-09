如果一个单词通过循环右移获得的单词，我们称这些单词都为一种循环单词。 现在给出一个单词集合，需要统计这个集合中有多少种不同的循环单词。

例如：picture 和 turepic 就是属于同一种循环单词。

样例
样例 1:

输入 : dict = ["picture", "turepic", "icturep", "word", "ordw", "lint"]
输出 : 3
说明 : 
"picture", "turepic", "icturep" 是相同的旋转单词。
"word", "ordw" 也相同。
"lint" 是第三个不同于前两个的单词。
注意事项
所有单词均为小写。