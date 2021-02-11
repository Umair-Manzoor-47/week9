#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string password;
    string info;
    fstream newFile;
    while (true)
    { 

        int option = 0;
        cout<< "1- Sign up"<<endl;
        cout<< "2- Sign in"<<endl;
        cout<< "Option -> ";
        cin>>option;
        if (option==1)
        {
           cout<<" Username -> ";
           cin>>info;
           cout<< "Password -> ";
           cin>>password;

         newFile.open("login_info.txt",ios::app);
    
         newFile<<info <<endl;
         newFile<<password <<endl;
        
         newFile.close();

        
        }
        if(option==2){
            string C_info, C_pass;
           cout<<" Username -> ";
           cin>> C_info;
           cout<< "Password -> ";
           cin>> C_pass;
           int found = 0;
        
          fstream file;
            file.open("login_info.txt",ios::in);
           string Correct_info, Correct_pass;
            while (getline(file,Correct_info) && getline(file,Correct_pass)){
                
                if ((C_info == Correct_info) && (C_pass==Correct_pass)){
                        found = 1;
                    }
                }
                if (found==1){
                    cout<<"Valid"<<endl;
                }
                else
                {
                    cout<<"Inalid"<<endl;
                }
                
            }
            
        }
        
    }
  