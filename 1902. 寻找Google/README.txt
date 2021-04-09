给您一个字符串形式的C ++文件（每行是一个字符串），我们希望您在注释行中找到“ Google”。如果注释行中有“ Google”，则返回true，否则返回false。
C++有两种注释方式，一种是单行注释 //，代表着//后面的本行内容均为注释，另一种是多行注释，/*和*/ 这两者之间的部分均为注释。

样例
输入: 
S = ["#include<bits/stdc++.h>","using namespace std;","//Google test","int main(){","return 0;","}"]
输出: 
true
输入: 
S = ["#include<bits/stdc++.h>","using namespace std;","int main(){","int Google = 0","return 0;","}"]
输出: 
false
说明: 
google不在注释行内。
注意事项
保证“Google”字符串在一个string内，不会换行