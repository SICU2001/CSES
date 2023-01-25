#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
vector<string> recGray(int n){
    vector<string> gc;
    if(n==1){
        gc.push_back("0");
        gc.push_back("1");
        return gc;
    }
 
    gc = recGray(n-1);
    int s=gc.size();
    for(int i=0; i<s; i++){
        gc.push_back(gc[s-1-i]);
    }
    for(int i=0; i<s; i++){
        gc[i]="0"+gc[i];
    }
    for(int i=s; i<2*s; i++){
        gc[i]="1"+gc[i];
    }
    return gc;
}
 
int main()
{
    int n;
	cin >> n;
 
	vector<string> codes = recGray(n);
	for(int i=0; i<codes.size(); i++){
        cout<<codes[i]<<endl;
	}
 
	return 0;
}
