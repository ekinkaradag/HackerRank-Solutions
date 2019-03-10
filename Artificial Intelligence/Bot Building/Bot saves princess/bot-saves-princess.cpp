#include <iostream>
#include <string>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
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
    while(mx != px || my != py){
        if(mx>px){
            cout << "LEFT\n";
            mx--;
        }
        else if(mx<px){
            cout << "RIGHT\n";
            mx++;
        }
        if(my>py){
            cout << "UP\n";
            my--;
        }
        else if(my<py){
            cout << "DOWN\n";
            my++;
        }
    
    }
    
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
