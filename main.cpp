#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double avr(double a,double b){
	
	double average=0;
	average=(a+b)/2;
	return average;
}
using namespace std;
int main(int argc, char** argv) {
    double a[10];
	for(int i= 0;i<10;++i){
	    cout<<"a["<<i<<"]";
		cin>>a[i];
	}
	for(int i=0;i<10;i++){
		cout<<avr(a[i],a[i+1])<<endl;
	}
	
	return 0;
}
