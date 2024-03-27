#include <bits/stdc++.h>
using namespace std;

static int month=0;
static int year=0;
static int interest=7.3;
static int oldinterest=8;
static double net=1000000;

class employee{
     public:
     int empid;
     int sal;
     int accnumber;
     int age;
     int balance;
     string fname;
     string lname;
     employee(int e,int s,int balance2,int age2,int a,string f,string l){
          this->empid=e;
          this->sal=s;
          this->accnumber=a;
          this->fname=f;
          this->lname=l;
          this->age=age2;
          this->balance=balance2;
          net+=balance2;
     }

     int show(){
          cout<<"employee Id is: "<<this->empid<<endl;
          cout<<"the name is: "<<this->fname<<" "<<this->lname<<endl;
          cout<<"the account balance is: "<<this->balance<<endl;
     }

     int pay(){
          this->balance+=this->sal;
          net-=sal;
     }
     
};
void check(vector <employee> e,int id){
     for(int i=0;i<e.size();i++){
          if(e[i].empid==id){
               cout<<"data found !"<<endl;
               printf("name: %s %s\naccount balance: %d\nage: %d",e[1].fname,e[i].lname,e[i].balance,e[i].age);
          }
     }
}

vector <employee> passmonth(vector <employee> v){
     month++;
     for(int i=0;i<v.size();i++){
          v[i].pay();
     }
     if(month%12==0){
          year++;
          month=0;
          //add annual interest for customers
     }
     return v;
}

class customer{
     public:
     double accnumber;
     string fname;
     string lname;
     int balance;
     int age;
     string address;
     char nature;
     int loan_amount;
     customer(int acc,string f,string l,int b,int a,string ad,char n,int la){
          this->accnumber=acc;
          this->fname=f;
          this->lname=l;
          this->balance=b;
          this->age=a;
          this->address=ad;
          this->nature=n;
          this->loan_amount=la;
     }
     int deposit(int x){
          this->balance+=x;
          net+=x;
          cout<<"Successfully deposited !"<<endl<<"the balance is: "<<this->balance<<endl;
     }
     int withdraw(int x){
          if(this->balance/10>x){
               cout<<"you can't draw amount more than "<<this->balance/10<<endl;
          }
          else{
               this->balance-=x;
               net-=x;
               cout<<"transaction successfull !"<<endl<<"the balance is: "<<this->balance<<endl;
          }
     }
     int borrow(int x,int col){
          switch (this->nature){
          case 'g':
               if(x<(0.9*col)){
                    cout<<"loan granted !"<<endl;
                    this->loan_amount=x;
               }
               break;
          case 'd':
               if(x<(0.8*col)){
                    cout<<"loan granted !"<<endl;
                    this->loan_amount=x;
               }
               break;
          case 'b':
               if(x<(0.7*col)){
                    cout<<"loan granted !"<<endl;
                    this->loan_amount=x;
               }
               break;
          }
     }

};

int main(){
     vector <employee> l;
     l.push_back(employee(1,100000,10000,25,587565,"rahul","sharma"));
     l.push_back(employee(2,150000,150000,51,574975,"abcd","sharma"));
     l.push_back(employee(3,20000,100000,28,273559,"xyz","sharma"));
     l.push_back(employee(4,20000,100000,35,684064,"xyzhgj","sharma"));
     for(int i=0;i<l.size();i++){
          l[i].show();
          cout<<endl;
     }
     l=passmonth(l);
     l=passmonth(l);
     cout<<month<<endl;
     for(int i=0;i<l.size();i++){
          l[i].show();
          cout<<endl;
     }
     vector <customer> c;
     c.push_back(customer(345612,"pratyaksh","karmahe",1000000,19,"hello world abcd efgh ijkl",'g',0));
     c[0].deposit(789);
     cout<<net<<endl;
}