#include<iostream>
#include<array>

using namespace std;

int main()
{

    array<int,5> intArray = {1,2,3,4,5};
    array<int,5> intArray2 = {11,12,13,14,15};
    cout<<"Element at index 3: "<<intArray.at(3)<<endl; // works similar as intArray[3 but faster
    // for out of range index intArray[] gives garbage value but at() raise exception and terminates the program


    // size() : returns the size of array
    cout<<"Size of array: "<<intArray.size()<<endl;
    
    
    // front() : returns the first array element
    cout<<"Front item: "<<intArray.front()<<endl;

    // back() : returns the last array element
    cout<<"Last item: "<<intArray.back()<<endl;

    // fill(x) : fill the entire array with x
    intArray.fill(5);
    cout<<intArray[1]<<" "<<intArray[2]<<" "<<intArray[3]<<endl;

    // swap(array) : swaps corresponding elements of two array having same size and data type
    intArray.swap(intArray2);
    cout<<intArray2[1]<<" "<<intArray2[2]<<" "<<intArray2[3]<<endl;

    return 0;
}
