#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<string,int>marksmap;
    marksmap["krish"] = 98;
    marksmap["kr"] = 8;
    marksmap["kri"] = 9;

    marksmap.insert({{"abc"s,123},{"dsa",124}});

    map<string,int> :: iterator iter;
    
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    cout<<"The size is: "<<marksmap.size()<<endl;
    cout<<"The size is: "<<marksmap.max_size()<<endl;
    cout<<"The empty is: "<<marksmap.empty()<<endl;
    

return 0;
}