#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char make_letter_lower_case(char letter){
	if((letter>-65)&&(letter<-34))
		return letter+32;
	return letter;
}

void main(){
	setlocale(LC_ALL, "rus");
	bool conformity,service_variable;
	unsigned short int start_position,position,cycle;
	signed int mood=0;
	char string[1024];
	char words[19][13]={"плох","нехоро","некач","пошло","дур","дрян","горе","горь","тёмн","хруп","скот","гад","отриц","негат","хуж","худ","мут","глу","туп"};
	ifstream stream("TEXT.TXT");
	while(!stream.eof()){
		stream>>string;
		start_position=0;
		do{
			conformity=false;
			while(string[start_position]!=' '){
				for(cycle=0;cycle<19;++cycle)
					if(!conformity){
						for(position=start_position;make_letter_lower_case(string[position])==words[cycle][position-start_position];++position);
						if(position-start_position==strlen(words[cycle]))
							conformity=true;
					}
				++start_position;
			}
			if(conformity)
				++mood;
			while(string[++start_position]==' ');
		}while(start_position<strlen(string));
	}
	stream.close();
	cout<<"Количество негативных слов в тексте, заданном файлом TEXT.TXT: "<<mood<<endl<<endl;
	cin>>service_variable;
}
