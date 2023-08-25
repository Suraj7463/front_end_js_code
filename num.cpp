#include<iostream>
using namespace std;

int main(){
	int sum=0;
	for(int i=1;i<=5;i++){
		if(i=5){
			cout<<"+"<<i;
		}
        cout<<i<<"+";
		sum = sum + i;
    	cout<<sum;
	}
	cout<<"="<<sum;

}

