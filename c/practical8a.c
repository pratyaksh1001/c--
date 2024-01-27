/*
Write the following programs using switch case statement:
a) To check that an input alphabet is vowel or consonant
*/
#include <stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    int a=0;
    switch (x)
    {
        case 'a':
        a++;
        break;
        case 'e':
        a++;
        break;
        case 'i':
        a++;
        break;
        case 'o':
        a++;
        break;
        case 'u':
        a++;
        break;
        case 'A':
        a++;
        break;
        case 'E':
        a++;
        break;
        case 'I':
        a++;
        break;
        case 'O':
        a++;
        break;
        case 'U':
        a++;
        break;
    }
    if(a==1){
        printf("character is a vowel");
    }
    else{
        printf("character is a consonant");
    }
}