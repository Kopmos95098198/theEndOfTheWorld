#include <iostream>
#include <string>
using namespace std;

int main() {
    string letters[5] = 
        {"a", "e", "i", "o", "u"};
    
    string enterSentence;
    getline(cin, enterSentence);

    int getArraySize = sizeof(letters) / sizeof(letters[0]);
    cout << getArraySize;
    
        

    

    return 0;

}