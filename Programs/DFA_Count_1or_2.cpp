#include <iostream>
using namespace std;
int main() {
    char input[20];
    cout<<"Name Nitin mehra"<<endl;
    cout<<"0818CS231127"<<endl;
    cout<<"Enter a String :";
    cin>>input;
    int i =-1;
    int count_1=0;
    int count_0=0;
    A:{
        i++;
        if(input[i]=='0')
            goto B;
        else if(input[i]=='1')
            goto C;
        else if(input[i]=='\0')
            goto reject;
        else 
            goto invalid;
    }
    B:{
        count_0++;
        i++;
        if(input[i]=='0')
            goto B;
        else if(input[i]=='1')
            goto C;
        else if(input[i]=='\0')
            goto accept;
        else 
            goto invalid;
    }
    C:{
        count_1++;
        i++;
        if(input[i]=='0')
            goto B;
        else if(input[i]=='1')
            goto C;
        else if(input[i]=='\0')
            goto accept;
        else 
            goto invalid;
    }
    


    accept:{
        cout<<"String Accepted"<<endl;
        cout<<"No of zero's in String : ";
        cout<<count_0<<endl;
        cout<<"No of one's in String : ";
        cout<<count_1;
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