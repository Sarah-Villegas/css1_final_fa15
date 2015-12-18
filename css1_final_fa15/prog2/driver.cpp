// Sarah Villegas   
// Dec. 17, 2015
// Santa Needs Help 
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;

const int R = 30;
const int C = 50;
 
void fillArray(ifstream& A_in, string S[][C]);

int main()
{
    ifstream fin; 
    ofstream fout; 
    
    fin.open("northpole.txt");
    fout.open("status.txt");
    
    if(fin.fail() && fout.fail()){
    
        cout << "File failed to open" << endl; 
        exit(1);
    }    
    
    
    fin.close();
    fout.close();
	
	return 0;
}

// ********************************
void fillArray(ifstream& A_in, string S[][C])
{
    string move; 
    while(A_in >> move){
    
        for(int i = 0; i < R; i++){
        
            for(int j = 0; j < C; j++){
            
                S[i][j] = move; 
            } 
        }
    }
	
}//end fillArray




 
