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