#include<iostream>
#include<list>
using namespace std;

template <class T>
T maxOf(T a, T b){
    return (a>b? a: b);
}
int main(){
    list<int> l = {1,2,3,4,5,6,7,8,9,10};
    auto it = l.begin();
    while(*++it != 5 );
    l.insert(it, 145);
    for(auto i: l)
        cout<<i;
    cout<<endl;    
    cout<<maxOf<int>(5, 6)<<endl;
    return 0;
}