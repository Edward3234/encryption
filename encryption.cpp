//just a program to help me better understand how to use C++
//also a reminder of how to code in general
//edward maki, 2019/02/07

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    char key[6];
    char number[6];
    int counter = 0;
    ifstream fin("encode.dat");
    if (!fin) {
        cout << "encode.dat not found" << endl;
        return 404;
    }
    fin >> key;
    while (fin >> number){
        counter = 0;
        while(counter < 6){
                if (counter < 3){
                number[counter] = 'number[counter]'+ 'key[counter]' - 65;
            while(number[counter] > 'Z'){
                number[counter] = number[counter] - 26;
            }
            cout << number[counter];
            counter ++;
            }
            if(counter >= 3){
                number[counter] = 'number[counter]' + 'key[counter - 3]' - 65;
// what's supposed to happen is that it takes the letter in the variables and add them together then subtract by A
// turns out that if you use '' it doesn't take the letter in the variable but the name of the variable itself
// also for whatever reason it's only showing _______ for some reason
            while(number[counter] > 'Z'){
                number[counter] = number[counter] - 26;
            }
            cout << number[counter];
            counter ++;
            }
        }
        cout << endl;
    }
    return 0;
}
