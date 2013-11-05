#include <iostream>
#include<iomanip>

using namespace std;
int weight;
int height;
int age;
char gender;
char choice;
double BMR;
double number;

int main ()
{

cout << "Enter the Weight in Pounds: ";
cin >>weight;
if (weight==0 ||weight<0)
   return 0;
else

cout << "Enter the Height in Inches: ";
cin >>height;
while (height==0 ||height<0)
{
cout <<"Error: Incorrect Height."<<endl;
cout << "Enter the Height in Inches: ";
cin>>height;
}
cout << "Enter Age: ";
cin >>age;
while (age==0||age<0)
{
cout <<"Error: Incorrect Age."<<endl;
cout << "Enter Age: ";
cin>>age;
}
cout <<"Enter Gender: ";
cin >>gender;
while(gender!='F'&&gender!='f'&&gender!='m'&&gender!='M')
{
if(gender!='F'&&gender!='f'&&gender!='m'&&gender!='M')
cout<<"Error: Unknown Gender."<<endl;

cout << "Enter the Weight in Pounds: ";
cin >>weight;
if (weight==0 ||weight<0)
   return 0;
else
{
cout << "Enter the Height in Inches: ";
cin >>height;
while (height==0 ||height<0)
{
cout <<"Error: Incorrect Height."<<endl;
cout << "Enter the Height in Inches: ";
cin>>height;
}
cout << "Enter Age: ";
cin >>age;

while (age==0||age<0)
{
cout <<"Error: Incorrect Age."<<endl;
cout << "Enter Age: ";
cin>>age;
}
cout <<"Enter Gender: ";
cin >>gender;

}
}

if (gender=='M'||gender=='m')
{
BMR=66+(6.3*weight)+(12.9*height)-(6.8*age);
number=BMR/230;
cout<<"BMR is ";
cout << fixed << setprecision(2) << BMR<<endl<< endl;
cout<<"The number of chocolate bars that should be consumed to maintain one's weight for male of the specified height ("<<height;
cout<<"), weight ("<<weight;
cout<<"), and age ("<<age;
cout<<") is ";
cout<< fixed << setprecision(2) << number<< endl;
cout<<"."<<endl<<endl;
}

else if(gender=='F'||gender=='f')
{
BMR=655+(4.3*weight)+(4.7*height)-(4.7*age);
number=BMR/230;
cout<<"BMR is ";
cout << fixed << setprecision(2) << BMR<<endl<< endl;
cout<<"The number of chocolate bars that should be consumed to maintain one's weight for female of the specified height ("<<height;
cout<<"), weight ("<<weight;
cout<<"), and age ("<<age;
cout<<") is ";
cout<< fixed << setprecision(2) << number;
cout<<"."<<endl<<endl;
}
cout<<"Choose:"<<endl;
cout<<"   a) Sedentary"<<endl;
cout<<"   b) Somewhat active (Exercise occasionally)"<<endl;
cout<<"   c) Active (Exercise 3-4 days per day)"<<endl;
cout<<"   d) Highly Active (Exercise every day)"<<endl;
cout<<"Enter your choice:";
cin>>choice;
while (choice!='a'&&choice!='b'&&choice!='c'&&choice!='d')
{cout<<"Error: choose from given options"<<endl;
cout<<"Choose:"<<endl;
cout<<"   a) Sedentary"<<endl;
cout<<"   b) Somewhat active (Exercise occasionally)"<<endl;
cout<<"   c) Active (Exercise 3-4 days per day)"<<endl;
cout<<"   d) Highly Active (Exercise every day)"<<endl;
cout<<"Enter your choice:";
cin>>choice;
}

switch (choice)
{
case 'a':cout<<"Increase in BMR percentage: 20%"<<endl;
         BMR=BMR*1.2;
         cout<<"New BMR value:";
         cout << fixed << setprecision(2) << BMR<< endl;
         number=number*1.2;
         cout<<"Number of chocolates based on new BMR value:";
         cout << fixed << setprecision(2) << number<< endl;
         break;
case 'b':cout<<"Increase in BMR percentage: 30%"<<endl;
         BMR=BMR*1.3;
         cout<<"New BMR value:";
         cout << fixed << setprecision(2) << BMR<< endl;
         number=number*1.3;
         cout<<"Number of chocolates based on new BMR value:";
         cout << fixed << setprecision(2) << number<< endl;
         break;
case 'c':cout<<"Increase in BMR percentage: 40%"<<endl;
         BMR=BMR*1.4;
         cout<<"New BMR value:";
         cout << fixed << setprecision(2) << BMR<< endl;
         number=number*1.4;
         cout<<"Number of chocolates based on new BMR value:";
         cout << fixed << setprecision(2) << number<< endl;
         break;
case 'd':cout<<"Increase in BMR percentage: 50%"<<endl;
         BMR=BMR*1.5;
         cout<<"New BMR value:"; number=number*1.5;
         cout << fixed << setprecision(2) << BMR<< endl;
         cout<<"Number of chocolates based on new BMR value:";
         cout << fixed << setprecision(2) << number<< endl;
         break;
}

}
                    


