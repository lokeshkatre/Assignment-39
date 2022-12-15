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
    forward_list<int>::iterator it;
    for (it = fl.begin(); it != fl.end(); it++)
        cout << *it << " ";
    cout << endl;
}