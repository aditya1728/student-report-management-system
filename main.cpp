#include <iostream>
#include <fstream>
#include <string>
using namespace std ;
string calcGrade(string* name , string* roll , int* ma , int* en , int* cs , int* phy , int* cy )
{

  double avg = (*ma+*en+*cs+*phy+*cy)/5;
  string grad ;
  cout<< endl ;
  cout<<"Grade = ";
    if(avg>=91 && avg<=100)
    {
      cout<<"A1" ;
      grad  = "A1" ;
    }

    else if(avg>=81 && avg<91)
    {
      cout<<"A2";
      grad = "A2" ;
    }

    else if(avg>=71 && avg<81)
    {
      cout<<"B1";
      grad = "B1" ;
    }

    else if(avg>=61 && avg<71)
    {
      cout<<"B2";
      grad = "B2" ;
    }

    else if(avg>=51 && avg<61)
    {
      cout<<"C1";
      grad = "C1" ;
    }

    else if(avg>=41 && avg<51)
    {
      cout<<"C2";
      grad = "C2" ;
    }

    else if(avg>=33 && avg<41)
    {
      cout<<"D";
      grad = "D" ;
    }

    else if(avg>=0 && avg<33)
    {
      cout<<"F";
      grad = "F" ;
    }

    else
    {
      cout<<"Absent" ;
      grad = "Ab" ;
    }
    return grad ;

}
void file_handle(string name, string roll , string grad)
{
  ofstream myfile("xyz.txt" ,  ios :: app) ;

  myfile << name << "|" << roll << "|" << grad << endl  ;
  myfile.close();

}
int main() {
  string name ;
  string roll ;
  int ma , en , cs , phy , cy ;
  double avg ;

  string grad ;
  cout << "Enter the following details correctly " << endl ;
  cout <<"Enter the name of the student : " ;
  cin >> name ;
  cout <<"Enter the roll no. of the student : " ;
  cin >> roll ;
  cout << endl ;
  cout <<"Enter the marks in Mathematics :" << endl ;
  cin >> ma ;
   cout <<"Enter the marks in English :" << endl ;
  cin >> en ;
   cout <<"Enter the marks in  Computer Science :" << endl ;
  cin >> cs ;
   cout <<"Enter the marks in Physics :" << endl ;
  cin >> phy ;
   cout <<"Enter the marks in Chemistry :" << endl ;
  cin >> cy ;
   grad = calcGrade(&name,&roll ,&ma,&en,&cs,&phy,&cy) ;
   file_handle(name , roll , grad);
}

