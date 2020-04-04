#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

signed main()
{
    int test,n;
    cin>>test>>n;

    //iterate loop
    for(int i=1; i<=test; i++)
    {
        int arr[n];
        char c;

        //iterate inner loop
        for (int j=0; j<n; j++)
        {
            //print appropriately
            cout<<j+1<<endl;
            cin>>arr[j];
        }

        //iterate 2 inner loop
        for(int k=0; k<n; k++)
        {
            cout<<arr[k];
        }

        // print new line
        cout<<endl;
        cin>>c;
        if(c=='N') 
            break;
    }
}