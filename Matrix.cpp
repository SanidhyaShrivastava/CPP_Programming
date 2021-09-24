#include<iostream>
using namespace std;

class Matrix{
    public: int first_matrix[20][20], second_matrix[20][20], sum_of_matrix[20][20], sub_of_matrix[20][20], transpose_matrix[20][20],rows, columns;

    void input();
    void output();
    void addition();
    void subtraction();
    void transpose();
    void multiplication();
};

void Matrix :: input()
{ 
    cout<<"Enter no. of Rows: ";
    cin>>rows;
    cout<<"Enter no. of Columns: ";
    cin>>columns;

    cout << "==========Input for First Matrix===========\n";

    for (int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<< "Enter element at position ["<<(i+1)<<" "<<(j+1)<<"]: ";
            cin>>first_matrix[i][j];
           
            
        }
    }       
      

    cout<<"\n========Input for Second Matrix============\n";
    for (int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<< "Enter element at position ["<<(i+1)<<" "<<(j+1)<<"]: ";
            cin>>second_matrix[i][j];

        }

    }

}

void Matrix::output()
{
    cout<<"\n======Output of First Matrix===============\n";

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<first_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
    cout<<"\n======Output of Second Matrix==============\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<second_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}

void Matrix::addition(){
    //===============Calculation=====================
    cout<<"\n============Addition of Matrix=============\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
           sum_of_matrix[i][j]= first_matrix[i][j]+second_matrix[i][j];
        }
    }

    // ============Printing Sum of Matrix==================
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<sum_of_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    
}

void Matrix::subtraction(){
     //===============Calculation=====================
    cout<<"\n============Subtraction of Matrix==========\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
           sub_of_matrix[i][j]= first_matrix[i][j]-second_matrix[i][j];
        }
    }

    // ============Printing Subtraction of Matrix==================
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<sub_of_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }
    

}

void Matrix::transpose(){
    
    cout<<"\n========Transpose of First Matrix===========\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<first_matrix[j][i]<<"\t";
        }
        cout<<"\n";
    }
    
    //================================================
    
    cout<<"\n========Transpose of Second Matrix==========\n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cout<<second_matrix[j][i]<<"\t";
        }
        cout<<"\n";
    }
}

void Matrix::multiplication(){
    int r1,c1,r2,c2,first_matrix[20][20],second_matrix[20][20],multiply_matrix[20][20];
    cout<<"\n=====================Multiplication==========================\n";
    cout<<"Enter no. of Rows for first Matrix: ";
    cin>>r1;
    cout<<"Enter no. of Columns for first Matrix: ";
    cin>>c1;
    cout<<"============================================\n";
    cout<<"Enter no. of Rows for second Matrix: ";
    cin>>r2;
    cout<<"Enter no. of Columns for second Matrix: ";
    cin>>c2;
    cout<<"==========================================\n";
    while(c1!=r2){
        cout<<"Error!, column of first matrix is not equal to rows of second matrix";
        cout<<"\n==========Enter the values again!================\n";

        cout<<"Enter no. of Rows for first Matrix: ";
        cin>>r1;
        cout<<"Enter no. of Columns for first Matrix: ";
        cin>>c1;

        cout<<"Enter no. of Rows for second Matrix: ";
        cin>>r2;
        cout<<"Enter no. of Columns for second Matrix: ";
        cin>>c2;

    }

    cout << "==========Input for First Matrix===========\n";

    for (int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<< "Enter element at position ["<<(i+1)<<" "<<(j+1)<<"]: ";
            cin>>first_matrix[i][j];
           
            
        }
    }       
      

    cout<<"\n========Input for Second Matrix============\n";
    for (int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<< "Enter element at position ["<<(i+1)<<" "<<(j+1)<<"]: ";
            cin>>second_matrix[i][j];

        }

    }

    cout<<"\n=============Multiplication of Matrix===============\n";
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            multiply_matrix[i][j]=0;
            for(int k=0; k<r2; k++){
                multiply_matrix[i][j] += first_matrix[i][k]*second_matrix[k][j];
            }
        }
    }
    // Printing Matrix multiplication
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<multiply_matrix[i][j]<<"\t";
        }
        cout<<"\n";
    }


}




int main()
{
    Matrix matrix;
    matrix.input();
    matrix.output();
    matrix.addition();
    matrix.subtraction();
    matrix.transpose();
    matrix.multiplication();  
    return 0;
}