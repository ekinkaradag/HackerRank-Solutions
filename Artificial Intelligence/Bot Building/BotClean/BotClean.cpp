#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

struct node{
    int x,y;
};

double totalDistance(int fromX, int fromY, int toX, int toY){
    return abs(toX-fromX) + abs(toY-fromY);
}

void next_move(int posr, int posc, vector <string> board) {
    node bot;
    bot.x=posc; bot.y=posr;
    double shortestDistance = board.size() * board.size(), currentDistance;
    vector <node> dirts;
    int loc;
    for(int i = 0; i < board.size(); i++){
        for(int j = 0; j < board[i].size();j++){
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
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}