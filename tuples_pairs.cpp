#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    // pair of country-capital
    pair<string, string> p1;
    pair<string, string> p2;

    // assigning value to pair
    p1 = make_pair("Bharat","Delhi");
    p2 = make_pair("Russia","Moscow");

    // comparison operators can be used between two pairs and tuples

    cout<<p1.first<<" : "<<p1.second<<endl;
    cout<<p2.first<<" : "<<p2.second<<endl;


    // tuple for storing country, capital and std code
    tuple<string,string,int> t1;
    t1 = make_tuple("Bharat","Delhi",91);

    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1);


    return 0;
}
