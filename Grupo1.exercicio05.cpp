#include <iostream>
using namespace std;
int main(){
	
	int segundos, dias, segundos_rest, horas, minutos;
	
	cout<<"Digite o tempo em segundos: "<<endl;
	cin>>segundos;
	
	dias = segundos / 86400;
	segundos_rest = segundos % 86400;
	horas = segundos_rest / 3600;
	segundos_rest = segundos_rest % 3600;
	minutos = segundos_rest / 60;
	segundos_rest = segundos_rest % 60;
	
	cout<<dias<<" dias "<<horas<<" horas "<<minutos<<" minutos "<<segundos_rest<<" segundos "<<endl;
	
	return 0;
}
