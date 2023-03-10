#include <iostream>
#include <vector>
#include <math.h>
 
using namespace std;
 
const double EPS = 1e-9;
const int INF = 2; // it doesn't actually have to be infinity or a big number
 
int gauss (vector < vector<double> > a, vector<double> & ans){
    int n = (int) a.size();
    int m = (int) a[0].size() - 1;
 
    vector<int> where (m, -1);
    for (int col=0, row=0; col<m && row<n; ++col) {
        int sel = row;
        for (int i=row; i<n; ++i)
            if (abs (a[i][col]) > abs (a[sel][col]))
                sel = i;
        if (abs (a[sel][col]) < EPS)
            continue;
        for (int i=col; i<=m; ++i)
            swap (a[sel][i], a[row][i]);
        where[col] = row;
 
        for (int i=0; i<n; ++i)
            if (i != row) {
                double c = a[i][col] / a[row][col];
                for (int j=col; j<=m; ++j)
                    a[i][j] -= a[row][j] * c;
            }
        ++row;
    }
 
    ans.assign (m, 0);
    for (int i=0; i<m; ++i)
        if (where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];
    for (int i=0; i<n; ++i) {
        double sum = 0;
        for (int j=0; j<m; ++j)
            sum += ans[j] * a[i][j];
        if (abs (sum - a[i][m]) > EPS)
            return 0;
    }
 
    for (int i=0; i<m; ++i)
        if (where[i] == -1)
            return INF;
    return 1;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t,A,B,res;
    cin>>t;
 
    while(t--){
        cin>>A>>B;
 
        vector<vector<double>> a(2, vector<double> (3));
        vector<double> ans(2);
 
        a[0][0]=1, a[0][1]=2, a[0][2]=A;
        a[1][0]=2, a[1][1]=1, a[1][2]=B;
 
        res=gauss(a,ans);
        //for(int i=0; i<ans.size(); i++) cout<<ans[i]<< " ";
        if(res==1 && abs(ans[0]-ceil(ans[0]))<EPS && abs(ans[1]-ceil(ans[1]))<EPS && ans[0]>=-EPS && ans[1]>=-EPS) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
 
 
    }
}
