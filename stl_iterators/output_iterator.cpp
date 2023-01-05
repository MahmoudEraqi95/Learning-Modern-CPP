#include<iostream>
#include<iterator>
using namespace std;


int main(){
    
    auto numbers_array = {1,3,5,7};
    ostream_iterator<int> output(cout, " ");
    for(auto i: numbers_array){
        *output++ = i; 
    }
    return 0;
}