#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class RandomizedSet {
public:
    vector<int> arr;
    unordered_map<int,int> value_to_index;
    RandomizedSet() {
        // do intialization if necessary
    }

    /*
     * @param val: a value to the set
     * @return: true if the set did not already contain the specified element or false
     */
    bool insert(int val) {
        // write your code here
        if(value_to_index.count(val)!=0){
            return false;
        }
        arr.push_back(val);
        value_to_index[val]=arr.size()-1;
        return true;
    }

    /*
     * @param val: a value from the set
     * @return: true if the set contained the specified element or false
     */
    bool remove(int val) {
        // write your code here
        if(arr.size()==0||value_to_index.count(val)==0){
            return false;
        }
        int index=value_to_index[val];
        if (index==arr.size()-1){
            arr.pop_back();
            value_to_index.erase(val);
            return true;
        }
        arr[index]=arr[arr.size()-1];
        value_to_index.erase(arr[arr.size()-1] );
        arr.pop_back();
        return true;
    }

    /*
     * @return: Get a random element from the set
     */
    int getRandom() {
        // write your code here
        return arr[rand()%arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param = obj.insert(val);
 * bool param = obj.remove(val);
 * int param = obj.getRandom();
 */
int main() {
    // 初始化空集set
    RandomizedSet randomSet;

// 1插入set中。返回正确因为1被成功插入
    randomSet.insert(1);

// 返回错误因为2不在set中
    randomSet.remove(2);

// 2插入set中，返回正确，set现在有[1,2]。
    randomSet.insert(2);

// getRandom 应该随机的返回1或2。
    cout << randomSet.getRandom() << endl;

// 从set中移除1，返回正确。set现在有[2]。
    randomSet.remove(1);

// 2已经在set中，返回错误。
    randomSet.insert(2);

// 因为2是set中唯一的数字，所以getRandom总是返回2。
    cout << randomSet.getRandom() << endl;
    return 0;
}
