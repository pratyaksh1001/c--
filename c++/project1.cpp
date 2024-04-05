#include <bits/stdc++.h>
using namespace std;
static int month=0;
static int year=0;
static float interest=7.3;
static float oldinterest=8;
static float loanint=10;
static int net=1000000;
static string pass="pratyaksh";

class customer{
     public:
     double accnumber;
     int sal;
     int fix;
     string fname;
     string lname;
     int balance;
     int age;
     string address;
     char nature;
     int loan_amount;
     /*int installments;
     int loantime;*/
     customer(int acc,int s,int fd,string f,string l,int b,int a,string ad,char n,int la){
          this->accnumber=acc;
          this->sal=s;
          this->fix=fd;
          this->fname=f;
          this->lname=l;
          this->balance=b;
          this->age=a;
          this->address=ad;
          this->nature=n;
          this->loan_amount=la;
          /*this->installments=ins;
          this->loantime=lt;*/
     }
     int show(){
          cout<<"account number is: "<<this->accnumber<<endl;
          cout<<"name is: "<<this->fname<<" "<<this->lname<<endl;
          cout<<"balance is: "<<this->balance<<endl;
          cout<<"loan amount left to repay is: "<<this->loan_amount<<endl;
          cout<<"the fix-deposit is: "<<this->fix<<endl;
     }
     int deposit(int x){
          this->fix+=x;
          net+=x;
          cout<<"Successfully deposited !"<<endl<<"the total fix-deposit is: "<<this->fix<<endl;
     }

     int add(int x){
          this->balance+=x;
          net+=x;
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
                    net-=x;
               }
               break;
          case 'd':
               if(x<(0.8*col)){
                    cout<<"loan granted !"<<endl;
                    this->loan_amount=x;
                    net-=x;
               }
               break;
          case 'b':
               if(x<(0.7*col)){
                    cout<<"loan granted !"<<endl;
                    this->loan_amount=x;
                    net-=x;
               }
               break;
          }
     }
     int loanrepay(int x){
          this->loan_amount-=x;
          this->balance-=x;
          net+=x;
     }
};

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
          cout<<"the age is: "<<this->age<<endl;
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

vector <customer> passyear(vector <customer> c){
     for(int i=0;i<c.size();i++){
          if(c[i].age>60){
               c[i].fix=c[i].fix+(c[i].fix*(interest/100));
          }
          else{
               c[i].fix+=((c[i].fix*interest)/100);
          }
     }
     return c;
}

vector <employee> passmonth(vector <employee> v){
     month++;
     for(int i=0;i<v.size();i++){
          v[i].pay();
     }
     
     return v;
}

vector <customer> passmonthloan(vector <customer> c){
     if(month%3==0){
          for(int i=0;i<c.size();i++){
               c[i].loan_amount+=(c[i].loan_amount*loanint/100);
          }
          return c;
     }
     else{
          return c;
     }
}
vector <customer> custsalary(vector <customer> c){
     for(int i=0;i<c.size();i++){
          c[i].balance+=c[i].sal;
     }
     return c;
}
int view(vector <customer> c){
     for(int i=0;i<c.size();i++){
          cout<<"account number: "<<c[i].accnumber<<endl;
          cout<<"name : "<<c[i].fname<<" "<<c[i].lname<<endl<<endl;
     }
     cout<<endl;
}

int main(){
     vector <employee> emplist;
     vector <customer> custlist;
     emplist.push_back(employee(1,100000,200000,25,654321,"Rahul","Sharma"));
     emplist.push_back(employee(2,120000,408000,30,654321,"Rohit","Sharma"));
     emplist.push_back(employee(3,105000,250000,28,654321,"Mahendra","Singh Dhoni"));
     emplist.push_back(employee(4,150000,1200100,35,654321,"Hardik","Pandya"));
     custlist.push_back(customer(123456,100000,10000,"abcdef","hjkl",110000,20,"hello world abcdrf",'g',0));
     custlist.push_back(customer(234567,50000,200000,"kfhbsr","lwiure",21000,30,"hello world abcdrf",'d',0));
     custlist.push_back(customer(345678,125000,80000,"knhfgg","lewyu",800100,25,"hello world abcdrf",'b',0));
     custlist.push_back(customer(456789,300000,120000,"oytehjrf","iyet",200000,80,"hello world abcdrf",'g',0));
     while(true){
          int a;
          cout<<"enter 1 to enter details of new employee"<<endl;
          cout<<"enter 2 to view details of employee"<<endl;
          cout<<"enter 3 to check your balance"<<endl;
          cout<<"enter 4 to view all your details"<<endl;
          cout<<"enter 5 to fix-deposit"<<endl;
          cout<<"enter 6 to add money to account: "<<endl;
          cout<<"enter 7 to withdraw"<<endl;
          cout<<"enter 8 to take a loan"<<endl;
          cout<<"enter 9 to repay loan amount"<<endl;
          cout<<"enter 10 to pass a month"<<endl;
          cout<<"enter 11 to view the net capital under bank"<<endl;
          cout<<"enter any other number to exit"<<endl;
          fflush(stdin);
          cin>>a;
          cout<<endl;
          if(a==1){
               int a,b,e,s,age;
               string f,l;
               cout<<"enter the employee id: ";
               cin>>e;
               cout<<"enter the salary: ";
               cin>>s;
               cout<<"enter the account balance: ";
               cin>>b;
               cout<<"enter account number: ";
               cin>>a;
               cout<<"enter the age: ";
               cin>>age;
               cout<<"enter the name: ";
               fflush(stdin);
               cin>>f;
               cin>>l;
               emplist.push_back(employee(e,s,b,age,a,f,l));
               cout<<endl;
          }
          else if(a==2){
               for(int i=0;i<emplist.size();i++){
                    emplist[i].show();
               }
               cout<<endl;
          }
          else if(a==3){
               int x;
               cout<<"enter the account number: ";
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         custlist[i].show();
                    }
               }
               cout<<endl;
          }
          else if(a==4){
               view(custlist);
               int a;
               cout<<"enter your account number: ";
               fflush(stdin);
               cin>>a;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==a){
                         custlist[i].show();
                         cout<<endl;
                    }
               }
               cout<<endl;
          }
          else if(a==5){
               int x;
               cout<<"enter the account number: ";
               fflush(stdin);
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         int y;
                         cout<<"enter the amount you want to deposit: ";
                         fflush(stdin);
                         cin>>y;
                         custlist[i].deposit(y);
                    }
               }
               cout<<endl;
          }
          else if(a==6){
               int x;
               cout<<"enter the account number: ";
               fflush(stdin);
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         int y;
                         cout<<"enter the amountfor fix-deposit: ";
                         fflush(stdin);
                         cin>>y;
                         custlist[i].deposit(y);
                    }
               }
               cout<<endl;
          }

          else if(a==7){
               int x;
               cout<<"enter the account number: ";
               fflush(stdin);
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         int y;
                         cout<<"enter the amount you want to withdraw: ";
                         fflush(stdin);
                         cin>>y;
                         custlist[i].withdraw(y);
                    }
               }
               cout<<endl;
          }
          else if(a==8){
               int x;
               cout<<"enter the account number: ";
               fflush(stdin);
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         int y;
                         int c;
                         cout<<"enter the collateral's value: ";
                         fflush(stdin);
                         cin>>c;
                         cout<<"enter the loan amount: ";
                         cin>>y;
                         custlist[i].borrow(y,c);
                    }
               }
               cout<<endl;
          }
          else if(a==9){
               int x;
               cout<<"enter the account number: ";
               fflush(stdin);
               cin>>x;
               for(int i=0;i<custlist.size();i++){
                    if(custlist[i].accnumber==x){
                         int y;
                         cout<<"enter the amount that you want to repay: ";
                         fflush(stdin);
                         cin>>y;
                         custlist[i].loanrepay(y);
                    }
               }
               cout<<endl;
          }
          else if(a==10){
               emplist=passmonth(emplist);
               custlist=passmonthloan(custlist);
               custlist=custsalary(custlist);
               if(month%12==0){
                    year++;
                    month=0;
                    custlist=passyear(custlist);
               }
               cout<<endl;
          }

          else if(a==11){
               cout<<"the net capital under bank is: "<<net<<endl<<endl;
          }
          else{
               break;
          }
     }
}