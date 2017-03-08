#include <iostream>
#include <fstream>

using namespace std;

void main(){
	setlocale(LC_ALL, "rus");
	char string[1024];
	char words[16][23]={"плох","нехорош","некачествен","пошл","дур","дрян","горе","горь","тёмн","хруп","скот","гад","отриц","негати","глуп","туп"};
	ifstream stream("TEXT.TXT");
	stream.close();
}
