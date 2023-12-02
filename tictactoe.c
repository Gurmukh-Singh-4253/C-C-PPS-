#include <stdio.h>

int finito = 0;
char board[3][3] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
};

void printboard(){
  printf("Current Situation:\n");
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3 ; j++){
      printf("%c ",board[i][j]);
    }
    printf("\n");
  }
}

void endgame(int i, int j){
  printboard();
  if (i==5){
    printf("The Game ends in a Draw!\n");
    finito = 1;
    return;
  }
  else printf("The game ends, The winner is %c!\n",board[i][j]);
  finito = 1;
}

void checkfin(){
  int found;
  char temp;

  for(int i = 0; i<3; i++){
    temp = board[i][0];
    found = 1;
    for(int j= 0; j<3 ; j++){
      if (board[i][j] != temp){
        found = 0;
        break;
      }
    }
    if(found){
      endgame(i,0);
      return;
    }
  }

  for(int j = 0; j<3; j++){
    temp = board[0][j];
    found = 1;
      for(int i= 0; i<3 ; i++){
      if (board[i][j] !=temp){
        found = 0;
        break;
      }
    }
    if(found){
      endgame(0,j);
      return;
    }
  }

  found = 1;
  for(int i = 0; i<3; i++){
    if (board[i][2-i]!= board[1][1]){
      found = 0;
      break;
    }
  }
  if(found){
    endgame(1,1);
    return;
  }
  found = 1;
  for(int i = 0; i<3; i++){
    if (board[i][i]!= board[1][1]){
      found = 0;
      break;
    }
  }
  if(found){
    endgame(1,1);
    return;
  }
}

void playturn(int* turn){
  int sel;
  if (*turn %2 == 0) printf("Enter the square for X:");
  else printf("Enter the square for O:");

  scanf("%d",&sel);

  if (sel <1 || sel >9){
    printf("Invalid input! restarting...\n");
    playturn(turn);
    return;
  }
  if (board[(sel-1)/3][(sel-1)%3] == 'O' || board[(sel-1)/3][(sel-1)%3] == 'X'){
    printf("Square already filled, restarting...");
    playturn(turn);
    return;
  }

  if (*turn %2 == 0) board[(sel-1)/3][(sel-1)%3] = 'X';
  else board[(sel-1)/3][(sel-1)%3] = 'O';
}

int main(){
  int turn = 0;
  while(turn <9){
    printboard();
    playturn(&turn);
    turn++;
    checkfin();
    if(finito) return 0;
  }
  endgame(5,5);
}
