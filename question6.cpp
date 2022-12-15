#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> fl ;
    int n=10;
    while(n)
    {
        fl.push_front(n--);
    }

    forward_list<int> fl2{32,4,53,5};
    fl2.merge(fl);
    forward_list<int>::iterator it;
    for (it = fl2.begin(); it != fl2.end(); it++)
        cout << *it << " ";
    cout << endl;
}