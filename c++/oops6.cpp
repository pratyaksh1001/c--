#include <iostream>
#include <string>
using namespace std;

/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

class employee{
    private:
        int emp_id;
        string emp_name;
        int emp_sal;
        int emp_hour;
    public:
    int getinfo(){
        cout<<"the name of employee: "<<this->emp_name<<endl;
        printf("the Id of employee: %d\n",this->emp_id);
        printf("the salary is: %d\n",this->emp_sal);
        printf("the work hour is: %d\n",this->emp_hour);
    }
    int setinfo(int s,int i,int h,string n){
        this->emp_id=i;
        this->emp_sal=s;
        this->emp_name=n;
        this->emp_hour=h;
    }
    int addsal(){
        if(this->emp_sal<500){
            this->emp_sal+=10;
        }
    }
    int addwork(){
        if(this->emp_hour>6){
            for(int i=0;i<this->emp_hour-6;i++){
                this->emp_sal+=5;
            }
        }
    }

};

int main(){
    employee a;
    a.setinfo(100,123,12,"liurgbr");
    a.getinfo();
    a.addsal();
    a.addwork();
    cout<<endl;
    a.getinfo();
}