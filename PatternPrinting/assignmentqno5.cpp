#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int i = 1; i <=2*n-1; i++)
    {
        int a=i;
        if(i>=n) a=2*n-i;
       for (int j = 1; j <= a; j++)
       {
          cout<<"* ";
       }
      
       cout<<endl;
    }
}