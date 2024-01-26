//inclusion and excluion 1
//find the number of students in class if n1 went for sub1 
//n2 went for sub2 and n3 went for both
#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    printf("the number of students in class are: %d",(n2+n1)-n3);

}