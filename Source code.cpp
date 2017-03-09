#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char make_letter_capital(char letter){
	return letter;
}

void main(){
	setlocale(LC_ALL, "rus");
	bool conformity;
	unsigned short int start_position,position,cycle;
	signed int mood=0;
	char string[1024];
	char words[18][13]={"плох","нехоро","некач","пошло","дур","дрян","горе","горь","тёмн","хруп","скот","гад","отриц","негат","хуж","худш","глуп","туп"};
	ifstream stream("TEXT.TXT");
	while(!stream.eof()){
		stream>>string;
		start_position=0;
		do{
			conformity=false;
			for(cycle=0;cycle<18;++cycle)
				if(!conformity){
					for(position=start_position;string[position]==words[cycle][position-start_position];++position);
					if(position-start_position==strlen(words[cycle]))
						conformity=true;
				}
			if(conformity)
				++mood;
			start_position=position;
			while(string[++start_position]!=' ');
			while(string[++start_position]==' ');
		}while(start_position<strlen(string));
	}
	stream.close();
	cout<<"Количество негативных слов в тексте, заданном файлом TEXT.TXT: "<<mood<<endl<<endl;
}
