#include<iostream>
#include<algorithm>
#include<string>
#include "title_case.h"
using namespace std;

template<class T>
class embiggen{
    T accum = 1;
    public:
          T operator()(const T & t, const T & t1){return accum = t*t1*accum;}

};

template<class V>
void print_vector(vector<V> vector){
  for (auto i :vector){
    cout<<i<<" ";
  }
  cout<<endl;
}

int main(){
    
    vector<int> vector1 = {1,3,5,7};
    vector<int> vector2 = {1,3,5,7};
    vector<int> vector3 = {0,0,0,0};
    embiggen<long> fun;

    transform(vector1.begin(), vector1.end(), vector2.begin(), vector3.begin(), fun);
    print_vector(vector3);
    return 0;
}