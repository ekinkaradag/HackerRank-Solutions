#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

struct node{
    int x,y;
};

int totalDistance(int fromX, int fromY, int toX, int toY){
    return abs(toX-fromX) + abs(toY-fromY);
}
void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
    node bot;
    bot.x=posc; bot.y=posr;
    int shortestDistance = dimw * dimh, currentDistance;
    vector <node> dirts;
    int loc;
    for(int i = 0; i < dimh; i++){
        for(int j = 0; j < dimw;j++){
            if( board[i][j] == 'd'){
                node temp; temp.x=j; temp.y=i;
                dirts.push_back(temp);
            }
                    
        }
    }
    for(int i= 0; i<dirts.size();i++){
        currentDistance = totalDistance(bot.x, bot.y, dirts[i].x, dirts[i].y);
        if( currentDistance < shortestDistance){
            shortestDistance = currentDistance;
            loc = i;
        }
    }
    if(bot.x>dirts[loc].x){
        cout << "LEFT\n";
        posc--;
    }
    else if(bot.x<dirts[loc].x){
        cout << "RIGHT\n";
        posc++;
    }
    else if (bot.y>dirts[loc].y){
        cout << "UP\n";
        posr--;
    }
    else if(bot.y<dirts[loc].y){
        cout << "DOWN\n";
        posr++;
    }
    else
        cout << "CLEAN\n";
}

int main(void) {
    int pos[2];
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}