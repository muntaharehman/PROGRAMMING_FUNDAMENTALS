#include<iostream>
using namespace std;
main(){
    bool isFound = false;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for(int x = 0; x < n; x++){
        cin >> arr[x];
    }
    int num;
    cout<<"Enter number to check: ";
    cin >> num;
    for(int x = 0; x < n; x++){
        if(arr[x] == num){
            isFound = true;
            break;
        }
    }
    if(isFound){
        cout<<"Already Entered"<<endl;
    }
    else{
        cout<<"Entered!";
    }
    return 0;
}