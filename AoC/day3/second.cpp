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
    string firstElve;
    string secondElve;
    string thirdElve;
    set<char> findLetters;
    int sum = 0;
    int count = 1;
    while (getline (MyReadFile, myText)) {
        if (count == 1) {
            firstElve = myText;
            count ++;
        }else if(count == 2){
            secondElve = myText;
            count ++;
        }else{
            thirdElve = myText;
            for(char item: firstElve){
                if (secondElve.find(item) != secondElve.npos && thirdElve.find(item) != thirdElve.npos){

                    findLetters.insert(item);
                }
            }
            for(auto x: findLetters){
                sum += findPriority(x);
            }
            count = 1;
        }



        findLetters.clear();
    }


    MyReadFile.close();
    cout << sum << endl;
}
