/*=================================== List ===================================



          bidirectional, linear list
          can be access sequentially only
          can access from front to back or back to front


==============================================================================*/
#include<iostream>
#include<list>

using namespace std;

int main()
{

    list<int> l1; // empty list
    list<int> l2 = {1,22,13,49,5};
    list<int>:: iterator it = l2.begin();

    l2.push_back(6);
    l2.push_front(0);

    while(it != l2.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<"\nSize of list2 : "<<l2.size()<<endl;

    l2.pop_back();
    l2.pop_front();

    l2.sort();


    cout<<endl<<"After Sorting "<<endl;
    list<int>:: iterator it2 = l2.begin();
    while(it2 != l2.end())
    {
        cout<<*it2<<" ";it2++;
    }
    cout<<"\nSize of list2 : "<<l2.size()<<endl;

    return 0;
}
