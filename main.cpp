#include <iostream>

using namespace std;

int flipsSort(int* arr, int size){
    int actual,pos;
    int flips = 0;
    for(int i=1; i<size; ++i){
        actual = arr[i];
        pos = i-1;
        while(pos>=0 && actual<arr[pos]){
            arr[pos+1]=arr[pos];
            --pos;
            ++flips;
        }
        arr[pos+1] = actual;
    }
    return flips;
}

int main() {
    int num,flips;
    while(scanf("%d",&num)==1){
        int arr[num];
        for(int i=0; i<num; ++i){
            cin >> arr[i];
        }
        flips = flipsSort(arr,num);
        printf("Minimum exchange operations : %d\n",flips);
    }
    return 0;
}