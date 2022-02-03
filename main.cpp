/*
THIS PROJECT MAINLY FOCUSES ON LOGIN SYSTEM
I.E IF YOU ARE NEW TO SYSTEM YOUR ARE TO REGISTER FOR A ACCOUNT
---------
ofstream file;//It is used to create files and write information to the files.
        file.open("d:\\"+ username + ".txt");
        file << username <<endl << password;
        file.close();
        main();

---------
it is done using ofstream--> this cmmd allows to create a file & write info to file
then we open the file using username
where the creditionals of the account like username and password are stored.
we close the file.

2.if we  already have an account we can login 
-----------
      cout<< "Enter username: "; cin>>username;
      cout<<"Enter password: "; cin>>password;
      ifstream read("d:\\"+ username + ".txt");
      getline(read, un);
      getline(read, pass);
      if(un == username && pass == password)
      {
          return true;
      }
      else
      {

          return false;
      }
-----------
here we use a input file stream like ifstream to check if such an account with
suitable creditinals like userame and password exist
if they exist then bool will return true  else false

*/


#include<iostream>
#include<fstream>//It is used to create files, write information to files, and read information from files.
#include<string>
using namespace std;
  bool IsLoggedIn()
  {
      string username,password,un,pass;
      cout<< "Enter username: "; cin>>username;
      cout<<"Enter password: "; cin>>password;
      ifstream read("d:\\"+ username + ".txt");
      getline(read, un);
      getline(read, pass);
      if(un == username && pass == password)
      {
          return true;
      }
      else
      {

          return false;
      }
  }



int main()
{
    int choice;
    cout<< "1: Register\n2: Login\nYour choice: \n"; cin>>choice;
    if(choice ==1)
    {
        string username,password;
        cout<< "--WELCOME TO FILE HANDLING SYSTEM--\n";
        cout<< "select a username: "; cin>>username;
        cout<< "select a password: "; cin>>password;

        ofstream file;//It is used to create files and write information to the files.
        file.open("d:\\"+ username + ".txt");
        file << username <<endl << password;
        file.close();
        main();


    }
    else if(choice==2)
    {
        bool status = IsLoggedIn();
        if(!status)
        {
            cout<< "OOPS,False Login!! "<<endl;
            system("PAUSE");
            return 0;

           // Bodging in System("pause") runs the Windows command-line "pause" program and 
           // waits for that to terminate before it continues execution of the program 
        }
        else
        {
            cout<< "Hurray,Successful Logged in!" <<endl;
            system("PAUSE");
            return 1;
        }
    }
}
