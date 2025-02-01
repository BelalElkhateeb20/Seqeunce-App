
#include <iostream>
#include <array>
using namespace std;

int main()

{
  int points = 0;
  int answers[3];
  
  cout <<"Type The MIssing Num OF Sequence"<<endl;
  
   cout <<" The First Sequence  "<<endl;
   cout <<" 1 | 2 | 3| 5| ?? "<<endl;
   cin >> answers[0];

   cout <<" The  Second Sequence "<<endl;
   cout <<" 2 | 4 | 8 | 16| ?? "<<endl;
   cin >> answers[1];

   cout <<" The Third Sequence "<<endl;
   cout <<" 1 | 5 | 10 | 16| ?? "<<endl;
   cin >> answers[2];

   int Sequence [3][5] = {
     {1 ,2 ,3 ,5 ,8 },
     {2 ,4, 8, 16,32}, 
     {1 ,5, 10, 16, 23}};

   if (answers[0] == Sequence[0][4])
   {
    points++;
   }
   if (answers[1] == Sequence[1][4])
   {
    points++;
   }
   if (answers[2] == Sequence[2][4])
   {
    points++;
   }

  cout <<"Your Points IS "<<points++<<" From 3"<<endl;


  cout <<" The Answers is "<<  Sequence[0][4]<<","<<Sequence[1][4]<<","<<Sequence[2][4]<<endl;


    return 0;
    }