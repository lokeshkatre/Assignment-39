#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> fl ;
    fl= {1,1,2,4,5,5,7};
    fl.unique();//consecutive dublicate element removed
    forward_list<int>::iterator it;
    for (it = fl.begin(); it != fl.end(); it++)
        cout << *it << " ";
    cout << endl;
}