���һ�����������������������ݽṹ��addWord(word), search(word)

addWord(word)�������ݽṹ�����һ�����ʡ���search(word)��֧����ͨ�ĵ��ʲ�ѯ����ֻ����.��a-z�ļ���������ʽ�Ĳ�ѯ��

һ�� . ���Դ���һ���κε���ĸ��

����
���� 1:

����:
  addWord("a")
  search(".")
���: 
  true
���� 2:

����: 
  addWord("bad")
  addWord("dad")
  addWord("mad")
  search("pad")  
  search("bad")  
  search(".ad")  
  search("b..") 
���:
  false
  true
  true
  true 
ע������
�������Ϊ���еĵ��ʶ�ֻ����Сд��ĸ a-z��