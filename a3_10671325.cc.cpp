#include <iostream>
using namespace std;
int main() {
	  int a;
    float score;
 
cout<< "enter score"<<endl;
    cin>>a;


    if(a>=80&&a<=100)
    {
        cout<<"A"<<endl;
    }

    else if(a>=75&&a<=79)
    {
        cout<<"B+"<<endl;
    }

    else if(a>=70&&a<=74)
    {
        cout<<"B"<<endl;
    }

    else if(a>=65&&a<=69)
    {
        cout<<"C+"<<endl;
    }

    else if (a>=60&&a<=64)
    {
        cout<<"C"<<endl;
    }
	else if (a>=55&&a<=59)
	{ 
	cout<< "D+"<<endl;
		}
		

	else if (a>=50&&a<=49)
	{
		cout<< "D"<<endl;
		}	
		
	else if (a>=45&&a<=49)
	{
		cout<< "E"<<endl;
	}
		
	else if (a>=0&&a<=44)
	{ 
	    cout<< "F"<<endl;
	}
		
		
		
		
			
	return 0;
}
