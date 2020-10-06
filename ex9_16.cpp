#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> v1(5,5);
    vector<int> v3(4,5);
    list<int>   li{ 1, 2, 3, 4, 5 };
    // vector can compare derectly
    cout << (v1 == v3 ? "true" : "false") << endl;

    //convert list to vector
    cout << (vector<int>(li.begin(),li.end())==v1? "true" : "false")<<endl;

}


