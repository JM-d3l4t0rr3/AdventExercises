#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int findPriority(char c){
    if(int(c) >= 65 && int(c) <= 90){
        return int(c) - 38;
    }else{
        return int(c) - 96;
    }
}
int main(){
    //read files
    string myText;
    fstream MyReadFile("input.txt");

    // my variables
    string fMiddle;
    string sMiddle;
    set<char> findLetters;
    int sum = 0;

    while (getline (MyReadFile, myText)) {

        fMiddle = myText.substr(0, myText.size()/2);
        sMiddle = myText.substr(myText.size()/2, myText.size());

        for(char item: fMiddle){
            if (sMiddle.find(item) != sMiddle.npos){
                findLetters.insert(item);
            }
        }
        for(auto x: findLetters){
            sum += findPriority(x);
        }

        findLetters.clear();
    }


    MyReadFile.close();
    cout << sum << endl;
}
