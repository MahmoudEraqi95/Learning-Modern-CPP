#include<iostream>
#include<iterator>
#include<set>
using namespace std;


int main(){
    
    set<int> set1 = {1,3,5,7};
    
   
    for(auto it3 = set1.begin();it3!=set1.end();it3++){
        cout<<*it3<<endl;
    }
     
    for(auto it3 = set1.end();it3!=set1.begin();it3){
        //because set1.end() is not actually pointing at the last element, while set1 is pointing at the first elemnent.
        cout<<*--it3<<endl;
    }
    //differece between forward and bidirectional is the bidirectional can iterate backward.
    return 0;
}