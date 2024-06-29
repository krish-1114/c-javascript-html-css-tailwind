#include<iostream>
#include<vector>

using namespace std;

    void display(vector<int> &v){
        for (int i = 0; i < v.size(); i++)
        {
                cout<<v[i]<<" ";
        }
        cout<<endl;   
    }
int main(){

    int element,size;
    vector<int>vec1;
    cout<<"Enter The size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add this vector";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back();
    display(vec1);
    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter,566);
    // vec1.insert(iter+2,566);
    vec1.insert(iter+2,5,566);

    display(vec1);
    

return 0;
}