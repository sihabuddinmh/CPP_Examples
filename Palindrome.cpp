#include <iostream>
using namespace std;

int main()
{
    string A;                               // to get in the text from the user.
    string B;                               // to reverse the string.
    cout << "Palindrome Test \n \n";
    cout << "Enter the text \n \n";
    cin >> A;
    
    //the for-loop below is to reverse the text and store in B for comparison purposes.
    for (int i = A.size() - 1; i >= 0; i--) {
        B += A[i];
    }
    //if reversed text B is same as original text A, then it is palindrome.
    if (A == B) {
        cout << "The text is a palindrome.";
    }
    else {
        cout << "The text is not a palindrome.";
    }
    return 0;

}