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
};
int student::cls=11;

int main(){
    student r(11,440,"saachi");
    r.details();
    r.calculate_percentage();
}