#include<iostream>
using namespace std;
void fullPyramid(int n)
{
    for(int row=0;row<n;row++){
        // spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }


void InvertedPyramid(int n)
{
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row ; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void FullDiamond(int n)
{
  fullPyramid(n):
  InvertedPyramid(n);
  
}
  int main()
{

  int n ; 
  cin>>n;
  FullDiamond(n);
  return 0;
}




  
}
