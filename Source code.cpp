#include <iostream>
#include <fstream>

using namespace std;

void main(){
	setlocale(LC_ALL, "rus");
	bool nonconformity;
	unsigned short int position,cycle;
	signed int mood=0;
	char string[1024];
	char words[16][13]={"плох","нехоро","некач","пошло","дур","дрян","горе","горь","тёмн","хруп","скот","гад","отриц","негат","глуп","туп"};
	ifstream stream("TEXT.TXT");
	while(!stream.eof()){
		stream>>string;
	}
	stream.close();
}
