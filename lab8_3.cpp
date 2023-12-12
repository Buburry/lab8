/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int Age,bounty,Height;
    string name;
    cout << "Enter your age: ";
    cin >> Age;
    if(Age <= 25){
        cout << "Enter your height: ";
        cin >> Height;
        if(Height < 100){
            name = "Chopper";
        } else {
            if(Height < 180){
                name = "Usopp";
            } else {
                cout << "Enter your bounty: ";
                cin >> bounty;    /* code */   
                if (bounty > 1100000000){
                    name = "Zoro";
                } else {
                    name = "Sanji";
                }
            }
        }
    } else {
        if (Age <= 60)
        {
            cout << "Enter your bounty: ";
            cin >> bounty;    /* code */
            if (bounty > 500000000)
            {
                name = "Jinbe";
            } else {
                name = "Franky";
            }
            
        } else {
            name = "Brook";
        }
    }
    cout << "Your character = " << name;
}