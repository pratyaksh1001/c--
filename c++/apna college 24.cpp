#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    /*
    string a;
    getline(cin,a);
    cout<<a<<endl;
    */

   /*
   string str1="hello ";
   string str2="world";
   str1+=str2;
   str1.clear();
   cout<<str1[4];
   */

  //the compare function returns true if the strings are unequal 
  /*
  string s1="abc";
  string s2="abc";
  string s3="";
  cout<<s2.compare(s1)<<endl;
  if(!s1.compare(s2)){
    cout<<"the strings are equal"<<endl;
  }
        if(s3.empty()){
            cout<<"string is empty";
        }
    */
   string s1="pratyaksh";
   s1.erase(2,1);
   cout<<s1<<endl;
   cout<<s1.find("tya")<<endl;
   s1.insert(3,"hello world");
   cout<<s1<<endl;
   cout<<s1.size()<<endl;

   //sub-string function ahead
   string s2="hello my name is pratyaksh karmahe";
   string sub1=s2.substr(6,2);
   cout<<sub1<<endl;

   //numerical string to integer
   string num1="7645";
   int x=stoi(num1);
   cout<<x+10000<<endl;

   //convert any datatype to string
   int y=87645;
   string w=to_string(y);
   cout<<w+"kjrg"<<endl;

   //sorting a string
   //this function sorts the 
    string s6="dengfbrjugnf";
    sort(s6.begin(),s6.end());
    cout<<s6<<endl;

}