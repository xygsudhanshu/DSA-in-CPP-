#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int j = 1; j <= 2*n-1; j++)
        {
            cout <<char(j+64);
        }
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout <<char(j+64);
        }
        
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            
            cout <<" ";
        }
        for (int l = 1; l <= n- i ; l++)
        {
            
            cout <<char(l+64+n+i-1);
        }
        cout << endl;
    }
}