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
	bool service_variable;
	unsigned short int start_position,position,cycle;
	unsigned int mood=0,number_of_words=0;
	char string[1024];
	char words[18][13]={"нехоро","некач","пошло","дур","дрян","горе","горь","тёмн","тьм","хруп","скот","гад","отриц","негат","хуж","мут","глу","туп"};
	ifstream stream("TEXT.TXT");
	while(!stream.eof()){
		stream>>string;
		start_position=0;
		do{
			while(string[start_position]!=' '){
				for(cycle=0;cycle<18;++cycle){
					for(position=start_position;make_letter_lower_case(string[position])==words[cycle][position-start_position];++position);
					if(position-start_position==strlen(words[cycle]))
						++mood;
				}
				++start_position;
			}
			while(string[++start_position]==' ');
			++number_of_words;
		}while(start_position<strlen(string));
	}
	stream.close();
	cout<<"Количество негативных слов в тексте, заданном файлом TEXT.TXT: "<<mood<<endl<<endl;
	cout<<"Отношение количества негативных слов к их общему количеству: "<<(double)mood/(double)number_of_words<<endl<<endl;
	cin>>service_variable;
}
