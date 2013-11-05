#include "declare.hh"
using namespace std;

struct Info
{
    string name;
    int Weight;
    int Height;
    int Age;
    string Gender;
    string Choice;
    double BMR;
    double new_BMR;
    double number;
    double new_number;
    string percent;
};// declaring variables:


//input gender
Info calculate(struct Info input)
{
    Info a=input;

    int const A=655;
    int const B=66;
    double const C=12.9;
    int const D=230;
    string Gender=a.Gender;
   
	if (Gender=="f"||Gender=="F"){
	     //calculate the BMR for female
            a.BMR=A+(4.3*a.Weight)+(4.7*a.Height)-(4.7*a.Age);
            a.number=a.BMR/D;//calculate the needed chocolate number
           
	}
	else if (Gender=="m"||Gender=="M"){
            //calculate the BMR for male
            a.BMR=B+(6.3*a.Weight)+(C*a.Height)-(6.8*a.Age);
            a.number=a.BMR/D;//calculate the needed chocolate number
       }
     return a;
	
}

//do a choice
Info choice(struct Info input)
{      Info a=input;
        string Choice=a.Choice;
       //print the choices
	if(Choice=="sedentary")//choice loop
	{
            a.new_BMR=a.BMR*1.2;//new value for BMR
            a.new_number=a.number*1.2;//new value for number
            a.percent="20%";
       }
       else if(Choice=="Somewhat active")
       {
                a.new_BMR=a.BMR*1.3;//new value for BMR
                a.new_number=a.number*1.3;//new value for number
                a.percent="30%";
       }
       else if(Choice=="Active")
       {         
                a.new_BMR=a.BMR*1.4;// new value for BMR
                a.new_number=a.number*1.4;//new value for number
                a.percent="40%";
      }
     else if(Choice=="Highly active")
     {        
                a.new_BMR=a.BMR*1.5;//new value for BMR
                a.new_number=a.number*1.5;//new value for number
                a.percent="50%";
       }
      return a;    
}

Info initialize()
{
// Declare temporary local struct
   Info temp_info;
// Initialize all member variables

    temp_info.name="John";
    temp_info.Weight=75;
    temp_info.Height=150;
    temp_info.Age=23;
    temp_info.Gender="f";
    temp_info.Choice="Active";
    temp_info.BMR=0;
    temp_info.new_BMR=0;
    temp_info.number=0;
    temp_info.new_number=0;
    temp_info.percent="0";

// Pass struct back
return temp_info;
}

void output(struct Info input)
{
  Info a=input;
  ofstream outFile("out.txt"); 
 if(a.Weight>0){
     outFile << "**************************" << endl;
     outFile <<" Name of Employee: "<<a.name<<endl<<endl;
     outFile <<" BMR is "<<a.BMR;
     outFile <<" The number of chocolate bars that should be consumed to"<<endl;
     outFile <<" maintain one's weight for male of the specified height("<<a.Height<<"), weight"<<endl;
     outFile <<" ("<<a.Weight<<"), and age ("<<a.Age<<") is "<<a.number<<endl<<endl;
     outFile <<" Increase in BMR percentage: "<<a.percent<<endl<<endl;
     outFile <<" New BMR value: "<<a.new_BMR<<endl<<endl;
     outFile <<" Number of chocolates based on new BMR value: "<<a.new_number<<endl<<endl;
     outFile << "**************************" << endl;
  }
 else if(a.Weight<0){
     outFile << "**************************" << endl;
     outFile <<" Name of Employee: "<<a.name<<endl<<endl;
     outFile <<" Error: Incorrect weight "<<endl;
     outFile << "**************************" << endl;

 }
 
}

Info Input(string s)
{
 stringstream t;
 t<<s;
 string elem;
 Info a;
 
 t>>elem;
    a.name=elem;
 t>>elem;
    a.Weight=atoi(elem.c_str());
 t>>elem;
    a.Height=atoi(elem.c_str());
 t>>elem;
    a.Age=atoi(elem.c_str());
 t>>elem;
    a.Gender=elem;
 t>>elem;
    a.Choice=elem;
 return a;

}

//the main function

int main()
{
  Info mm;
  string s="john 75 150 23 f Active";
  mm=Input(s);
  cout<<mm.name<<endl;
  stringstream t;
  t<<s;
  string str;
  while(t>>str)
  cout<<str<<endl;
  return 0;
   


    

}
