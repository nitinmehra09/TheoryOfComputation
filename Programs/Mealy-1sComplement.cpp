#include <iostream>
using namespace std;
int main() {
    char input[20];
    char output[20];
    cout<<"Name - nitin mehra"<<endl;
    cout<<"0818CS231127"<<endl;
    cout<<"Enter a String :";
    cin>>input;
    int j =-1;
    int i =-1;
    A:{
        i++;
        if(input[i]=='0'){
            j++;
            output[j] = '1';
            goto A;
        }
        else if(input[i]=='1'){
            j++;
            output[j]='0';
            goto B;
        }
        else if(input[i]=='\0')
            goto end;
        else 
            goto invalid;
    }
    B:{
        i++;
        if(input[i]=='0'){
            j++;
            output[j]='1';
            goto B;
        }
        else if(input[i]=='1'){
            j++;
            output[j]='0';
            goto A;
        }
        else if(input[i]=='\0')
            goto end;
        else 
            goto invalid;
    }
    
    end:{
        int k = 0;
        cout<<"1's Compliment of "<<input<<" is :";
        while(k<=j){
            cout<<output[k];
            k++;
        }
        return 0;
    }
    invalid:{
        cout<<"String invalid";
        return 0;
    }
    return 0;
}