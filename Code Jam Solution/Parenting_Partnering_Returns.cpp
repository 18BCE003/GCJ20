#include<bits/stdc++.h>
#define int long long int
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mpi map<int,int>
#define vpp vector<pair<int,int>>
using namespace std;

signed main()
{
    //for fast I/O
    fast
    // no of test vars
    int test;
    cin>>test;

    // iterating main loop
    for(int j=1; j<=test; j++)
    {
        cout<<"Case #"<<j<<": ";

        // defining variables
        int n;
        cin>>n;
        mpi mp;
        map<pair<int,int>,queue<int>> mpq;
        vpp vp;

        int arr[n];
        for(int i=0; i<n; i++)
        {

            //scanning arr[i] 
            cin>>arr[i];

            int temp;
            cin>>temp;

            // Utilizing map and vp
            mpq[{arr[i],temp}].push(i);
            vp.push_back({arr[i],temp});
        }

        // Sorting vp 
        sort(vp.begin(),vp.end());
        
        // Defining var for pair operations 
        int x=0,y=0;
        // Defining boolean var for flag purpose
        bool b=true;
        char query[n];// main answer


        for(int i=0; i<n; i++)
        {

            // if logic for pair
            if(x<=vp[i].first)
            {
                x=vp[i].second;
                query[mpq[{vp[i].first,vp[i].second}].front()]='C';
                mpq[{vp[i].first,vp[i].second}].pop();
            }

            //else if logic  
            else if(y<=vp[i].first)
            {
                y=vp[i].second;
                query[mpq[{vp[i].first,vp[i].second}].front()]='J';
                mpq[{vp[i].first,vp[i].second}].pop();
            }

            //condition for flag
            else
            {
                b=false;
                break;
            }
        }

        // if b is true 
        if(b==true)
        {
            for(int i=0;i<n;i++)
            {
                cout<<query[i];
            }
            cout<<endl;
        }
        else 
            cout<<"IMPOSSIBLE"<<endl;
    }
}