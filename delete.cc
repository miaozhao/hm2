#include<fstream>
#include<iostream>
#include<string>
using namespace std;
string delet(string &s,int i);                           //该函数用于删除指定元素 
                                                         //s参数为目标字符串  i为操作位置 
/* 没有找到字符串合适的匹配函数来删除指定元素 */ 
int main()
{
    string s2="123456789";                               //目标文件 
    ofstream ofile1("d:\\delet.txt");                    //将目标文件放到D盘 
    ofile1<<s2;                                          //把目标文件 放到指定文件内 
    int k=0;
    while(k<s2.size())
    {
    cout<<"姓名："<<s2[k]<<endl;                         //输出目标文件内容 
    k++;
    }
    ofile1.close();                                      //关闭文件 
    ifstream ifile( "d:\\delet.txt");                    //打开文件 
    string s=" ";
    ifile>>s;                                            //放入字符串内进操作                                              //现实操作对象 
    char c='5';                                          //待删除对象 
    int count=0;
    while(s[count]!=c)                                   //计算删除元素位置 
    ++count;
    cout<<"the pose of 5 is "<<count<<endl;
    delet( s,count); 
    k=0;                                    //调用函数将字符串内的元素删除
    while(k<(s.size()-1))
    /* 没有想到办法删除元素后把字符串的 size 改过来！！ */
    {
    cout<<"姓名："<<s[k]<<endl;                         //输出目标文件内容 
    k++;
    }                            
    ifile.close();                                       //关闭文件 
    ofstream ofile2("d:\\delet.txt");                    //写字符串 
    ofile2<<s;
    ofile2.close();                                      //关闭文件 
    system("pause");
    return 0;
    }
string delet(string &s,int num)
{
       int size=s.size();
       if(num>=0)
       for(int i=num;i<size-1;i++ )
       {
               s[i]=s[i+1];
               }
        s[size-1]=' ';
        return s;
       }