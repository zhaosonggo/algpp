#include<iostream>
#include"tool.h"
using namespace std;
void insertSort(int *data, int n)
{
    for(int i = 1; i<n;i++){
        int tmp = data[i];
        int j=i;
        for(; j>0;j--){
            if(data[j-1]>tmp){
                data[j] = data[j-1];
            }else{
                break;
            }
        }
        data[j] = tmp;
    }
}

int main()
{
    // int data[] = {8, 3, 2, 1, 54, 2, 3, 4, 5,12, 3, 4,8, 3, 2, 1, 54, 2, 3, 4, 5,12, 3, 4};
    // insertSort(data, 24);
    // for(int i=0;i<24; i++){
    //     cout<<data[i]<<", ";
    // }
    // cout<<endl;
    test(insertSort);
    return 0;
}