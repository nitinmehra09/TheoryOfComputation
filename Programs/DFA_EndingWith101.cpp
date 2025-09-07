// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char input[20];
    cout<<"Name - nitin mehra"<<endl;
    cout<<"0818CS231127"<<endl;
    cout<<"Enter a String :";
    cin>>input;
    int i =-1;
    A:{
        i++;
        if(input[i]=='0')
            goto A;
        else if(input[i]=='1')
            goto B;
        else if(input[i]=='\0')
            goto reject;
        else 
            goto invalid;
    }
    B:{
        i++;
        if(input[i]=='0')
            goto C;
        else if(input[i]=='1')
            goto B;
        else if(input[i]=='\0')
            goto reject;
        else 
            goto invalid;
    }
    C:{
        i++;
        if(input[i]=='0')
            goto A;
        else if(input[i]=='1')
            goto D;
        else if(input[i]=='\0')
            goto reject;
        else 
            goto invalid;
    }
    D:{
        i++;
        if(input[i]=='0')
            goto C;
        else if(input[i]=='1')
            goto B;
        else if(input[i]=='\0')
            goto accepted;
        else 
            goto invalid;
    }
    accepted:{
        cout<<"String accepted";
        return 0;
    }
    reject:{
        cout<<"String rejected";
        return 0;
    }
    invalid:{
        cout<<"String invalid";
        return 0;
    }
    return 0;
}