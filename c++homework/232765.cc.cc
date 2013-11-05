/* homework1 in C++ which 
 * using to calculate BMR */

#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

// declaring variables:
int Weight=0;
int Height=0;
int Age=0;
double BMR=0;
double number=0;


//input the weight
void input_weight()
{

    cout<<"Enter the Weight in pounds: ";
    cin>>Weight;
    cout<<endl;  
    if (Weight<=0)
    {

        exit(1);

    } 

}

//input the height
void input_height()
{

    cout<<"Enter Height in inches: ";
    cin>>Height;
    cout<<endl;

	if (Height<=0)//input for height is wrong
	{
		cout<<"Error: Incorrect height"<<endl;
		input_height();
	
        }

}

//input age
void input_age()
{
    
    cout<<"Enter age: ";
    cin>>Age;
    cout<<endl;

	if (Age<=0)//input for age is wrong
	{
		cout<<"Error: Incorrect age"<<endl;
		input_age();
	
        }

}

//input gender
void input_gender()
{   
    int const D=230;
    char Gender=0;

    cout<<"Enter Gender: ";
    cin>>Gender;
    cout<<endl;
    int const A=655;
    int const B=66;
    double const C=12.9;

	if (Gender=='f'||Gender=='F')//the gender is female
	{
	     cout<<"BMR is ";
	    //calculate the BMR for male
            BMR=A+(4.3*Weight)+(4.7*Height)-(4.7*Age);
            cout << fixed << setprecision(2) << BMR<< endl;//print the BMR
            cout<<"The number of chocolate bars that should be";
            cout<<" consumed to"<<endl;
            cout<<"maintain one's weight for female of the";
            cout<<"specified height"<<endl;
            cout<<"("<<Height;
            cout<<"), weight ("<<Weight;
            cout<<"),and age ("<<Age<<") is ";
            number=BMR/D;//calculate the needed chocolate number
            cout<< fixed << setprecision(2) << number<<endl;//print the BMR
	}

	else if (Gender=='m'||Gender=='M')// the gender is male
	{
            cout<<"BMR is ";
	     //calculate the BMR for male
            BMR=B+(6.3*Weight)+(C*Height)-(6.8*Age);
            cout << fixed << setprecision(2) << BMR<< endl;
            cout<<"The number of chocolate bars that should be";
            cout<<" consumed to"<<endl;
            cout<<"maintain one's weight for male of the";
            cout<<"specified height"<<endl;
            cout<<"("<<Height;
            cout<<"), weight ("<<Weight;
            cout<<"), and age ("<<Age<<") is ";
            number=BMR/D;//calculate the needed chocolate number
            cout<< fixed << setprecision(2) << number<<endl;//print the number
	}

	else//the input for gender is wrong
	{
	        cout<<"unknow Gender"<<endl;
	        input_weight();
	        input_height();
	        input_age();
	        input_gender();
	}

}

//do a choice
void input_choice()
{      char choice=0;
       //print the choices
	cout<<"Choose:"<<endl;// available choices
	cout<<"   a)Sedentary"<<endl;
	cout<<"   b)Somewhat active(Exercise occasionally)"<<endl;
	cout<<"   c)Active(Exercise 3-4 days per week)"<<endl;
	cout<<"   d)Highly Active(Exercise every day)"<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;// input a choice
	switch(choice)//choice loop
	{     
              case 'a'://user chooses a
                cout<<"Increase in BMR percentage: 20%"<<endl;
                cout<<"New BMR value: ";
                BMR=BMR*1.2;//new value for BMR
                number=number*1.2;//new value for number
                //print the new BMR and chocolate number
                cout << fixed << setprecision(2) << BMR<< endl;
                cout<<"Number of chocolates based on new BMR value:";
                cout << fixed << setprecision(2) << number<< endl;
                break;
             
              case 'b'://user chooses c
                cout<<"Increase in BMR percentage: 30%"<<endl;
                cout<<"New BMR value: ";
                BMR=BMR*1.3;//new value for BMR
                number=number*1.3;//new value for number
                cout << fixed << setprecision(2) << BMR<< endl;
                cout<<"Number of chocolates based on new BMR value:";
                cout << fixed << setprecision(2) << number<< endl;
                break;
	      
              case'c'://user chooses c
                cout<<"Increase in BMR percentage: 40%"<<endl;
                cout<<"New BMR value: ";
                BMR=BMR*1.4;// new value for BMR
                number=number*1.4;//new value for number
                cout << fixed << setprecision(2) << BMR<< endl;
                cout<<"Number of chocolates based on new BMR value:";
                cout << fixed << setprecision(2) << number<< endl;
                break;
	      
              case'd'://user chooses d 
                cout<<"Increase in BMR percentage: 50%"<<endl;
                cout<<"New BMR value: ";
                BMR=BMR*1.5;//new value for BMR
                number=number*1.5;//new value for number
                cout << fixed << setprecision(2) << BMR<< endl;
                cout<<"Number of chocolates based on new BMR value:";
                cout << fixed << setprecision(2) << number<< endl;
                break;
	      
              default://input a wrong choice
                cout<<"Error: choose from given options"<<endl;
                input_choice();//choose again
                break;
	}  
}

//the main function
int main()
{    
     input_weight(); 
     input_height();
     input_age();
     input_gender();
     input_choice();
     return 0;

}
