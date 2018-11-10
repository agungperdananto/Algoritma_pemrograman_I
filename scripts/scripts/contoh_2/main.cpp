#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
//	deklarasi / inisialisasi==> initialize(init)
	int penghasilan, tanggungan;
	
	float pajak, salary;
	
// 	input data
	cout<<"Penghasilan: ";
	cin>>penghasilan;
	cout<<"Tanggungan: ";
	cin>>tanggungan;

//	proses
	if (penghasilan > 3500){
		if(tanggungan>0 && tanggungan<4){
			pajak = 0.025*(penghasilan-(tanggungan*500));
		} else if(tanggungan>=4){
			pajak = 0.025*(penghasilan-(3*500));
		} else{
			pajak = 0.025*penghasilan;
		}
		
	} else {
		pajak = 0;
	}
	salary = penghasilan - pajak;
//	output
//	cout<<"pajak: "<<pajak<<"\n";
	cout<<"salary: "<<salary<<"\n";
}

