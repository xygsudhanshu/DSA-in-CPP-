#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    for (auto x : s)
    {
        cout << x << " "; // 4 1 3 5 7
    }
    cout << endl;
    if (s.find(10) != s.end())
    cout << "exists";
    else
    cout << "does not exists";
    cout << endl;
    s.erase(4);
    for (auto y : s)
    {
        cout << y << " "; 
    }
    cout << endl;
    cout << s.size() << endl;
}