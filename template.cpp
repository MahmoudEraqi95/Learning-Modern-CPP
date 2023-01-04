#include<iostream>
using namespace std;

template <class T>
T maxOf(T a, T b){
    return (a>b? a: b);
}
int main(){
    cout<<maxOf<int>(5, 6)<<endl;
    return 0;
}