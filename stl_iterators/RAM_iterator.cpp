#include<iostream>
#include<iterator>
#include<vector>
using namespace std;


int main(){
    
    vector<int> vector1 = {1,3,5,7};
    
   
    for(auto it3 = vector1.begin();it3!=vector1.end();it3++){
        cout<<*it3<<endl;
    }
     
    for(auto it3 = vector1.end();it3!=vector1.begin();it3){
       
        cout<<*--it3<<endl;
    }
    auto it3 = vector1.begin();
    cout<<*(it3+2)<<endl;
    //can do anything bidirectional do+ can access any index
    return 0;
}