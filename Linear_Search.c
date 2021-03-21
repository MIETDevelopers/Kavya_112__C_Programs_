//  Author Name : Kavya Dhar
// Creation date: 18-03-21
// Purpose: Linear Searching 
  
int main() // Start of MAIn body 
{
    int a[20],i,x,n; //  Variable Declration 
    printf("How many elements?"); // Taking input 
    scanf("%d",&n);
     
    printf("Enter array elements:n"); // Taking input 
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("nEnter element to search:"); // asking user to enter element to search 
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i); // If true Print the Output 
    else
        printf("Element not found"); // If False Print "Element not found"
  
    return 0;
} // End Of body 
