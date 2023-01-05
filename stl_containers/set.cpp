#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


int main(){
   

    set<int> s1 ={1,2,3,4,5,6,7};
    auto it = s1.begin();
    while(it!=s1.end()){
        cout<<*it<<endl;
        it++;
    }
    cout<<*s1.find(3)<<endl;
    return 0;
}