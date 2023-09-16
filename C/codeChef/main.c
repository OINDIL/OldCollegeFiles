#include <stdio.h>
int largest(int arr[], int n)
{
    int i;
 
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,n; // x --> space remaining , n --> no of movies
	    scanf("%d %d", &x,&n);
	    int arr[n];
	    for(int i=1;i<=n;i++){
	        scanf("%d %d", &arr[i],&arr[i+1]);
	    }
	    for(int i=1;i<=n;i++){
	        if(arr[i] <= x)  
	    }
	    }
	}
	return 0;
}

