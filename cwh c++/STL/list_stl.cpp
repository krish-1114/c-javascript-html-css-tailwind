#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1;

    // list<int> list2(7);
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);



    list<int> list2(3);
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;


    cout << endl;

    cout<<"The First list is this : "<<endl;
    display(list1);
    cout << endl;

    cout<<"The Second list is this : "<<endl;
    display(list2);
    cout << endl;
    
    // Swap

    cout << "After swap Value : " << endl;
    list1.swap(list2);
    cout<<"This is list1 "<<endl;
    display(list1);
    cout<<"This is list2 "<<endl;
    display(list2);
    cout << endl;

    // Merging

    cout<<"list 1 after merging : "<<endl;
    list1.merge(list2);
    display(list1);
    cout << endl;

    // Reversing list

    cout<<"list 1 reversing : "<<endl;
    list1.reverse();
    display(list1);
    cout << endl;
    
    // sorting

    cout << "After sort : " << endl;
    list1.sort();
    display(list1);
    cout << endl;

    // delete

    cout << "After delete front : " << endl;
    list1.pop_front();
    display(list1);
    cout << endl;

    cout << "After delete back : " << endl;
    list1.pop_back();
    display(list1);
    cout << endl;

    cout << "After remove nine : " << endl;
    list1.remove(9);
    display(list1);
    cout << endl;

    

    return 0;
}