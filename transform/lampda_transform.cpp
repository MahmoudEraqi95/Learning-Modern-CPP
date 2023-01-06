#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int accum = 0;
    auto x = [accum](int d) mutable-> int{return accum += d;};
    vector<int> vector1 = {1,3,5,7};
    
   
    for(auto it3 = vector1.begin();it3!=vector1.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;
    vector<int> v2(vector1.size());
    transform(vector1.begin(), vector1.end(), v2.begin(), x);
      for(auto it3 = v2.begin();it3!=v2.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;
    return 0;
}