#include <bits/stdc++.h>
using namespace std;
auto start = chrono::steady_clock::now();

int main(){
     vector <int> v1={6,4,8,7,8};
     for(vector <int>::iterator i=v1.begin();i!=v1.end();i++){
         cout<<*i<<endl;
     }
     cout<<"end of vector result"<<endl;
     list <int> a1={6,3,8,9,0,3};
     for(list <int>::iterator i=a1.begin();i!=a1.end();i++){
          cout<<*i<<" ";
     }
     cout<<endl;
     stack <int> s1;
     s1.push(10);
     s1.push(20);
     s1.pop();
     cout<<s1.top()<<endl;
     queue <int> q1;
     q1.emplace(100);
     q1.emplace(200);
     cout<<q1.size()<<endl;
     cout<<q1.front()<<endl;
     set <int> set1={6,87,9,0,87,5,3,3,5,7,8,9};
     for(set <int>::iterator i=set1.begin();i!=set1.end();i++){
          cout<<*i<<" ";
     }
     cout<<endl;
     list <int>::iterator x=a1.begin();
     x++;
     a1.emplace(x,3);
     for(list <int>::iterator i=a1.begin();i!=a1.end();i++){
          cout<<*i<<" ";
     }
     
cout << "\n";
auto end = chrono::steady_clock::now();
auto diff = end - start;
cout << chrono::duration<double, milli>(diff).count() << " ms" << endl;
return 0;
}