// find the minimum in an array
#include<iostream>
using namespace std;

int main()
{
    int a[6]={1,2,3,4,5},min=0;
    for(int i=0;i<6;i++)
    {
      if(min>a[i]) min=a[i];
    }
    cout<<min<<endl;
}
