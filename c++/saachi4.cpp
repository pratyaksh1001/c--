#include <bits/stdc++.h>
using namespace std;

class student {
    private:
    int roll_number;
    string name;
    float score;
    public:
    static int cls;
    student(int r,int s, string n){
        roll_number=r;
        score=s;
        name=n;
    }
    void details(){
        cout<<"name = "<< name << endl<< "roll number= "<< roll_number <<endl<<"score= "<<score<< endl;
    }
    void calculate_percentage(){
        cout<<(score)/500*100<<endl;
    }
    student(student &x){
        roll_number=x.roll_number;
        score=x.score;
        name=x.name;
    }
    void change(){
        name="hello";
    }
};
int student::cls=11;

int main(){
    student s1(1,100,"saachi");
    student s2(s1);
    s1.change();
    s2.details();
    s1.details();
}