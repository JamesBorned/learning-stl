#include <iostream>
#include <list>
#include <vector>
using std::cin;
using std::cout;
using std::list;

// list (doubly linked)

template <typename T>
void PrintList(const list<T> &list){
    for (auto i=list.cbegin();i!=list.cend();i++) { // c-const
        cout << *i << '\n';
    }
}

int main() {
    list<int> myList{89, 8339, 55, 44, 56, 89, 89, 89};
    myList.push_back(15); //add to the end of list
    myList.push_front(151); // add to the beginning of list

    list<int>::iterator it = myList.begin();

    myList.pop_back(); //delete the latest item
    myList.pop_front(); // delete the starting item

    //myList.sort();
    //myList.unique(); //delete the duplicate items: 7, 8, 7, 7 -> 7, 8, 7

    PrintList(myList);
    cout << '\n';

    myList.reverse();

    PrintList(myList);

    cout << '\n';
    auto it1 = myList.begin();

    advance(it1, 3); // shift by three
    myList.insert(it1, 111);

    myList.erase(it1);
    PrintList(myList);
    cout << '\n';

    myList.remove(111); // delete item
    PrintList(myList);

    myList.assign(9, 111); // add 9 of 111
    PrintList(myList);

   /* for (auto i = myList.begin(); i != myList.end(); ++i){
        cout << *it << '\n';
    }*/

    return 0;
}
