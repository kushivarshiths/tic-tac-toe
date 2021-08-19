#include<iostream>
#include<vector>
#include "ttt.hpp"

int main(){
  std::vector < std::vector<int> > grid ;
 bool player2win = false;
 bool player1win = false;
 win = false;
while(!win)
{ int i;
  int j;
  askplayer1(grid);
  if(check_win1(grid) == true){
     std::cout << "Player 1 Wins!\n";
     win = true;
     continue;
  }

  askplayer2(grid);
  
  if(check_win2(grid) == true){
    std::cout << "Player 2 Wins\n";
    win = true;
  }
}



}
