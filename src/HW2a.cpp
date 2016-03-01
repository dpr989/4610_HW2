//#define WIN32

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <GL/glut.h>

using namespace std;
//Data structure for vertex and face
struct Vertex {
	GLfloat x;
	GLfloat y;
	GLfloat z;

};

struct Face {
	uint32_t v1;
	uint32_t v2;
	uint32_t v3;
	
};
//Vectors for stroing vertices
std::vector<GLfloat> vertices;
std::vector<GLfloat> faces;

int main(int argc, char** argv){
	ifstream objFile("../resources/cube.obj");
	
	//Check if file was opened properly
	if (objFile.is_open()){
		//Read until end of input is reached read line by line
		string tuple = "";

		while (getline(objFile, tuple)){
			//Check if retrieved string is empty or null??
			if(!tuple.empty()){
				//Check what first char is
				switch (tuple[0]){
					case 'v':
						cout << "The first is a: v" << endl;
						break;

					case 'f':
						cout << "The first is a: f" << endl;
						break;

					default:
						cout << "Unrecongnized char" << endl;
						break;
				}
				//cout << tuple[0] << endl;
			}
			//Check if first char of each line is v or f
				/*If v (vertex):
				 * Add vertex values to the vertext vector
				 *
				 *If f(face):
				 * Add face data to face vector
				 *
				 *If
				 */
		}
	}



}
