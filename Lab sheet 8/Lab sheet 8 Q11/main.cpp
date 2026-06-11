#include <iostream>

using namespace std;

int main(){
    string word;
    int upper =0,lower =0,digits=0;

    cout<<"Enter a word: ";
    cin>>word;

    for(int i=0; i<=word.length(); i++){
        if (word[i]>='A' && word[i]<='Z'){
            upper++;
        }

        else if(word[i]>='a' && word[i]<='z'){
            lower++;
        }
        else if(word[i]>='0' && word[i]<='9'){
            digits++;
        }
    }

    cout<<"Number of lowercase characters: "<< lower<<endl;
    cout<<"Number of Uppercase characters: "<<upper<<endl;
    cout<<"Number of digits              : "<<digits<<endl;
}
