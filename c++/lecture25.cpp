#include <bits/stdc++.h>
using namespace std;

// create a program with a func pointer to handle start stop and next

void start()
{
    cout << "start" << endl;
}
void stop()
{
    cout << "stop!" << endl;
}
void change()
{
    cout << "change" << endl;
}

// this line defined a function called execute command 
void history(vector<string> x){
    x.pop_back();
    int n=x.size();
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    }
}
int main(){
    vector<string> arr;
    void (*pointer)();
    bool a=true;
// this line defined a function called execute command 
// it can point to different function 
// vector is used to keep history
// this line calls a function the command pointer is pointing to 
    while(a){
        int x;
        cin>>x;
        switch (x){
        case 1:
           pointer=start;
           arr.push_back("start");
            break;
        case 2:
            pointer=change;
            arr.push_back("change");
            break;
        case 3:
            pointer=stop;
            arr.push_back("stop");
            
            break;
        case 4:
            history(arr);
            break;
        default:
            a=false;
            break;
        }
        if(a){
            pointer();
        }
    }
    return 0;
}