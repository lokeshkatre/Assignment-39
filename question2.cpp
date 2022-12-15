#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> fl;
    fl.assign({23,4,3,4});
    forward_list<int>::iterator it;
    for (it = fl.begin(); it != fl.end(); it++)
        cout << *it << " ";
    cout << endl;
}