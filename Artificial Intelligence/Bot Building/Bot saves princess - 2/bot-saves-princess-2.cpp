#include <iostream>
#include <string>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    int px,py;
    bool flag= false;
    for(int i = 0;i < n;i++){
        if(flag){
            break;
        }else{
            for(int j = 0;j < n;j++){
                if( grid[i][j] == 'p'){
                    px=j;
                    py=i;
                    flag=true;
                    break;
                }
                    
            }
        }
    }
    if(c>px)
        cout << "LEFT\n";
    else if(c<px)
        cout << "RIGHT\n";
    else if (r>py)
        cout << "UP\n";
    else if(r<py)
        cout << "DOWN\n";
    
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}