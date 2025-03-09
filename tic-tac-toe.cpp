#include<iostream>
#include<cstdio>
#include<cmath>
#include<stdlib.h>

using namespace std;
class tic_tac_toe{

    char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

 public:

void tictactoe(){       // prints the tic-tac-toe first time;
         cout<<endl<<arr[0][0]<<"   |  "<<arr[0][1]<<"  |   "<<arr[0][2]<<endl;
         cout<<"----|-----|----"<<endl;
         cout<<arr[1][0]<<"   |  "<<arr[1][1]<<"  |   "<<arr[1][2]<<endl;
         cout<<"----|-----|----"<<endl;
         cout<<arr[2][0]<<"   |  "<<arr[2][1]<<"  |   "<<arr[2][2]<<endl;
}

void print(){

        check(); //check for the straight line of "X" OR 'O' before printing for new one;

         cout<<endl<<arr[0][0]<<"   |  "<<arr[0][1]<<"  |   "<<arr[0][2]<<endl;
         cout<<"----|-----|----"<<endl;
         cout<<arr[1][0]<<"   |  "<<arr[1][1]<<"  |   "<<arr[1][2]<<endl;
         cout<<"----|-----|----"<<endl;
         cout<<arr[2][0]<<"   |  "<<arr[2][1]<<"  |   "<<arr[2][2]<<endl;

         for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
               if(arr[i][j]!='X' && arr[i][j]!='O'){
                  break;
               }
               else if((i==2 && j==2) && (arr[i][j]=='X' || arr[i][j]=='O')){
                  cout<<endl<<endl<<"NO WINNER, It's a tie!"<<endl<<endl;
                  exit(1);
               }
            }
           }

}
  
void set_values(char input,char value){
   if(input=='1' && arr[0][0]=='1'){
      arr[0][0]=value;
   }
   else if(input=='2' && arr[0][1]=='2'){
      arr[0][1]=value;
   }
   else if(input=='3' && arr[0][2]=='3'){
      arr[0][2]=value;
   }
   else if(input=='4' && arr[1][0]=='4'){
      arr[1][0]=value;
   }
   else if(input=='5' && arr[1][1]=='5'){
      arr[1][1]=value;
   }
   else if(input=='6' && arr[1][2]=='6'){
      arr[1][2]=value;
   }
   else if(input=='7' && arr[2][0]=='7'){
      arr[2][0]=value;
   }
   else if(input=='8' && arr[2][1]=='8'){
      arr[2][1]=value;
   }
   else if(input=='9' && arr[2][2]=='9'){
      arr[2][2]=value;
   }
   else {
      cout<<"Invalid input";
   }
}

  bool check() {
        for (int i = 0; i < 3; ++i) {
            if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
                cout << "Game Over! Winner: " << arr[i][0] << endl;
                return false;
            }
            if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) {
                cout << "Game Over! Winner: " << arr[0][i] << endl;
                return false;
            }
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
            cout << "Game Over! Winner: " << arr[1][1] << endl;
            return false;
        }
        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
            cout << "Game Over! Winner: " << arr[1][1] << endl; 
            return false;
        }
    }


};

int main()
{
   tic_tac_toe ob1;
   
   cout<<"|###############################|"<<endl;
   cout<<"|          TIC-TAC-TOE          |"<<endl;
   cout<<"|###############################|"<<endl;



   ob1.tictactoe();
   char input;
   char value;
   int count=2;
   

   while(ob1.check()){
   if(count % 2 == 0){
      value='X';
      cout<<endl<<"Player X"<<endl;
      count++;
   }
   
   else if(count % 2 != 0 && value == 'X'){
      value='O';
      cout<<endl<<"Player O"<<endl; 
      count++;     
   }

   cout<<endl<<"Provide place: ";
   cin>>input;

   int int_input = static_cast<int>(input);

   if((int_input > 48 && int_input < 58) && (value=='X' || value=='O')){
   ob1.set_values(input,value);
   }
   else{
      cout<<endl<<endl<<"Invalid place";
   }
   ob1.print();
   }
    
   return 0;
}