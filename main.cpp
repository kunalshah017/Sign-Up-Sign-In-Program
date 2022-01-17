#include <iostream>

using namespace std;
void secret();
int main()
{
    string user , pass , a, b;
    int c,d;
    
    
    cout<<"\n\n------------------------- Sign Up ------------------------- "<<endl;

    cout<<"\n\nEnter Username you want - ";
    cin>>user;
    
    cout<<"\n\nSet a Password - ";
    cin>>pass;
    system("cls");
    cout<<"\n\n------------------------- Sign In ------------------------- "<<endl;
    cout<<"\n\nEnter Your Username - ";
    cin>>a;
    
    cout<<"\n\nEnter Your Password - ";
    cin>>b;
    
    if(a==user && b==pass){
        cout<<"\n\n---------------------------------------------------------------------";
        cout<<"\n\n             You Have Logedin Successfully "<<"\U0001F44D";
        cout<<"\n\n---------------------------------------------------------------------";
        
        secret();
    }
    else if(a!=user || b!=pass){
        cout<<"\n\n---------------------------------------------------------------------";
        cout<<"\n\n               Invalid Userid or Password "<<"\U0001F44E";
        cout<<"\n\n---------------------------------------------------------------------";
    }
     system ("pause>nul");   
    
    return 0;
}
void secret(){
    
int a,b;
char d;

do{
cout<<"\n\n---------------CALCULATOR v0.1---------------\n\n";
cout<<"\nEnter the first number : ";
cin>>a;

cout<<"\nEnter the second number : ";
cin>>b;

cout<<"\nEnter the Operation You Want to Perform \n + > Addition \n - > Subtraction \n * > Multiplication \n / > Divison \n % > Modulus \n E/e > To Exit "<<endl;
cout<<"\n\nEnter The Operator : ";
cin>>d;
system("cls");
if(d=='+')
{cout<<"\n----------------------------------------------------------------";
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n                    Your Answer Is = "<<a+b;
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n----------------------------------------------------------------";}
else if (d=='-')
{cout<<"\n----------------------------------------------------------------";
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n                    Your Answer Is = "<<a-b;
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n----------------------------------------------------------------";}
else if (d=='*')
{cout<<"\n----------------------------------------------------------------";
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n                    Your Answer Is = "<<a*b;
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n----------------------------------------------------------------";}
else if (d=='/'&& b==0)
{cout<<"\n\n----------------------------------------------------------";
    cout<<"\n---- (〜￣▽￣)〜 >> Heyyyy you can't do that << :) ----\n";
cout<<"\n\n----------------------------------------------------------";}
else if (d=='/')
{cout<<"\n----------------------------------------------------------------";
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n                    Your Answer Is = "<<a/b;
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n----------------------------------------------------------------";}
else if (d=='%')
{cout<<"\n----------------------------------------------------------------";
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n                    Your Answer Is = "<<a%b;
cout<<"\n|                                                              |";
cout<<"\n|                                                              |";
cout<<"\n----------------------------------------------------------------";}
else if (d=='E')
{cout<<"\n\n----------------------------------------------------------";
    cout<<"\nThank You For Using This Calculator :)";
cout<<"\n\n----------------------------------------------------------";}
else if (d=='e')
{cout<<"\n\n----------------------------------------------------------";
    cout<<"\nThank You For Using This Calculator :)";
cout<<"\n\n----------------------------------------------------------";}

cout<<endl;
}while(d!='E' && d!='e');
system("pause>nul");
}


