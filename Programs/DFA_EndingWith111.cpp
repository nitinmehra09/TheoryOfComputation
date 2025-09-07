#include <iostream>
using namespace std;
int main() {
    char input[20];
    cout<<"Name Nitin mehra"<<endl;
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
            goto A;
        else if(input[i]=='1')
            goto C;
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
            goto E;
        else if(input[i]=='1')
            goto D;
        else if(input[i]=='\0')
            goto accept;
        else 
            goto invalid;
    }
    E:{
        i++;
        if(input[i]=='0')
            goto E;
        else if(input[i]=='1')
            goto F;
        else if(input[i]=='\0')
            goto accept;
        else 
            goto invalid;
    }
    F:{
        i++;
        if(input[i]=='0')
            goto E;
        else if(input[i]=='1')
            goto D;
        else if(input[i]=='\0')
            goto accept;
        else 
            goto invalid;
    }
    accept:{
        cout<<"String Accepted";
        return 0;
    }
    invalid:{
        cout<<"Invalid String";
        return 0;
    }
    reject:{
        cout<<"String rejected";
        return 0;
    }
    
    
    
    return 0;
}