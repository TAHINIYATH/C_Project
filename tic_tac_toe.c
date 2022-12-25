/******************** TIC TAC TOE *********************/
/*TIC TAC TOE is basically a minute game b/w 2 players , the logic you can find in this game is that the winner should get the same symbol in consecutive manner*/
 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 #include<conio.h>
 #include<stdlib.h>
 char square[10]={'0','1','2','3','4','5','6','7','8','9'}; //global variable array
 char choice,player;//global varaibles
 int checkforwin();
 void display();
 void markchoice(char);
 int main()
 {
  int gamestatus,returnum;
  char mark;
  player=1;
  printf("player1 'X' ---- player2 'O'\n\n");
  do{
       display();
       printf("\n\n");    
          player=(player%2)?2:1;


       printf("player %d your turn\n",player);     

       scanf("%d",&choice);
       mark=(player==1)?'X':'O';
       markchoice(mark);
       gamestatus=checkforwin();
       player++;

  }while(gamestatus==(-1));
  if(gamestatus==1)
  {
     printf("---> player %d wins!!!!\n\n",--player);
  }
  else
   {
      printf("invalid input\n");

   }  
 }

void display(int x)
{
       system("cls");
       printf("\n\n\n");
       printf("  %c\t| %c\t | %c \n",square[1],square[2],square[3]);
       printf("--------|--------|-------\n");
       printf("  %c\t| %c\t | %c \n",square[4],square[5],square[6]);
       printf("--------|--------|-------\n");
       printf("  %c\t| %c\t | %c \n",square[7],square[8],square[9]);
       printf("--------|--------|-------\n\n");
       printf("\n");
      
}
int checkforwin(void){
       int returnum=0;
       if((square[1]==square[2])&&(square[2]==square[3]))
            returnum=1;
      else if((square[4]==square[5])&&(square[5]==square[6]))
            returnum=1;
      else if((square[7]==square[8])&&(square[8]==square[9]))
            returnum=1;
      else if((square[1]==square[5])&&(square[5]==square[9]))
            returnum=1;
      else if((square[3]==square[5])&&(square[5]==square[7]))
             returnum=1;
      else if((square[1]==square[4])&&(square[4]==square[7]))
            returnum=1;
      else if((square[2]==square[5])&&(square[5]==square[8]))
          returnum=1;
      else if((square[3]==square[6])&&(square[6]==square[9]))
           returnum=1;
        else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
           returnum=0;
      else 
      returnum=-1; 
      return returnum;
   
}
void markchoice(char mark)
{
   if(choice==1 && square[1]=='1')
   square[1]=mark;
   else if(choice==2 && square[2]=='2')
   square[2]=mark;
   else if(choice==3 && square[3]=='3')
   square[3]=mark;
   else if(choice==4 && square[4]=='4')
   square[4]=mark;
   else if(choice==5 && square[5]=='5')
   square[5]=mark;
   else if(choice==6 && square[6]=='6')
   square[6]=mark;
   else if(choice==7 && square[7]=='7')
   square[7]=mark;
   else if(choice==8 && square[8]=='8')
   square[8]=mark;
   else if(choice==9 && square[9]=='9')
   square[9]=mark;
   else
   {
      printf("invalid input!!!!\n");
   }
}






