#include <iostream>
using namespace std;
int main() {
    int n;
    do{
        char input[20];
        cout<<"Name - nitin mehra"<<endl;
        cout<<"0818CS231127"<<endl;
        cout<<"Enter a String :";
        cin>>input;
        int i =-1;
        
        A:{
            i++;
            if(input[i]=='0' || input[i]=='2' ||input[i]== '4' ||input[i]== '6' ||input[i]== '8')
                goto B;
            else if(input[i]=='1' ||input[i]== '3' ||input[i]== '5' ||input[i]== '7' ||input[i]== '9')
                goto C;
            else if(input[i]=='\0')
                goto reject;
            else 
                goto invalid;
        }
        B:{
            i++;
            if(input[i]=='0' ||input[i]== '2' ||input[i]== '4' ||input[i]== '6' ||input[i]== '8')
                goto B;
            else if(input[i]=='1' ||input[i]== '3' ||input[i]== '5' ||input[i]== '7' ||input[i]== '9')
                goto C;
            else if(input[i]=='\0')
                goto accept;
            else 
                goto invalid;
        }
        C:{
            i++;
            if(input[i]=='0' ||input[i]== '2' ||input[i]== '4' ||input[i]== '6' ||input[i]== '8')
                goto B;
            else if(input[i]=='1' ||input[i]== '3' ||input[i]== '5' ||input[i]== '7' ||input[i]== '9')
                goto C;
            else if(input[i]=='\0')
                goto reject;
            else 
                goto invalid;
        }
        accept:{
            cout<<"String accepted"<<endl;
            cout<<"press 1 to Run again ";
            cin>>n;
            continue;
        }
        reject:{
            cout<<"String rejected"<<endl;
            cout<<"press 1 to Run again";
            cin>>n;
            continue;
        }
        invalid:{
            cout<<"String invalid"<<endl;
            cout<<"press 1 to Run again";
            cin>>n;
            continue;
        }
    }while(n==1);
    return 0;
}