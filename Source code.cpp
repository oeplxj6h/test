#include <iostream>
#include <fstream>

using namespace std;

void main(){
	setlocale(LC_ALL, "rus");
	bool conformity;
	unsigned short int start_position,position,cycle;
	signed int mood=0;
	char string[1024];
	char words[16][13]={"плох","нехоро","некач","пошло","дур","дрян","горе","горь","тёмн","хруп","скот","гад","отриц","негат","глуп","туп"};
	ifstream stream("TEXT.TXT");
	while(!stream.eof()){
		stream>>string;
		start_position=0;
	}
	stream.close();
}
