#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int i = 1; i <= 2*n+1; i++)
    {
        for (int j = 1; j <=2* n + 1; j++)
        {
            int a=i;
            int b=j;
            if(i>=n+1) a=2*n+2-i;
            if(j>=n+1) b=2*n+2-j;
            if(a+b==n+2||a==n+1||b==n+1) cout<<"*";
            else cout <<" ";
        }
        cout << endl;
    }
}