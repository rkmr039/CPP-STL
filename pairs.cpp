#include<iostream>

using namespace std;

int main()
{
    // pair of country-capital
    pair<string, string> p1;
    pair<string, string> p2;

    // inserting value into pair
    p1 = make_pair("Bharat","Delhi");
    p2 = make_pair("Russia","Moscow");

    // comparison operators can be used between two pairs

    cout<<p1.first<<" : "<<p1.second<<endl;
    cout<<p2.first<<" : "<<p2.second<<endl;


    return 0;
}
