#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int j = 1; j <= 2*n-1; j++)
        {
            int a=j;
            if(j>=n) a=2*n-a;
            cout <<a;
        }
    cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout <<j;
        }
        
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            
            cout <<" ";
        }
        for (int l = 1; l <= n- i ; l++)
        {
            
            cout <<n-l-i+1;
        }
        cout << endl;
    }
}