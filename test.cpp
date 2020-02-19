#include<iostream>
#include<cstring>
#include "node.h"

using namespace std
;
int main() {
  char input[256];
  cin.getline(input, 256); // take input
  for(int i = 0; i < strlen(input); i++) {
    if(input[i] != ' ') { // skip spaces
      if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/' || input[i] == '(' || input[i] == ')' || input[i] == '^') { // if token is operator
	
      }
      if(input
    }
  }
  return 0;
}
