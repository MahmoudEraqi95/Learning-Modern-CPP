#include<iostream>
#include<iterator>
using namespace std;


int main(){
    
    int first_number = 0;
    int secondNumber = 0;
    cout<<"enter numbers:"<<flush;
    cin.clear();
    istream_iterator<int> eos;
    istream_iterator<int> iint(cin);
    if (iint == eos)
    {
        cout<<"stream ended";
        return 0;
    
    }
    else{
        first_number = *iint++;
    }
    
    if (iint == eos)
    {
        cout<<"stream ended";
        return 0;
    }
    else{
        secondNumber = *iint++;
    }
    cin.clear();
    cout<<first_number<<" "<<secondNumber<<endl;

    return 0;
}