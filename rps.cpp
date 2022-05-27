#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

const int MAX = 3;
        //generating a string of random alphabets

string gen_random(int n){
    char alphabet[MAX] = {
        'a', 'b', 'c'//, 'd', 'e', 'f' //, 'g',
        //   'h', 'i', 'j', 'k', 'l', 'm', 'n',
        //   'o', 'p', 'q', 'r', 's', 't', 'u',
        //   'v', 'w', 'x', 'y', 'z'
    };
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
    return res;
};

int main() {
    int win = 0;
    int lose = 0;
    int draw = 0;

    cout << "Enter a move: r(Rock), p(Paper), s(Scissors) or q(Quit)." << endl; 

    while (true)
    {
        string userInput; string computerInput;
        
        cin >> userInput;

        srand(time(NULL));
        int n = 1;
        computerInput = gen_random(n);


        // cout << userInput<<endl;
        // cout << "Comp inpu " << computerInput<<endl;
        // break;
        break;
        
        
        if (userInput == computerInput)
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            draw = draw + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "s" && computerInput == "p")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "p" && computerInput == "r")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "r" && computerInput == "s")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "p" && computerInput == "s")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "r" && computerInput == "p")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "s" && computerInput == "r")
        {
            cout << "Your move is ' " << userInput << "', while computer move is ' " << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        // else if (userInput != "s" or userInput != "r" or userInput != "p")
        // {
        //     cout << "You have selected an invalid move." << endl;
        //     cout << "Enter a move: r(Rock), p(Paper), s(Scissors) or q(Quit)." << endl; 
        // }
        else if (userInput == "q")
        {
            break;
        }
    }

    cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
    cout << "Thank you for playing."<<endl;

    return 0;
}