#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l;
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(2);
    forward_list<int>::iterator it;
    for (it = l.begin(); it != l.end();it++)
        cout << *it << " ";
    cout << endl;
}