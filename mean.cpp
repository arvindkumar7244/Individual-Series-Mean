Program to Calculate Mean of an individual series

#include<iostream.h>
#include<conio.h>
void main(){
	
	//clearing previous screen
	clrscr();
	
	// declaration of x and n
	int n, x [ 50 ];
	
	//entering value of n
	cout<<"How many elements are there : ";
	cin>>n;
	
	//entering values of x
	cout<<"Enter elements : ";
	int i;
	for(i=0;i<n;i++){
		cin>>x[i];
	}
	
	//calculating Σx
	int sum=0;
	for(i=0;i<n;i++){
		sum+=x[i];
	}
	
	//calculating mean
	float mean = (float) sum/n;
	
	//printing mean
	cout<<"Mean of the series is : "<<mean;
	getch();
}
