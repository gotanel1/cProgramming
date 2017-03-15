// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main () {
  string line;
  char data;
  int loop,order = 0;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    
    cout << line << endl;
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
