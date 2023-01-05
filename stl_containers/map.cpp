#include<iostream>
#include<map>
using namespace std;

template<class T>
void print_map(T my_map){
for(auto m: my_map){
        cout<<m.first<<" : "<<m.second<<endl;
    }
}
int main(){
   

    map<int, int> my_map ={{1,5}, {2,6}, {3,8}};
    multimap<int, int> my_multimap ={{1,5}, {2,6}, {3,8}};
    my_map.insert({1,5});
    my_multimap.insert({1,5});
    print_map(my_map);
    print_map(my_multimap);
    return 0;
}