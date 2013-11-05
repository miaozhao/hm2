/* homework1 in C++ which
 * using to calculate BMR */

#include "declare.hh"
using namespace std;

// declaring variables:
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
};
int misplace=0;

Info calculate(struct Info input);
string modifyword(string word);
Info choice(struct Info input);
Info initialize();
void Output(struct Info input);
Info Input(string s );

/*//calculate the BMR and chocolate numbers
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

string modifyword(string word){

    int size;
    int count;

    size=word.length();
    for(count=0;count<size-1;count++){
       if(word.at(count)=='#')
          word.erase(count,1);
      }
   return word;
}

//do a choice, and then caculate the new BMR and chocolate numbers
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

//write the output into an txt file
void Output(struct Info input)
{
  Info a=input;
  string Gender=a.Gender;
  ofstream outFile("output.txt",ios::app);
 if(a.Weight>0){
     outFile << "**************************" << endl;
     outFile <<" Name of Employee: "<<a.name<<endl<<endl;
     outFile <<" BMR is "<<a.BMR;
     outFile <<" The number of chocolate bars that should be consumed to"<<endl;
     if(Gender=="f"||Gender=="F"){
          outFile <<" maintain one's weight for female of the specified height("<<a.Height<<"), weight"<<endl;
     }

     if(Gender=="m"||Gender=="M"){
          outFile <<" maintain one's weight for male of the specified height("<<a.Height<<"), weight"<<endl;
     }
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
  outFile.close();
   }

//delet the specific char in s string

// read the input from a txt file
Info Input(string s )
{
    stringstream t;
    string elem;
    Info a;
    int count=0;
    int size=0;
    t<<s;
    t>>elem;
       a.name=modifyword(elem);
    t>>elem;
       elem=modifyword(elem);
       a.Weight=atoi(elem.c_str());
    t>>elem;
       elem=modifyword(elem);
       a.Height=atoi(elem.c_str());
    t>>elem;
       elem=modifyword(elem);
       a.Age=atoi(elem.c_str());
    t>>elem;
       elem=modifyword(elem);
       a.Gender=elem;
    t>>elem;
       elem=modifyword(elem);
       a.Choice=elem;
    return a;

}*/

//the main function

int main()
{
    string inFn;
    string input;
    string line;
    Info temp;
   // string s[1000];
    Info mm= initialize();
   Info employee[1000];


    string b=mm.name;
    cout<<mm.name<<endl;
    double c;
    mm=calculate(mm);
    mm=choice(mm);
    cout<<mm.BMR<<endl<<mm.new_BMR<<endl;
    ofstream outFile("output.txt",ios::trunc);
    Output(mm);



cout<< "Enter the file name:";
    getline(cin,inFn);          //put the file name
    cout<<inFn<<endl;
    ifstream inFile;             //declaration of a file
    inFile.open(inFn.c_str());     //open the file, the name of which if inFn

    if(inFile)
    cout<<"right!!!"<<endl;
    int empty=0;
    int j=0;
    while(getline(inFile,line))
     {
         if(line=="#")
            empty++;
         //how to erase the # in a word
         else{
            employee[j]=Input(line);
            cout<<employee[j].name;
            cout<<line<<endl;
            j++;
         }
     }
   for(int h=0;h<j-1;h++){
       if(employee[h].name>employee[h+1].name){
         temp=employee[h];
         employee[h]=employee[h+1];
         employee[h+1]=temp;
       }


  }
  for(int m=0;m<j;m++){

       employee[m]=calculate(employee[m]);
       employee[m]=choice(employee[m]);
       Output(employee[m]);
   }
   /* //outFile << inFn << endl;
   inFile >> input;
    s[0]=input;
    int i=1;
    int Misplacount=0;
       while(!inFile.eof()){

            outFile << input << endl;
            inFile >> input;
            if(input!="#")
                s[i]=input;

            if(input=="#")
               Misplacount++;
                cout <<s[i]<<endl;
                cout<<atoi(s[i].c_str())<<endl;
               i++;

        }
        inFile.close();

      cout<<"Misplacount:"<<Misplacount-1<<endl;*/
      cout<<empty-1<<j<<endl;

         return 0;

}
