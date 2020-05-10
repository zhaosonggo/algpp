#include<iostream>
using namespace std;

void SelectSort(int *data, int n)
{
    for(int i=0;i<n-1;i++){
        int index=i;
        int tmp = data[i];
        for(int j=i+1; j<n;j++){
            if(data[j] < tmp){
                tmp = data[j];
                index = j;
            }               
        }
        data[index] = data[i];
        data[i] = tmp;
    }
}
int main()
{
    int data[10] = {2, 3, 1, 0, 0, 312, 2, 3, 4, 2};
    SelectSort(data, 10);
    for(int i = 0;i<10;i++){
        cout<<data[i]<<" ";
    }
    return 0;
}