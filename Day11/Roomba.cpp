//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//Roomba

bool solve(vector<string>& moves, int x, int y) {
    int a=0,b=0;
    for(int i=0;i<moves.size();i++){
        if(moves[i] == "NORTH") a++;
        else if(moves[i] == "SOUTH") a--;
        else if(moves[i] == "EAST") b++;
        else if(moves[i] == "WEST") b--;
    }
    if(x == b and y==a) return true;
    else return false;
}