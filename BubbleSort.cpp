#include <iostream>
using namespace std;
int main(){
    int n;
	cout<<"Please enter the size of the array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Please enter the elements of the array"<<endl;
	for(int x=0;x<n;x++){

		cin>>arr[x];
	}
	int current=0;

	int temp;
	/*The while loop has to run through the sorting algorithm
	n number of times in order for the  the array to be completely sorted  */
	while(current!=n){


	for(int i=0;i<n-1;i++){
		if(arr[i+1]<arr[i]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;

	}// end if statement

	}//end of for loop
	current++;// increase after each iteration of the for loop
}
//Prints out the elements of the sorted array
for(int b=0;b<n;b++){
	cout<<arr[b]<<" ";
}

}//end of main
//the program works without errors

