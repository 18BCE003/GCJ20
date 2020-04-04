#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;

signed main()
{
    fast  
    int test;
    cin>>test;
    for(int x=0; x<test; x++)
    {
        int n,k;
        cin>>n>>k;

        //various cases
        if(n==2)
        {
            if(k==3)
            cout<<"Case #"<<(x+1)<<": IMPOSSIBLE"<<endl;
            else
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                if(k==4)
                {
                    cout<<"2 1"<<endl;
                    cout<<"1 2"<<endl;
                }
                if(k==2)
                {
                    cout<<"1 2"<<endl;
                    cout<<"2 1"<<endl;
                }
            }
        }

        //various cases
        else if(n==3)
        {
            if(k==3)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 2 3"<<endl;
                cout<<"3 1 2"<<endl;
                cout<<"2 3 1"<<endl;
            }

            //various cases

            else if(k==6)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"2 1 3"<<endl;
                cout<<"3 2 1"<<endl;
                cout<<"1 3 2"<<endl;
            }

            //various cases
            else if(k==9)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"3 1 2"<<endl;
                cout<<"2 3 1"<<endl;
                cout<<"1 2 3"<<endl;
            }
            else
            cout<<"Case #"<<(x+1)<<": IMPOSSIBLE"<<endl;
        }

        //various cases
        else if(n==4)
        {
            if(k==4)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"2 1 4 3"<<endl;
                cout<<"3 4 1 2"<<endl;
                cout<<"4 3 2 1"<<endl;
            }

            //various cases
            else if(k==6)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"2 1 4 3"<<endl;
                cout<<"3 4 2 1"<<endl;
                cout<<"4 3 1 2"<<endl;
            }

            //various cases
            else if(k==7)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"3 1 4 2"<<endl;
                cout<<"4 3 2 1"<<endl;
                cout<<"2 4 1 3"<<endl;
            }

            //various cases
            else if(k==8)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"4 1 2 3"<<endl;
                cout<<"3 4 1 2"<<endl;
            }
            else if(k==9)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 4 2 3"<<endl;
                cout<<"3 1 4 2"<<endl;
                cout<<"4 2 3 1"<<endl;
                cout<<"2 3 1 4"<<endl;
            }

            //various cases
            else if(k==10)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 4 3 2"<<endl;
                cout<<"4 1 2 3"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"3 2 1 4"<<endl;
            }

            //various cases
            else if(k==11)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 4 3 2"<<endl;
                cout<<"4 2 1 3"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"3 1 2 4"<<endl;
            }

            //various cases
            else if(k==12)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"3 4 1 2"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"1 2 3 4"<<endl;
                cout<<"4 1 2 3"<<endl;
            }

            //various cases
            else if(k==13)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"2 4 3 1"<<endl;
                cout<<"4 3 1 2"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"3 1 2 4"<<endl;
            }

            //various cases
            else if(k==14)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"3 4 2 1"<<endl;
                cout<<"4 3 1 2"<<endl;
                cout<<"1 2 4 3"<<endl;
                cout<<"2 1 3 4"<<endl;
            }

            //various cases
            else if(k==16)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"4 1 2 3"<<endl;
                cout<<"3 4 1 2"<<endl;
                cout<<"2 3 4 1"<<endl;
                cout<<"1 2 3 4"<<endl;
            }
            else
            cout<<"Case #"<<(x+1)<<": IMPOSSIBLE"<<endl;
        }
        else if(n==5)
        {

            //various cases
            if(k==5)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 2 3 4 5"<<endl;
                cout<<"5 1 2 3 4"<<endl;
                cout<<"4 5 1 2 3"<<endl;
                cout<<"3 4 5 1 2"<<endl;
                cout<<"2 3 4 5 1"<<endl;
            }

            //various cases
            else if(k==7)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 4 3 2 5"<<endl;
                cout<<"2 1 4 5 3"<<endl;
                cout<<"5 3 2 4 1"<<endl;
                cout<<"3 2 5 1 4"<<endl;
                cout<<"4 5 1 3 2"<<endl;
            }

            //various cases
            else if(k==8)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"1 5 3 2 4"<<endl;
                cout<<"5 3 2 4 1"<<endl;
                cout<<"4 2 1 3 5"<<endl;
                cout<<"2 4 5 1 3"<<endl;
                cout<<"3 1 4 5 2"<<endl;
            }
            else if(k==9)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"3 4 2 1 5"<<endl;
                cout<<"1 2 3 5 4"<<endl;
                cout<<"5 3 1 4 2"<<endl;
                cout<<"4 1 5 2 3"<<endl;
                cout<<"2 5 4 3 1"<<endl;
            }
            //various cases
            else if(k==10)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"2 3 4 5 1"<<endl;
                cout<<"1 2 3 4 5"<<endl;
                cout<<"5 1 2 3 4"<<endl;
                cout<<"4 5 1 2 3"<<endl;
                cout<<"3 4 5 1 2"<<endl;
            }

            //various cases
            else if(k==11)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"3 1 5 4 2"<<endl;
                cout<<"2 3 4 1 5"<<endl;
                cout<<"1 5 2 3 4"<<endl;
                cout<<"5 4 1 2 3"<<endl;
                cout<<"4 2 3 5 1"<<endl;
            }
            else if(k==12)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 4 1 3 2"<<endl;
                cout<<"1 2 5 4 3"<<endl;
                cout<<"2 1 3 5 4"<<endl;
                cout<<"4 3 2 1 5"<<endl;
                cout<<"3 5 4 2 1"<<endl;
            }
            else if(k==13)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 1 2 4 3"<<endl;
                cout<<"2 3 1 5 4"<<endl;
                cout<<"1 4 3 2 5"<<endl;
                cout<<"3 5 4 1 2"<<endl;
                cout<<"4 2 5 3 1"<<endl;
            }
            //various cases
            else if(k==14)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 1 2 4 3"<<endl;
                cout<<"3 4 1 5 2"<<endl;
                cout<<"1 5 3 2 4"<<endl;
                cout<<"2 3 4 1 5"<<endl;
                cout<<"4 2 5 3 1"<<endl;
            }
            else if(k==15)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 4 1 3"<<endl;
                cout<<"1 4 5 3 2"<<endl;
                cout<<"3 5 1 2 4"<<endl;
                cout<<"2 1 3 4 5"<<endl;
                cout<<"4 3 2 5 1"<<endl;
            }
            else if(k==16)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 3 1 4"<<endl;
                cout<<"1 5 4 3 2"<<endl;
                cout<<"3 4 1 2 5"<<endl;
                cout<<"2 1 5 4 3"<<endl;
                cout<<"4 3 2 5 1"<<endl;
            }
            //various cases
            else if(k==17)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 4 1 3"<<endl;
                cout<<"3 5 1 2 4"<<endl;
                cout<<"4 1 2 3 5"<<endl;
                cout<<"1 3 5 4 2"<<endl;
                cout<<"2 4 3 5 1"<<endl;
            }
            else if(k==18)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 1 3 4"<<endl;
                cout<<"1 5 4 2 3"<<endl;
                cout<<"2 4 3 1 5"<<endl;
                cout<<"3 1 5 4 2"<<endl;
                cout<<"4 3 2 5 1"<<endl;
            }
            //various cases
            else if(k==19)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 1 3 2 4"<<endl;
                cout<<"4 5 2 1 3"<<endl;
                cout<<"1 3 4 5 2"<<endl;
                cout<<"3 2 1 4 5"<<endl;
                cout<<"2 4 5 3 1"<<endl;
            }
            else if(k==20)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 1 3 4"<<endl;
                cout<<"4 5 2 1 3"<<endl;
                cout<<"3 1 4 2 5"<<endl;
                cout<<"2 3 5 4 1"<<endl;
                cout<<"1 4 3 5 2"<<endl;
            }
            //various cases
            else if(k==21)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 2 1 3 4"<<endl;
                cout<<"4 5 3 2 1"<<endl;
                cout<<"2 3 4 1 5"<<endl;
                cout<<"3 1 5 4 2"<<endl;
                cout<<"1 4 2 5 3"<<endl;
            }
            else if(k==22)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 4 3 2 1"<<endl;
                cout<<"4 5 1 3 2"<<endl;
                cout<<"2 1 4 5 3"<<endl;
                cout<<"1 3 2 4 5"<<endl;
                cout<<"3 2 5 1 4"<<endl;
            }
            //various cases
            else if(k==23)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 3 4 1 2"<<endl;
                cout<<"4 5 2 3 1"<<endl;
                cout<<"1 4 5 2 3"<<endl;
                cout<<"3 2 1 4 5"<<endl;
                cout<<"2 1 3 5 4"<<endl;
            }
            else if(k==25)
            {
                cout<<"Case #"<<(x+1)<<": POSSIBLE"<<endl;
                cout<<"5 1 2 3 4"<<endl;
                cout<<"4 5 1 2 3"<<endl;
                cout<<"3 4 5 1 2"<<endl;
                cout<<"2 3 4 5 1"<<endl;
                cout<<"1 2 3 4 5"<<endl;
            }
            //various cases
            else
            cout<<"Case #"<<(x+1)<<": IMPOSSIBLE"<<endl;
        }
    }
    
}


