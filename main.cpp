#include <iostream>
#include <sstream>
using namespace std ;
bool read_massive(int array[10])
{
    string string; 
    getline( cin, string );
    istringstream stream( string );
    bool success = true;
    for( int i = 0; i < 10; ++i ) {
        if( !( stream >> array[ i ] ) ) {
           success = false;
           break;
        }
    }
   
   return success;
}
int main()
{
    int array1[10];
    int array2[10];
    if(read_massive(array1) && read_massive(array2))
    {
        int j=array1[0],k=array2[0];
        for(int i=0;i<10;i++)
        {
            if(array1[i]>j)
            {
                j=array1[i];
            }
        }
        for(int i=0;i<10;i++)
        {
            if(array2[i]>k)
            {
                k=array2[i];
            }
        }
        cout<<"max sum"<<j+k;
    }
        else 
        {
            cout << "An error has occured while reading numbers from line" << endl;
           return 0;
      }
      
}
