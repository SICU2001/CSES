#include <iostream>
#include <string>
 
using namespace std;
 
string word;
int letters[26];
char lt='a', x;
bool pos;
 
int main()
{
    cin >> word;
    pos=true;
    for(int i=0; i<word.size(); i++){
        letters[word[i]-'A']++;
    }
    for(int i=0; i<26; i++){
        if(letters[i]%2){
            if(lt!='a'){
                pos=false;
            }else{
                lt=i+65;
            }
        }
    }
    if(!pos){
        cout << "NO SOLUTION" << endl;
    }else{
        for(int i=0; i<26; i++){
                for(int j=0; j<letters[i]/2; j++){
                    x = i+65;
                    cout << x;
                }
        }
        if(lt!='a') cout << lt;
        for(int i=25; i>=0; i--){
                for(int j=0; j<letters[i]/2; j++){
                    x = i+65;
                    cout << x;
                }
        }
        cout << endl;
    }
 
 
    return 0;
}
