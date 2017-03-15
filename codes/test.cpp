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
    {
      cout << line << endl;
      if(order==0){
      	data = line[0];
	  }else{
	   loop = atoi(line.c_str());
	  }
	  order++;
	}
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
