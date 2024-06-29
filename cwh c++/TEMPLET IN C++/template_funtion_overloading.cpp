#include<iostream>
using namespace std;

template<class T>

class krish{
    public:
        T data;
        krish(T a){
            data = a;
        }
        void display();
};

template <class T>
void krish<T>::display(){
            cout<<data;
        }

void func(int a){
    cout<<"I am fist"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"I am Template"<<a<<endl;
}


int main(){
    
    // krish<int>k(5);
    // krish<char>kr('b');
    // // cout<<k.data;
    // k.display();
    // kr.display();

    func(4);
    func<int>(4);
return 0;
}