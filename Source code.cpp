#include <iostream>
#include <fstream>
#include <string.h>

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
		do{
			conformity=false;
			for(cycle=0;cycle<16;++cycle){
				if(!conformity){

				}
			}
			if(conformity)
				++mood;
			while(string[++start_position]!=' ');
			while(string[++start_position]==' ');
		}while(start_position<1024);
	}
	stream.close();
	cout<<"Количество негативных слов в тексте, заданном файлом TEXT.TXT: "<<mood<<endl<<endl;
}
