//data 输入的数组名称
//n 元素的个数
void bubbleSort1(int *data, int n)
{
    int sum = 0;
    for(int i=0, index=0, k=n;i<n-1;i++,index=0){
        for(int j=1;j<k;j++){
            sum++;
            if(data[j-1]>data[j]){
                int tmp = data[j-1];
                data[j-1] = data[j];
                data[j] = tmp;
                index = j;
            }
        }
        if(index == 0) break; //提前终止
        k = index;
    }
    cout<<"\nSum: "<<sum<<endl;
}

void bubbleSort2(int *data, int n)
{
    int sum = 0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i;j++){
            sum++;
            if(data[j-1]>data[j]){
                int tmp = data[j-1];
                data[j-1] = data[j];
                data[j] = tmp;
            }
        }
    }
    cout<<"\nSum: "<<sum<<endl; 
}
