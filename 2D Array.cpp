#include <iostream>
using namespace std;
int main ()
{
int A [2][3]= {
                {12,40,60},
                {50,90,30}
                };

for (int row=0; row<2 ; row++)
{
for(int column=0; column<3; column++)
{
cout<<A [row][column] <<" ";
}
cout<<endl;
}
}
