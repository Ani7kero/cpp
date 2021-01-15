// zadanie 7.

#include <iostream>  
#include <string>

using namespace std;

string zmiana(string);
void palindrom();

string stringEntered; //-string wprowadzany przez usera
string stringNoSpace; //-string z wyrzuconymi spacjami

int main() {

    cout << "   " << endl;
    cout << " *** Program sprawdzający, czy dany ciąg liter/ słów jest palindromem *** \n";
    cout << "        !!! UWAGA !!! Program nie obsługuje polskich znaków " << endl;  // nie użyłam setw z <iomatnip> ze względu na niepotrzebne zużycie pamięci a i tak wygląda ;)
    cout << "   " << endl;

    cout << "Wprowadź słowo/a: ";
    getline (cin, stringEntered);

    if (stringEntered.length() > 40){
        cout << "Tekst jest zbyt długi. Wprowadź ponownie słowo/a: " << endl;
        getline (cin, stringEntered);  
        
        palindrom();
    }
    
    else {

        palindrom();   
    }   
    return 0;
}

string zmiana(string ciag){  // funkcja zmieniająca Wielkie litery na małe - z ASCII ; loweredString = stringNoSpace.tolower() <-potrzebna cała biblioteka <algorithm> co niepotrzebnie obciązy pamięć
    int i=0;
  
        while (ciag[i] != 0){
        if (ciag[i] > 64 && ciag[i] < 91){
            ciag[i] = (ciag[i] + 32);
        }
        i++;
        }
    
    return ciag;
}

void palindrom(){

    for (int i = 0; i< stringEntered.length(); i++){

        if(stringEntered[i] != ' '){  //  pozbycie się spacji
            stringNoSpace+=stringEntered[i];
        }
            
    }
            
    stringEntered=stringNoSpace;

    stringNoSpace = zmiana(stringNoSpace); // wywołanie funkcji zmieniającej wielkośc liter
    
        if (stringNoSpace == string(stringNoSpace.rbegin(), stringNoSpace.rend())) { // przepisanie od tyłu
            cout << "To jest palindrom." << endl;
        }
        
        else {
            cout << "To NIE jest palindrom." << endl;
        } 

}

