#define WIN32

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv){
	ifstream objFile("cube.obj");
	
	string tuple;
	if (objFile.is_open()){
		string tuple;
		while (getline(objFile, tuple)){
			cout << tuple << '\n';
		}
	}



}
