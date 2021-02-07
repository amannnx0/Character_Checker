#include<iostream>
using namespace std;

int main(){
    char character;
    cout<<"\nEnter a character:";
    cin>>character;
    if(character=='A' || character== 'E' || character== 'I' || character== 'O' || character== 'U'){
        cout<<"\nThe character is a Vowel"<<endl;
    }
    else if(character== 'a' || character== 'e' || character== 'i' || character== 'o' || character== 'u'){
        cout<<"\nThe character is a Vowel"<<endl;
    }
    else{
        cout<<"\nThe character is a Consonant"<<endl;
    }
return 0;
}
