#include <bits/stdc++.h>
#include <iostream>

using namespace std;

char change(char x){
    if (x == 'X'){
        return 'A';
    }else if (x == 'Y'){
        return 'B';
    }else {
        return 'C';
    }
}

int main(){
    string myText;
    int sum = 0;
    fstream MyReadFile("input.txt");
    while (getline (MyReadFile, myText)) {
        // Output the text from the file
        char selected;
        if(myText[2] == 'X'){
            if(myText[0] == 'A'){
                selected = 'C';
            }else if(myText[0] == 'B'){
                selected = 'A';
            }else{
                selected = 'B';
            }
        }else if(myText[2] == 'Y'){
            if(myText[0] == 'A'){
                selected = 'A';
            }else if(myText[0] == 'B'){
                selected = 'B';
            }else{
                selected = 'C';
            }
            sum += 3;
        }else{
            if(myText[0] == 'A'){
                selected = 'B';
            }else if(myText[0] == 'B'){
                selected = 'C';
            }else{
                selected = 'A';
            }
            sum += 6;
        }

        if(selected == 'A'){
            sum += 1;
        }else if(selected == 'B'){
            sum += 2;
        }else{
            sum += 3;
        }


    }
    MyReadFile.close();
    cout << sum << endl;


}
