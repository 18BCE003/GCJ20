#include <bits/stdc++.h>
#define endl "\n"
#define int long long int
#define N 100
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

signed main() 
{
fast
int test;    
cin>>test;

// defining variables 
int n, mat[N][N], row[N], col[N], trace[N], cont[N]; 

// iterating main loop
for(int main=1; main<=test; main++)
{
   trace[main]=0;
   cin>>n;

    for(int i=1; i<=n; i++)
    {
       cont[i-1]=i;
    }
    int temp[n];

   // Scanning matrix
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           cin>>mat[i][j];
       }
   }

    // Calculating trace of matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                trace[main]+=mat[i][j];
        }
    }


   //finding max number of rows
   row[main]=0;
   for(int p=0; p<n; p++)
   {
       for(int q=0; q<n; q++)
       {
           temp[q]=mat[p][q];

       }

       //sort temp array 
       sort(temp,temp+n);

        // Checking cont matrix and incrementing appropriately
       for(int k=0; k<n; k++)
       {
           if(temp[k]!=cont[k])
           {
               row[main]++; 
               break;
           }
       }
   }

   // for finding max columns 
   col[main]=0;
   for(int i=0; i<n; i++)
   {
       for(int j=0; j<n; j++)
       {
           temp[j]=mat[j][i];
       }

       //sorting array 
       sort(temp,temp+n);

        // applying col logic 
       for(int d=0; d<n; d++)
       {
           if(temp[d]!=cont[d])
           {
               col[main]++; 
               break;
           }
       }
   }
}

// Printing output
for(int i=1; i<=test; i++)
    cout<<"Case #"<<i<<": "<<trace[i]<<" "<<row[i]<<" "<<col[i]<<endl;

}
