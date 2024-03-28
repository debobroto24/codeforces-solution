

    #include<bits/stdc++.h>
#include <cmath>
    using namespace std;
    void sol(){
       
       int n,h,i;
       cin>>n>>h;
       vector<int>v;
       int innn;
       for(i=1;i<=n;i++){
        cin>>innn;
        v.push_back(innn);

       }
       sort(v.begin(),v.end());
       int fone = v[n-2];
       int sone = v[n-1];
       int ans = 0;
       if(h<=sone){
        cout<<1<<endl;
        return;
       }
       ans+= 2 * (h/(fone+sone));

       if(h%(fone+sone)==0)ans+=0;
       else if((h%(fone+sone))<= sone) ans+=1;
       else ans+=2;

       cout<<ans<<endl;

        
       return;
    }


    int main() {
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin); 
        freopen("output1.txt","w",stdout); 
        freopen("Error.txt", "w", stderr);
    #endif
        int t; cin>>t;
        while(t--){
            sol();
         
        }
        return 0;

    }


