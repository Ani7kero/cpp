// Character array,
// Write a program that will define an array of n elements (characters) set by user.
// Use do while function.
// Display only first and last elements of the array and its adresses. 

#include <iostream>
using namespace std;




int main(){
    
    int n;
    int tab[n];
    
    cout<<"Define the size of an array n = ";
    cin >> n;
    
    int i = 0;
   
    do {
        cout << " tab [ " << i << "] = ";
        cin >> tab[i];
        i= i+1;
    }
    while (i<n);
    cout << endl;

    cout << "tab[first element] = " << tab[0] << "    ";
    cout << "address = " << &tab[0];
    cout << endl;

    cout << "tab[last element]  = " << tab[n-1] << "    ";
    cout << "address = " << &tab[n-1];
    cout << endl;

    return 0;
}