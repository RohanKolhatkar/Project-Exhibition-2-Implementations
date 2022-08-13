// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    cout<<"signup -01 or login-02";
    int x;
    cout<<"choose 1 or 2";
    cin>>x;


    map<string, string> mp;
    // some sample password 
    // mp.insert({ "rohan", "Rohan132"});
    // mp.insert({ "tom", "tom1803#"});
    
    
    if(x==1){
        string x;
        cout<<"enter a username to signup  ";
        cin>>x;
        
        string y;
        cout<<"enter a password to signup  ";
        cin>>y;

        mp.insert({ x, y });
        cout<<"signup succesfully done: now can now login using your credentials \n";
        // x=2;
        
    }
    
    

    
        string x1;
        cout<<"enter a username for login ";
        cin>>x1;
        
        string y1;
        cout<<"enter a password for login  ";
        cin>>y1;
        
        bool flag = true;
        

        if(flag == true){
            for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
                if(itr->first == x1 ){
                    if(itr->second == y1){
                        cout<<"you are succesfully logged in ";
                    }else{
                        cout<<"Username or password is incorrect: Login Failed ";
                        
                    }
                }
                else{
                    cout<<"Username or password is incorrect: Login Failed ";
                }
            }
            

        
        }

    

    

    return 0;
}