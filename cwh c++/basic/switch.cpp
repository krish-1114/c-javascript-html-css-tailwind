#include<iostream>
using namespace std;
int main(){

    int rating = 5;

    switch (rating)
    {
    case 1:
        puts("rated 1");
        break;
    
    case 2:
        puts("rated 2");
        break;
    
    case 3:
        puts("rated 3");
        break;
    
    case 4:
        puts("rated 4");
        break;
    
    case 5:
        puts("rated 5");
        break;
    

    default:
        puts("Invalid plz rate between 1 to 5");
        break;
    }

return 0;
}