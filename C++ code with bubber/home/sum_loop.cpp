// #include<iostream>
// using namespace std;
// int main(){
// int n,sum;
// cin>>n;
// sum =0;
// for (int i = 1; i <= n; i++)
// {
//     sum+=i;
// }
//     cout<<sum;
// return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    
    sum = (n * (n + 1)) / 2;

    cout << " sum is: " << sum << endl;

    return 0;
}
