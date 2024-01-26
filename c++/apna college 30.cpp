#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a="hgseejgybuelvuwuoarngbfshcdbsdjgtfxyaunfbg";
    sort(a.begin(),a.end());
    string l[54];
    int l2[54]={0};
    /*

    for(int i=0;i<26;i++){
        l[i]='a'+i;
    }
    int j=0;
    for(int i=25;i<54;i++){
        l[i]='A'+j;
        j++;
    }

    */

    for(int i=0;i<a.length();i++){
        int count=0;
            for(int f=0;f<54;i++){
                if(a[i]==l[f]){
                    count++;
                    l2[f]=count;
                }
            }
    }
    for(int k=0;k<54;k++){
        printf("the count of %c is %d\n",l[k],l2[k]);
    }
}