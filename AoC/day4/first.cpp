// NO ME GUSTA TANTO LA SOLUCION PERO FUNCIONA
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    //read files
    string myText;
    fstream MyReadFile("input.txt");

    // my variables
    int firstStart;
    int firstEnd;
    int secondStart;
    int secondEnd;
    int sum = 0;
    while (getline (MyReadFile, myText)) {
        string firstRange = myText.substr(0,myText.find(','));
        string secondRange = myText.substr(myText.find(',') + 1, myText.npos);
        firstStart = stoi(firstRange.substr(0,firstRange.find('-')));
        firstEnd =  stoi(firstRange.substr(firstRange.find('-')+1,firstRange.npos));
        secondStart = stoi(secondRange.substr(0,secondRange.find('-')));
        secondEnd =  stoi(secondRange.substr(secondRange.find('-')+1,secondRange.npos));
        cout <<firstRange<< " " << secondRange << endl;
        cout << firstStart << " " << firstEnd <<"|"<<secondStart <<" "<<secondEnd <<endl;

        if ( (firstStart >= secondStart && firstEnd <= secondEnd) || (firstStart <= secondStart && firstEnd >= secondEnd)){
            sum += 1;
        }
    }


    MyReadFile.close();
    cout << sum << endl;
}
