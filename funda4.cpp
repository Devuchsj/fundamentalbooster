#include <iostream>
using namespace std;
int main() 
{
    char a,b;
    cout<<"Enter an alphabet: ";
    cin>>a;
    b=(a=='a'||a =='e'||a =='i'||a =='o'||a=='u');
    if(b)
        cout<<" It is vowel.";
    else
        cout<<" It is consonant.";
}
