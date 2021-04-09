设计一个包含下面两个操作的数据结构：addWord(word), search(word)

addWord(word)会在数据结构中添加一个单词。而search(word)则支持普通的单词查询或是只包含.和a-z的简易正则表达式的查询。

一个 . 可以代表一个任何的字母。

样例
样例 1:

输入:
  addWord("a")
  search(".")
输出: 
  true
样例 2:

输入: 
  addWord("bad")
  addWord("dad")
  addWord("mad")
  search("pad")  
  search("bad")  
  search(".ad")  
  search("b..") 
输出:
  false
  true
  true
  true 
注意事项
你可以认为所有的单词都只包含小写字母 a-z。