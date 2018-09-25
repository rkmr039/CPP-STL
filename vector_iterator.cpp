
#include<iostream>
#include<vector>

using namespace std;

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
    //vector<int> iterator it2 

    


    return 0;
}
