//String array
//Write a program that will define an array of 4 string elements . Fill the array with names and
//display all its elements on the screen.

#include <iostream>
using namespace std;

int main(){
    
	string names[4] = {"Kasia", "Basia", "Asia", "Zosia"};
	
	for(int i = 0; i < 4; i++){
		cout << "Name [ " << i + 1 << " ] : " << names[i] << endl;
	}
	
    return 0;
}