#include <iostream>
#include <stdlib.h>
#include <Windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n=0, imin;
	int a=0, c=0, key;
	cout<<"������ ������� �������� ������:";
	cin>>n;
	int *arr=new int[n];
	cout<<"������� �����"<<endl;
	for(int i=0;i<n;i++){
		arr[i]=rand()% 50-25;
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
 	for (int i=0;i<n;i++){
 		for (int j=0;j<n;j++){
 			if (arr[j]<arr[i]){ 
				c=arr[i]; 
				arr[i]=arr[j]; 
				arr[j]=c;
 				}
		}
	}
	cout<<"³����������� ����� ������� ���������"<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	for (int i=0;i<n-1;i++){
		imin=i;
 		for (int j=i+1;j<n;j++){
 			if (arr[j]>arr[imin]){
 				imin=j;
 				a=arr[i];
 				arr[i]=arr[imin];
 				arr[imin]=a;
			}
		}
	} 
	cout<<"³����������� ����� ������� ������"<<endl;
	for (int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
 	cout<<endl;
 	cout<<"������ ������� ��� ������:";
 	cin>>key;
 	for(int i=0;i<n;i++){
		if (arr[i]==key){
			cout<<"����� ��������:"<<i;		
		}	
	}
 	delete arr;
	return 0;
}
