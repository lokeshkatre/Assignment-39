#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5};
    forward_list<int> fl2{6, 7, 8, 9, 10};
    
    fl.swap(fl2);
    cout<<"After swap:"<<endl;
    forward_list<int>::iterator it;
    for (it = fl.begin(); it != fl.end(); it++)
        cout << *it << " ";
    cout << endl;

    for (it = fl2.begin(); it != fl2.end(); it++)
        cout << *it << " ";
    cout << endl;
}