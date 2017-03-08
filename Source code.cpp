#include <iostream>
#include <fstream>

using namespace std;

void main(){
	setlocale(LC_ALL, "rus");
	ifstream stream("TEXT.TXT");
	stream.close();
}
