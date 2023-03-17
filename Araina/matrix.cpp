#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b,c,d;
    int Mat1[10][10];
    int Mat2[10][10];
    int Mat3[10][10];
    int Mat4[10][10];
    cout << endl << "Enter the number of row in matrix 1 : ";
    cin >> a;
    cout << endl << "Enter the number of column in matrix 1 : ";
    cin >> b;
    cout << endl << "Enter the number of row in matrix 2 : ";
    cin >> c;
    cout << endl << "Enter the number of column in matrix 2 : ";
    cin >> d;
    if(b != c){
        cout << endl << "EROR This type of matix can't be multiplied . " << endl;
        return 1;
        }
        for(int i =0; i < a; i++){
            for(int j=0; j < b; j++){
                cout << endl << "( Mat 1 ) \n\nEnter the element of row " << i+1
                << " column " << j+1 << " : ";
                cin >> Mat1[i][j];
                }
            }
            for(int i =0; i < a; i++){
                for(int j=0; j < b; j++){
                cout << endl << "( Mat 2 ) \n\nEnter the element of row " << i+1
                << " column " << j+1 << " : ";
                cin >> Mat2[i][j];
                }

            for(int i =0; i < a; i++){
                for(int j=0; j < b; j++){
                            Mat3[i][j] = 0;
                     for(int k = 0; k < c;k++){    
                            Mat3[i][j] += Mat1[i][k]+Mat2[i][j];
            }
                }
            }
              for(int i =0; i < a; i++){
                for(int j=0; j < b; j++){
                            Mat3[i][j] = 0;
                     for(int k = 0; k < c;k++){    
                            Mat4[i][j] += Mat1[i][k]*Mat2[i][j];
            }
                }
            }
            for(int i = 0;i < d; i++){
            for(int j = 0; j < d; j++){
                cout << setw(4) << Mat3[i][j] << setw(4);
                }
            cout << endl;    
            }
            for(int i = 0;i < d; i++){
            for(int j = 0; j < d; j++){
                cout << setw(4) << Mat4[i][j] << setw(4);
                }
            cout << endl;    
            }
        return 0;
        }
}