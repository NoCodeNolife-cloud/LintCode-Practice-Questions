描述
现在有一个字符串，首字符代表一级分隔符，分隔不同的键值对key-value；第二个字符代表二级分隔符，分隔key和value；后面的字符串表示待处理的字符串。请给出所有的有效键值对。

有效键值对即key和value均不为空的键值对。
题目保证分隔符不为字母或数字，待处理的字符串中只包含两种分隔符：小写字母和数字，且两个一级分隔符中间最多只出现一个二级分隔符。
题目保证所给字符串长度不超过1000。

样例
样例1
输入:"#:a:3#b:8#c:9"
输出:[["a","3"],["b","8"],["c","9"]]
样例2
输入:"#:aa:3#b:853#:9"
输出:[["aa","3"],["b","853"]]