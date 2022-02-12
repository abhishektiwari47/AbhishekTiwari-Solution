#include<iostream>
#include<string.h>
using namespace std;

class calculator{
	public :
		double a,b;
		string str;
	    double calculate(double c,double d,string s)
	    {
            
	    	if((s=="add") || (str == "Add") || (str == "Addition") || (str == "addition"))
	    	{
	    		return c+d;
			}
			else if((str=="sub") || (str == "subs") || (str == "substract") || (str == "Sub") || (str == "Subs") || (str == "Substract"))
	    	{
	    		return c-d;
			}
		    else if((str=="mul") || (str == "Mul") || (str == "Mult") || (str == "mult") || (str == "Multiply") || (str == "multiply"))
	    	{
	    		return c*d;
			}
			else if((str=="division") || (str == "Division") || (str == "Div") || (str == "div"))
	    	{
	    		return (double)c/d;
			}
			
			
		}
		
		
		int operations()
		{
		  double output;
		  printf("Please input an operation (Add,Subs,Mult,Div)\n");
		  printf("Type (Exit) for ShutDown\n");
		  cin>>str;
		  if((str=="exit") || (str == "Exit") || (str == "EXIT"))
		  {
		  	return 0;
		  }
		  printf("Please input two values for Calculation\n");
		  cin>>a>>b;
		  output=calculate(a,b,str);
		  cout<<output<<endl;
		  operations();
		}
			
};


int main(){
	calculator x;
	x.operations();
	return 0;
}

