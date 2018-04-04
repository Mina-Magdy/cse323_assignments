#include <iostream>
using namespace std;

int main(){
    int n , m;
    cin >> n >> m;
    int g[n][n];
    memset(g ,  0 , sizeof(g));
    for(int i = 0 ; i < n ; i++){
        int u , v ;
        cin >> u >> v;
        u-- ; v --;
        g[u][v] = 1;
        g[v][u] = 1;
    }

    for(int i = 0 ; i < n ; i++){
        cout << i + 1 << ",";
        int cnt = 0;
        for(int j = 0 ; j < n ; j ++){
            cnt += g[i][j];
        }
        cout << cnt << "\n";
    }
    
}
