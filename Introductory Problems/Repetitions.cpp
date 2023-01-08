#include <iostream>
#include <string>
 
using namespace std;
 
int res=1, sub=1;
string dna;
 
int main()
{
    cin>> dna;
    for(int i=1; i<dna.size(); i++){
        if(dna[i]==dna[i-1]){
            sub++;
        }
        else{
            res=max(res,sub);
            sub=1;
        }
    }
    res=max(res,sub);
    cout << res;
}
