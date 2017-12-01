#include <iostream>
#include <string.h>
#include <Windows.h>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i, j=0, n;
	char text[100];
	char *word = new char[n];
	
	ofstream file("text.txt",ios_base::app);
	cout<<"Введiть текст: ";
	gets(text);
    file<<text<<" ";
	file.close();
	
	ifstream file2("text.txt");
	file2.read(text,100);
	for(i=0;i<100;i++){
		if(text[i]==' '||text[i]=='\n'){
			if(text[i-1]=='а'||'я'||'о'||'у'||'е'||'є'||'і'||'ї'||'ю'||'и'){
				j++;
			}
		}
	}
	cout<<endl;
	cout<<"Слова довжина яких менша 5 символiв"<<endl;
	word = strtok(text, " " );
 	while(word != NULL){
 		if(strlen(word)<5){
 			cout<<word<<endl;
 		}
 		word=strtok(NULL, " ");
 	} 
 	delete word;
 	cout<<endl;
	cout<<"Кiлькiсть слiв якi закiнчуються на голосну букву:"<<j<<endl;
	file.close();
	return 0;
}
