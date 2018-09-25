/* Vector : Dynamic Arrays,
            capacity doubles when expands,
            default capacity is 0,
            works well with relational operators,
            capacity dosn't reduces when items are removed
*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> intArray;// dynamic int array with capacity 1
    vector<char> charArray(5);// dynamic char array of capacity 5
    vector<string> strArray(5,"RKMR039"); // dynamic string array of capacity 3, where each value is initialized as "RKMR039"


    // capacity() : returns the capacity of vector
    cout<<"Initial Capacity of intArray: "<<intArray.capacity()<<endl;

    // push_back() : method which can be used to add value th the vector at the end
    intArray.push_back(1);
    intArray.push_back(2);
    intArray.push_back(3);
    intArray.push_back(11);
    intArray.push_back(12);
    intArray.push_back(13);

    // size() return the total number of current elements in vector
    cout<<"Size is: "<<intArray.size()<<endl;
    cout<<"Current Capacity of intArray: "<<intArray.capacity()<<endl;

    cout<<"Removed : "<<endl;
    intArray.pop_back();

    cout<<"Size is: "<<intArray.size()<<endl;
    cout<<"Current Capacity of intArray: "<<intArray.capacity()<<endl;

    for(unsigned int i =0 ; i < intArray.size(); i++) cout<<intArray[i]<<" ";

     // at(x) : returns the value at index x
    cout<<"Value at index 3 : "<<intArray.at(2)<<endl;

    // back() : returns the last value of vector
    cout<<"Last Value : "<< intArray.back()<<endl;

    // front() : returns the first value of vector
    cout<<"First Value : "<<intArray.front()<<endl;

    // clear() : removes all the elements of vector, capacity is not affected

    intArray.clear();
    cout<<endl<<"Size is: "<<intArray.size()<<endl;
    cout<<"Current Capacity of intArray: "<<intArray.capacity()<<endl;


    return 0;
}
