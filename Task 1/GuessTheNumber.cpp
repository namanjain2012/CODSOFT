#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	cout<<"----------------Guess the Number---------------\n\n"<<endl;
	
	cout<<"Generating a random number between 1 to 50........\n"<<endl;
	srand((unsigned) time(NULL));
	int random = 1 + rand()%50;
	int guess;
	int chance=5;
	while (chance!=0){
	    cout<<"Make a guess : ";
	    cin>>guess;
	    chance--;
	    if (guess<random){
	        cout<<"\nLow."<<endl;
	        cout<<chance<<" CHANCES left\n\n\n"<<endl;
	    }
	    else if(guess>random){
	        cout<<"\nHigh."<<endl;
	        cout<<chance<<" CHANCES left\n\n\n"<<endl;
	    }
	    else{
	        cout<<"YEAHH!!! You guessed the right number.\n"<<endl;
	        cout<<"----------------THANK YOU---------------\n\n"<<endl;
	        return 1;
	    }
	}
	cout<<"\nHARD LUCK! Try again...\n"<<endl;
	return 0;
}