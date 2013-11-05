// This is a program to calculate bassal metabolic rate(BMR) for your body!


// Add library file
#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>

using namespace std;

// macro definition
#define BMR_IN "          Increase in BMR percentage:"

// Function: display the choice how often you do you exercise.
void choose(){
	cout<<endl;
	cout<<"Choose:"<<endl;
	cout<<"     a) Sedentary"<<endl;
	cout<<"     b) Somewhat active (Exercise occasionally)"<<endl;
	cout<<"     c) Active (Exercise 3-4 days per week)"<<endl;
	cout<<"     d) Highly Active (Exercise every day)"<<endl<<endl;
	cout<<"Enter your choice: ";
}

// Function: output the new BMR and numbers of chocolate bars
void newvalues(double BMR){
	int const ENERGY=230;
	double chocolate_num=0;
	chocolate_num=BMR/ENERGY;
	cout<<"          New BMR value: "<<fixed<<setprecision(2)<<BMR<<endl;
	cout<<"          Number of chocolates based on new BMR value: "<<fixed<<setprecision(2)<<chocolate_num<<endl;
	cout<<"          ******************************************************"<<endl;
	cout<<endl<<endl;
}

// Function: enter your weight
int Enter_weight(int weight){
	cout<<"Enter the weight in pounds: ";
	cin>>weight;
	if(weight<=0)    //check if it's right input
		exit(1);
	return weight;
}

// Function: Enter your height
int Enter_height(int height){
	do{
		cout<<"Enter the height in inches: ";
		cin>>height;
		if(height<=0)
			cout<<endl<<"Enter: Incorrect height!"<<endl<<endl;
	} while(height<=0);
	return height;
}

// Enter your age
int Enter_age(int age){
	do{
		cout<<"Enter age: ";
		cin>>age;
		if(age<=0)
			cout<<"Error: Incorrect age!"<<endl;
	} while(age<=0);
	return age;
}

// Function: output the original BMR and numbers of the chocolate bars
void output(double BMR,string g,int weight,int height,int age,double chocolate_num){
	cout<<"          ******************************************************"<<endl;
	cout<<"          BMR is "<<fixed<<setprecision(2)<<BMR<<endl<<endl;
	cout<<"          The number of chocolate bars that should be consumed to "<<endl;
	cout<<"          maintain one's weight for "<<g<<" of the specified height "<<endl;
	cout<<"          ("<<height<<") weight ("<<weight<<") age ("<<age<<") is "<<fixed<<setprecision(2)<<chocolate_num<<endl;
	cout<<"          ******************************************************"<<endl;
}

// Function: choose how often you do exercise
double choiceexercise(char choice,double BMR){
	switch(choice){
		case 'a':
			cout<<"          ******************************************************"<<endl;
			cout<<BMR_IN<<" 20%"<<endl;
			BMR=BMR*1.2;
		break;
		case 'b':
			cout<<"          ******************************************************"<<endl;
			cout<<BMR_IN<<" 30%"<<endl;
			BMR=BMR*1.3;
		break;
		case 'c':
			cout<<"          ******************************************************"<<endl;
			cout<<BMR_IN<<" 40%"<<endl;
			BMR=BMR*1.4;
		break;
		case 'd':
			cout<<"          ******************************************************"<<endl;
			cout<<BMR_IN<<" 50%"<<endl;
			BMR=BMR*1.5; 
		break;
		default: break;
}
	return BMR;
}


// The main function
int main(){

// define variables.
	int const CONST1=655,CONST2=66,ENERGY=230;
	double const PAR=12.9;
	int weight=0,height=0,age=0;
	char gender='f',choice='a';
	double BMR=0.0,chocolate_num=0.0;
	string g="female";

	do{
	// Enter your weight
		weight=Enter_weight(weight);  //call function
	// Enter your height
		height=Enter_height(height);
	// Enter your age
		age=Enter_age(age);
	// Enter your gender
		cout<<"Enter gender: ";
		cin>>gender;
		if(gender!='f'&&gender!='F'&&gender!='M'&&gender!='m')
			cout<<endl<<"Error: unknown gender!"<<endl<<endl;
	}while(gender!='f'&&gender!='F'&&gender!='m'&&gender!='M'); //check if it's right

// output the number of chocolate bars depend on one's sex of specified parameters
	cout<<endl;

// if one is female
	if(gender=='f'||gender=='F'){
		BMR=CONST1+4.3*weight+4.7*height-4.7*age;
		chocolate_num=BMR/ENERGY;
		g="female";
		output(BMR,g,weight,height,age,chocolate_num);  //call function
	}

// if one is male
	else if(gender=='m'||gender=='M'){
		BMR=CONST2+6.3*weight+PAR*height-6.8*age;
		chocolate_num=BMR/ENERGY;
		g="male";
		output(BMR,g,weight,height,age,chocolate_num);  //call function
	}

// choose how often you do your exercise.
	do{
		choose();  // call function 
		cin>>choice;
		cout<<endl;
		if(choice!='a'&&choice!='b'&&choice!='c'&&choice!='d')
			cout<<"Error: choose from given options!"<<endl;
	} 
	while(choice!='a'&&choice!='b'&&choice!='c'&&choice!='d');

// Choose your choice
	BMR=choiceexercise(choice,BMR);   //call function

// output of chocolates based on the new BMR value.
	newvalues(BMR); // call function


	return 0; // end and return
}
