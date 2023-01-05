#include<iostream>
#include<iterator>
#include<forward_list>
using namespace std;


int main(){
    
    forward_list<int> fr_list = {1,3,5,7};
    forward_list<int>::iterator it1;
    it1 = fr_list.end();
    //it1-- won't work as it's the end of the list.
    for(auto i: fr_list){
        cout<<i;
    }
    return 0;
}