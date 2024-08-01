
// 2D_Vector

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    // Create 2D_vector
    vector<vector<int> >matrix(3,vector<int>(4,1));

/*    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    }
*/


    // To find the rows and colums in matrix:

    cout<<"Row - "<<matrix.size()<<endl;
    cout<<"Col - "<<matrix[0].size();
    
}