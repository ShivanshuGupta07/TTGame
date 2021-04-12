#include<bits/stdc++.h>
using namespace std;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
void board()
{   cout<<"\n\n\n\n\n";
    cout<<"                         *******************TIC TAC TOE***********************\n\n";
    cout<<"                         ***********Player 01(X) vs Player 02(O)**************\n\n\n";
    cout<<"                               "<<a[1]<<"   |  "<<a[2]<<"   |   "<<a[3]<<endl;
    cout<<"                               "<<"----|------|-----\n";
    cout<<"                               "<<a[4]<<"   |  "<<a[5]<<"   |   "<<a[6]<<endl;
    cout<<"                               "<<"----|------|-----\n";
    cout<<"                               "<<a[7]<<"   |  "<<a[8]<<"   |   "<<a[9]<<endl;
    cout<<endl<<endl;
}
int check()
{
  if(a[1]==a[2] && a[2]==a[3])
  return 1;
  else if(a[4]==a[5]&&a[5]==a[6])
  return 1;
  else if(a[7]==a[8]&&a[8]==a[9])
  return 1;
  else if(a[1]==a[4]&&a[4]==a[7])
  return 1;
  else if(a[2]==a[5]&&a[5]==a[8])
  return 1;
  else if(a[3]==a[6]&&a[6]==a[9])
  return 1;
  else if(a[1]==a[5]&&a[5]==a[9])
  return 1;
  else if(a[3]==a[5]&&a[5]==a[7])
  return 1;
  else if(a[1]!='1'&&a[2]!='2'&&a[3]!='3'&&a[4]!='4'&&a[5]!='5'&&a[6]!='6'&&a[7]!='7'&&a[8]!='8'&&a[9]!='9')
  return 0;
  else 
  return -1;//means inprocess
}
int main()
{  
    int player=1,x,c;
    char mark;
do
{ 
     board();
   if(player ==1 || player ==3)
    player=1;
    else 
    player =2;
    cout<<"Enter your move player "<<player<<" : "<<endl;
    cin>>c;

    if(player ==1)
    mark='X';
    else 
    mark='O';

    if(c==1&&a[1]=='1')
    a[1]=mark;
     else if(c==2&&a[2]=='2')
    a[2]=mark;
     else if(c==3&&a[3]=='3')
    a[3]=mark;
     else if(c==4&&a[4]=='4')
    a[4]=mark;
     else if(c==5 &&a[5]=='5')
    a[5]=mark;
     else if(c==6&&a[6]=='6')
    a[6]=mark;
    else if(c==7&&a[7]=='7')
    a[7]=mark;
    else if(c==8&&a[8]=='8')
    a[8]=mark;
    else if(c==9&&a[9]=='9')
    a[9]=mark;

    else {
      cout<<endl<<"Player "<<player<<" you Entered an invalid move (press enter to move again)\n";
      player--;
      fflush(stdin);
      getchar();
        }

x=check();
  player++; 
} 
    
    while(x==-1);
    board();
    if(x==1)
    cout<<"Congo!!!! Player "<<--player<<" Win";
    else
    cout<<"Draw";
    return 0;
}
