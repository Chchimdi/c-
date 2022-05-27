// C program to generate random numbers
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
}
int main(){
   srand(time(NULL));
   int n = 1;
   string result = gen_random(n);
   cout << result << endl;
   return 0;
}