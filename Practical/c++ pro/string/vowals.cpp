//A E I O U
#include<iostream>
using namespace std;
int main(){
     string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // size is 13 but last one is null - extra char which show the string end
    int count = 0;

     for (int i = 0; i < s.length(); i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
            count++;
        }
    }

    cout << "The number of vowels in the string: " << count << endl;
    
   
return 0;
}