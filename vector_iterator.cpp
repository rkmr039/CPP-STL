
#include<iostream>
#include<vector>

using namespace std;

void traverse(vector<int> v)
{
	vector<int>:: iterator it;
	for(it = v.begin(); it != v.end(); ++it)
		 cout<< *it <<' ';
    cout<<endl;
    for(unsigned int i=0 ;i<v.size();i++)
        cout<<v.at(i)<<" ";
    cout<<endl;
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }
    cout<<endl;
}

int main()
{
    vector<int> intArray;
    
    intArray.push_back(1);
    intArray.push_back(2);
    intArray.push_back(3);
    intArray.push_back(11);
    intArray.push_back(12);
    intArray.push_back(13);
    
    vector<int> iterator it = intArray.begin(); // points at intArray[0]
    
    // insert value/item using iterator
    // insert at index 2
    intArray.insert(it + 2, 99);
    
    vector <int> v;
	vector<int>:: iterator it;

	v.push_back(5);
	while(v.back() > 0)
		v.push_back(v.back() - 1);
	traverse(v);

    


    return 0;
}
