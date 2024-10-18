#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    char data[70];
    ofstream outfile;
    outfile.open("file.dat");
    cout<< "writing to the file "<<endl;
    cout<<"enter your name ";
    cin.getline(data , 70);
    outfile<<data<<endl;
    cout<<"enter your age ";
    cin>>data;
    cin.ignore();
    outfile<<data<<endl;
    outfile.close();
    ifstream infile;
    infile.open("file.dat");
    cout<<"reading from the file "<<endl;
    infile>>data;
    cout<<data<<endl;
    infile>>data;
    cout<<data<<endl;
    infile.close();
    return 0;

}