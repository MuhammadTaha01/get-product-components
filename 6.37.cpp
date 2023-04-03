#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s=1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Product components of "<<n<<" are: "<<endl;
    for(i=n; i>=s; i--)
        for(j=1; j<=n; j++)
    {
        if(i*j==n)
        {
            cout<<i<<" * "<<j<<endl;
            s= j+1;
        }
    }
    return 0;
}
