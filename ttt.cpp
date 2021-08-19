#include<iostream>
#include<vector>
std::vector<std::vector<int> > askplayer1(std::vector<std::vector<int> > grid){
  std::cout << "Player 1 turn You have to Put X in the grid\nPlease tell us the location\n";
  int i;
  int j;
  std::cin >> i >> j;
  if(grid[i][j] == 0 && i < 3 && j < 3){
  grid[i][j] = 1;
  }
  return grid;
}
std::vector<std::vector<int> > askplayer2(std::vector<std::vector<int> >  grid)
{
  std::cout << "Player 2 turn You have to Put O in the grid\nPlease tell us the location\n";
  int i;
  int j;
  std::cin >> i >> j;
  if(grid[i][j]==0 && i < 3 && j < 3){
    grid[i][j] = 2;
  }
  
}

bool check_win1(std::vector<std::vector<int> > grid){
  
}
