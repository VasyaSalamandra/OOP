#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>
#define  n 2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct ZNAK{
	string NAME;
	string ZODIAC;
	string BDAY;
	};
void input(){
	
	struct ZNAK a[n];
	for(int i=0;i<n;i++){
		cout<<"������ ������� �� ��'�\t";
		cin>>a[i].NAME;
		cout<<"������ ���� ������\t";
		cin>>a[i].ZODIAC;
		cout<<"������ ���� ����������\t";
		cin>>a[i].BDAY;	
	}
	ofstream file("text.txt",ios_base::app);
	for(int i=0;i<n;i++){
		file<<a[i].NAME<<" "<<a[i].ZODIAC<<" "<<a[i].BDAY<<endl;
		
	}
	file.close();
}
void output(){
	ifstream file2("text.txt");
	struct ZNAK a[n];
	for(int i=0;i<n;i++){
		file2>>a[i].NAME;
		cout<<"������� �� ��'�\t"<<a[i].NAME<<endl;
		file2>>a[i].ZODIAC;
		cout<<"���� ������\t"<<a[i].ZODIAC<<endl;
		file2>>a[i].BDAY;
		cout<<"���� ����������\t"<<a[i].BDAY<<endl;
	}
	file2.close();
}
int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int o;
	do{
	cout<<"��� ����� ������ 1, 2 ��� ������, 0 ��� ������"<<endl;
	cin>>o;
	switch(o){
		case 1: input();break;
		case 2: output();break;
		case 0: return 0;break;
	}
	}while(o!=0);
	return 0;
}
