#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    int mx,my,px,py;
    for(int i = 0;i < grid.size();i++){
        for(int j = 0;j < grid[i].size();j++){
            if( grid[i][j] == 'm'){
                mx=j;
                my=i;
            }
            else if( grid[i][j] == 'p'){
                px=j;
                py=i;
            }
                
        }
    }
    if(mx>px){
        cout << "LEFT\n";
        mx--;
    }
    else if(mx<px){
        cout << "RIGHT\n";
        mx++;
    }
    else if (my>py){
        cout << "UP\n";
        my--;
    }
    else if(my<py){
        cout << "DOWN\n";
        my++;
    }
    
    
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