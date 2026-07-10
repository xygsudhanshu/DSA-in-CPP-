#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    // for (int i = 1; i <= n+1; i++)
    // {
    //    for (int j = 1; j <= i; j++)
    //    {
    //       if(i%2==0) cout<<(char)(64+j)<<" ";
    //       else cout<<j<<" ";
    //    }
    //    cout<<endl;
    // }

    for (int i = 1; i <= n; ++i)
    {

        if (i % 2 == 1)

            for (int j = 1; j <= i; ++j)
            {

                cout << j << " ";
            }

        else

            for (int j = 1; j <= i; ++j)
            {

                cout << (char)('A' + j - 1) << " ";
            }

        cout << endl;
    }

    return 0;
}
