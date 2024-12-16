#include<iostream>
using namespace std;
    
    void pyramid(int rows){
    int num=1;	
	for(int i=0;i<=rows;i++)
	{
		for(int j=0;j<=rows-i-1;j++)
		{
			cout<<" ";
		}
        for(int k=0;k<=i; k++)
	{
		cout<<num<<"";
		num++;
	}
	cout<<endl;
		
	}
	
	
}
    void daimond(int rows){
    	int num=1;
	
	for(int i=0;i<rows;i++)
	{
	 for(int j=0;j<rows-i-1;j++)
	 {
	 	cout<<" ";
	 }
	 for(int k=0;k<=i;k++)
	 {
	 	cout<<num<<" ";
	 	num++;
	 }
	 cout<<endl;
	}
    num=rows*(rows+1)/2-1;
    for(int i=rows-2;i>=0;i--){
    	for(int j=0;j<rows-i-1;j++){
    		cout<<" ";
		}
	for(int k=0;k<=i;k++)
	{
		cout<<num<<" ";
	}
	cout<<endl;
	} 
}
  int main(){
  	int choice,rows,columns;
  	cout<<"Pattern generator"<<endl;
  	cout<<"1.Pyramid "<<endl;
  	cout<<"2.Diamond "<<endl;
  	cout<<"Enter your choice: ";
  	cin>>choice;
  	cout<<"Enter the number of rows: ";
  	cin>>rows;
  	cout<<"Enter the number of columns: ";
  	cin>>columns;

  	switch(choice){
  		case 1:
  			pyramid(rows);
  			break;
  		case 2:
  			daimond(rows);
  			break;
  		default:
  			cout<<"Invalid choice !"<<endl;
	  }
  }

#include<iostream>
using namespace std;
    
    void pyramid(int rows){
    int num=1;	
	for(int i=0;i<=rows;i++)
	{
		for(int j=0;j<=rows-i-1;j++)
		{
			cout<<" ";
		}
        for(int k=0;k<=i; k++)
	{
		cout<<num<<"";
		num++;
	}
	cout<<endl;
		
	}
	
	
}
    void daimond(int rows){
    	int num=1;
	
	for(int i=0;i<rows;i++)
	{
	 for(int j=0;j<rows-i-1;j++)
	 {
	 	cout<<" ";
	 }
	 for(int k=0;k<=i;k++)
	 {
	 	cout<<num<<" ";
	 	num++;
	 }
	 cout<<endl;
	}
    num=rows*(rows+1)/2-1;
    for(int i=rows-2;i>=0;i--){
    	for(int j=0;j<rows-i-1;j++){
    		cout<<" ";
		}
	for(int k=0;k<=i;k++)
	{
		cout<<num<<" ";
	}
	cout<<endl;
	} 
}
   void apyramid(int rows) {
    char alpha = 'A';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
}
    void adiamond(int rows) {
    char alpha = 'A';
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }

    alpha = 'A' + rows - 1;
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
    
      }
        for (int k = 0; k <= i; k++) {
            cout << alpha << " ";
            alpha--;
        }
        cout << endl;
    }
}
  int main(){
  	int choice,rows,columns;
  	cout<<"Pattern generator"<<endl;
  	cout<<"1.Pyramid"<<endl;
  	cout<<"2.Diamond"<<endl;
  	cout<<"3.apyramid"<<endl;
  	cout<<"4.adiamond"<<endl;
  	cout<<"Enter your choice";
  	cin>>choice;
  	cout<<"Enter the number of rows";
  	cin>>rows;
  	cout<<"Enter the number of columns";
  	cin>>columns;
  	switch(choice){
  		case 1:
  			pyramid(rows);
  			break;
  		case 2:
  			daimond(rows);
  			break;
  		case 3:
  			apyramid(rows);
  			break;
  		case 4:
  			adiamond(rows);
  			break;
  		default:
  			cout<<"Invalid choice !"<<endl;
	  }
  }
  

#include<iostream>
using namespace std;
int main(){
	
	int i=1;
	int j=1;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1||i==5||j==1||j==5){
				cout<<i;
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
  

    return 0;
}
  
  
  #include<iostream>
using namespace std;
int main(){
	int r;
	cout<<"Enter the number of rows and columns";
	cin>>r;
	for(int i=0;i<=r;i++){
		for(int j=0;j<r-i-1;j++){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			if(i==r||k==0||k==i){
				cout<<i;
				
			}
			else{
			cout<<" ";
		}
	
	}
	cout<<endl;
}
}

#include <iostream>
using namespace std;

int main() {
    int r;
    int n=1;
    cout << "Enter the number of rows and columns: ";
    cin >> r;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i) {
                cout << i <<" ";
                n++;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

   
    for (int i = r - 2; i >= 0; i--) {
        for (int j = 0; j < r - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i) {
                cout << i<<" " ;
                n--;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}