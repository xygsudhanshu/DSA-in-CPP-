#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2* n - 1; j++)
        {
            int b=j;
            if(j>=n) b=2*n-j;
            if(i+b==n+1) cout<<i;
            else cout <<" ";
        }
        cout << endl;
    }
}