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
