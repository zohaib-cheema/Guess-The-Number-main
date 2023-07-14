#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	cout<<"Hey, please enter your name and start guessing!"<<endl;
	getline(cin,name);
	int randomVal;
	randomVal=rand()%1000+1;
	int userInput;
	cout<<"The system has produced and saved a random number within the range of 1-1000, start guessing!"<<endl;
	cin>>userInput;
	int counter=1;

	while(userInput != randomVal)
	{
		if(userInput>randomVal)
		{
			cout<<"The value you guessed in HIGHER than the stored value, TRY AGAIN!"<<endl;
		}
		if(userInput<randomVal)
		{
			cout<<"The value you guessed in LOWER than the stored value, TRY AGAIN!"<<endl;
		}
		cout<<"Guess any other value different from your previous guesses"<<endl;
		cin>>userInput;
		counter++;
	}

	if(userInput==randomVal){
		cout<<"CONGRATUALTIONS the value you guessed EQUALS the stored value, YAYY!"<<endl;
		if(counter>1){
		cout<<"The value was " << randomVal <<" It took you "<< counter <<" number of tries to guess the right number, want to improve that? TRY AGAIN!";
		}
		if(counter==1){
			cout<<"The value was " << randomVal <<".YAY! You guessed it on your first try! WOW you're an expert at this game! Look out for more games on my GitHub! ";
		}

		}
	}
}
