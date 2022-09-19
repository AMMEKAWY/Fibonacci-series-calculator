#include <iostream>

int fib(int length);
int length=1;

int main(){
	
	
	std::cout<<"enter the length needed \n";
	std::cin>>length;
	fib(length);
	
	
}

int fib(int length){
	
	int fibonacci[length]={0,1};
	
	for(int i=0; i<=length; i++){
		
		fibonacci[i+2]=fibonacci[i]+fibonacci[i+1];
		
		std::cout<<fibonacci[i]<<",";
		
	}
	
}

