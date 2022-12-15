#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> forwardlist1 = {3, 2, 9};
    forward_list<int> forwardlist2 = {8, 1, 2};
    forwardlist1.sort();
    forwardlist2.sort();

    forwardlist1.merge(forwardlist2);

    forward_list<int>::iterator it;
    for (it = forwardlist1.begin(); it != forwardlist1.end(); it++)
        cout << *it << " ";
    cout << endl;
}