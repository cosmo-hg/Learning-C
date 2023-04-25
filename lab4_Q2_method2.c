#include <stdio.h>

void sort(int arr[], int start, int end, int order){
    for(int i=start; i<=end; i++){
        for(int j=start; j<=end-i-1; j++){
            if(order==0 && arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else if(order==1 && arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr[10];
    int temp;
    printf("Enter 10 integer numbers between 1 and 200 (inclusive):\n");
    for(int i=0; i<10; i++){
        scanf("%d", &temp);
        if(temp<1 || temp>200){
            printf("Number out of range, please enter again:\n");
            i--;
        }
        else{
            arr[i]=temp;
        }
    }

    // Rearrange the array elements
    sort(arr, 0, 9, 0);
    sort(arr, 0, 4, 1);
    sort(arr, 5, 9, 1);

    // Print the output array
    printf("\nOutput Array:\n");
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
