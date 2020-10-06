#include <iostream>
#include <string>
#include <deque>

using std::string; using std::deque; using std::cout; using std::cin; using std::endl;



int main()
{
    deque<string> input;
    for (string str; cin >> str; input.push_back(str));
    // this is typical for input


    // use iterators be careful of ++iter
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
        cout << *iter << endl;

    return 0;
}

// also , use ctrl +z  to jump out of the loop, type it On the new line
