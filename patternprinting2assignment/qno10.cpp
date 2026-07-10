#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter row no:";
    cin >> n;
    for (int i = 1; i <= 2*n; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
            int a=i;
            int b=j;
            if(i>n) a=2*n+1-i;
            if(j>n) b=2*n-j;
            if(a==b){
               cout<<"*";
            }
            else if(b<a) cout<<"*";
            else cout<<" ";
        }
        cout << endl;
    } 
}