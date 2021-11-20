
#include<iostream>
#include<conio.h>

using namespace std;

class toll{
	static int no_of_cars;
	static float amount;
	
	public :
		toll(){
			cout<<"A car is passed...";
			no_of_cars++;
		}
		
		void display(){
			cout<<"\nTotal number of cars..."<<no_of_cars;
			cout<<"\nTotal Amount collected = "<<amount;
		}
		void calc_amt(int t){
			if(t==0)
			amount+=40;
		}
};

int toll::no_of_cars=0;
float toll::amount=0.0;

int main(){	
	int lane_no, type;
	char ch='y';
	int lane[5]={0,0,0,0,0};
	do{
		do{
			cout<<"\nEnter lane no (1-5) : ";
			cin>>lane_no;
		} while (lane_no>5);
	
		do{
			cout<<"Enter type of Car (0 for paying and 1 for Non paying) : ";
			cin>>type;
		} while(type<0 || type>1);
	
		toll t;
		switch(lane_no)
		{ 
			case 1: lane[0]++;
			break;
			case 2 : lane[1]++;
			break;
			case 3: lane[2]++;
			break;
			case 4: lane[3]++;
			break;
			case 5: lane[4]++;
			break;
		}
		
		t.calc_amt(type);
		t.display();
		cout<<"\nAny more car? (y/n) : ";
		cin>>ch;
		
	}while(ch=='Y'||ch=='y');
	
	for(int i=0; i<5; i++){
		
		cout<<"Total cars passed through lane "<<i+1<<" is : "<<lane[i]<<endl;
	}
	getch();
}




