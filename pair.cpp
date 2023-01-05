#include<iostream>
#include<utility>
#include<tuple>
using namespace std;


int main(){
   

    pair<int, string> p(15, "Mahmoud");
    cout<<p.first<<endl<<p.second<<endl;
    tuple<int, int, string> t(15,20, "Mahmoud");
    cout<<get<0>(t)<<get<1>(t)<<get<2>(t)<<endl;
    return 0;
}