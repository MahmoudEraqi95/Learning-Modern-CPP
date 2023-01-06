#include<iostream>
#include<algorithm>
#include<string>
#include "title_case.h"
using namespace std;

int main(){
    
    string s1 = "mahmoud";
    string s2(s1.size(),'.');

   
    transform(s1.begin(), s1.end(), s2.begin(), title_case());
    cout<<s2;
    cout<<endl;
    return 0;
}