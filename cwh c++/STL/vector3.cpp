#include<iostream>
#include<vector>

using namespace std;
template <class T>
    
    void display(vector<T> &v){
        for (int i = 0; i < v.size(); i++)
        {
                cout<<v[i]<<" ";
                // cout<<v.at(i)<<" ";

        }
        cout<<endl;   
    }

int main(){

    vector<int>vec1;//int zero length
    vector<char>vec2(4);//char
    vector<char>vec3(vec2);
    vector<int> vec4(4,13);
    // vec2.push_back('5');
    // display(vec2);
    display(vec4);
    int element,size=5;

    cout<<vec4.size();

return 0;
}