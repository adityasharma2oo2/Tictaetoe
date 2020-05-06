#include<iostream>
#include<windows.h>
using namespace std;
void block();
int checkresult();
char location[9]={'1','2','3','4','5','6','7','8','9'};
int main()
{
        int player=1,pos;
       char mark;
       int i=1;
       while(i>0)
       {

        block();
        player=(player%2)?2:1;
l1:
        cout<<"\n player "<<player<<" turn : ";
        cin>>pos;
        mark=(player==1)?'O':'X';
        if(pos==1&&location[0]=='1')
                location[0]=mark;
       else if(pos==2&&location[1]=='2')
                location[1]=mark;
        else if(pos==3&&location[2]=='3')
                location[2]=mark;
        else if(pos==4&&location[3]=='4')
                location[3]=mark;
        else if(pos==5&&location[4]=='5')
                location[4]=mark;
        else if(pos==6&&location[5]=='6')
                location[5]=mark;
        else if(pos==7&&location[6]=='7')
                location[6]=mark;
        else if(pos==8&&location[7]=='8')
                location[7]=mark;
        else if(pos==9&&location[8]=='9')
                location[8]=mark;
        else{
                        cout<<"\nInvalid input\n";
                goto l1;
        }
                i=checkresult();
       }
        block();
if(i==0)
        cout<<"\nPLAYER "<<player <<" IS THE WINNER";
else
        cout<<"\n MATCH DRAWN";
}
int checkresult()
{
        if(location[0]==location[1]&&location[1]==location[2])
                return 0;
        else if(location[5]==location[8]&&location[5]==location[2])
                return 0;
        else if(location[6]==location[7]&&location[6]==location[8])
                return 0;
        else if(location[0]==location[3]&&location[3]==location[6])
                return 0;
        else if(location[0]==location[4]&&location[4]==location[8])
                return 0;
          else if(location[1]==location[4]&&location[4]==location[7])
                return 0;
        else if(location[3]==location[4]&&location[4]==location[5])
                return 0;
        else if(location[2]==location[4]&&location[4]==location[6])
                return 0;
        else if(location[0]!='1'&&location[1]!='2'&&location[2]!='3'&&location[3]!='4'&&location[4]!='5'&&location[5]!='6'&&location[6]!='7'&&location[7]!='8'&&location[8]!='9')
                return -1;
        else
                return 1;
}
void block()
{
        system("cls");
        cout<<"  ***TIC TAC TOE***  \n";
        cout<<"\nPLAYER 1(O)    VS   PLAYER2(X)";
        cout<<"\n\n";
        cout<<"     |     |     ";
        cout<<"\n";
        cout<<"  "<<location[0]<<"  |  "<<location[1]<<"  |  "<<location[2]<<"  ";
        cout<<"\n";
        cout<<"-----|-----|-----";
        cout<<"\n";
         cout<<"     |     |     ";
        cout<<"\n";
        cout<<"  "<<location[3]<<"  |  "<<location[4]<<"  |  "<<location[5]<<"  ";
        cout<<"\n";
        cout<<"-----|-----|-----";
        cout<<"\n";
         cout<<"     |     |     ";
        cout<<"\n";
        cout<<"  "<<location[6]<<"  |  "<<location[7]<<"  |  "<<location[8]<<"  ";
        cout<<"\n";

}
