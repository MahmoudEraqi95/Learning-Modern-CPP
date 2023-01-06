#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
class accum{
    T _accum = 0;
    accum(){}
    public:
        accum(T n): _accum(n){}
        T operator()(T y){
            _accum += y; 
            return _accum;
             }
};
int main(){
    accum<int> x(7);
    vector<int> vector1 = {1,3,5,7};
    
   
    for(auto it3 = vector1.begin();it3!=vector1.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;
    vector<int> v2(vector1.size());
    transform(vector1.begin(), vector1.end(), v2.begin(), x);
      for(auto it3 = v2.begin();it3!=v2.end();it3++){
        cout<<*it3<<endl;
    }
    /*for(auto it3 = vector1.end();it3!=vector1.begin();it3){
       
        cout<<*--it3<<endl;
    }
    auto it3 = vector1.begin();
    cout<<*(it3+2)<<endl;
    //can do anything bidirectional do+ can access any index*/
    return 0;
}