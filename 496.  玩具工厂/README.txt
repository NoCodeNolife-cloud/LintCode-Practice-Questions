描述
工厂模式是一种常见的设计模式。请实现一个玩具工厂 ToyFactory 用来产生不同的玩具类。可以假设只有猫和狗两种玩具。

样例
例1：

输入：
ToyFactory tf = ToyFactory();
Toy toy = tf.getToy('Dog');
toy.talk(); 
输出：
Wow
例2:

输入：
ToyFactory tf = ToyFactory();
toy = tf.getToy('Cat');
toy.talk();
输出：
Meow