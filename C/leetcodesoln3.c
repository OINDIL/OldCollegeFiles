#include<stdbool.h>
#include<stdio.h>
bool containsDuplicate(int* nums, int numsSize){
    int count = 1;
    for(int i = 0;i < numsSize;i++){
        for(int j = 0;j < i;j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
    }
    if(count>1) return true;
    else return false;
}
int main(){
    int arr[] = {1,1,1,3,3,4,3,2,4,2};
    printf("%d",containsDuplicate(arr,4));

}