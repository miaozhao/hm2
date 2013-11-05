/* homework1 in C++ which
 * using to calculate BMR */

#ifndef DECLARE_HH
#define DECLARE_HH  //declare the header

#include <iostream>  //
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

// declaring variables:
extern int Weight;
extern int Height;
extern int Age;
extern double BMR;
extern double number;
//extern string inFn;
//extern struct Info;


//input the weight
void input_weight();
//input the height
void input_height();
//input age
void input_age();
//input gender
void input_gender();
//do a choice
void input_choice();

/*Info calculate(struct Info input);
string modifyword(string word);
Info choice(struct Info input);
Info initialize();
void Output(struct Info input);
Info Input(string s );*/


#endif // DECLARE_HH
