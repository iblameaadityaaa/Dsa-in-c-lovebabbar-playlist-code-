int findUnique(int *arr, int size)
{
   /*
   here we need to find the element with unique occurence as it a array of size (2m+1) and m elements appear 2 times 
   only 1 element appears once, so we use XOR(^) as it has a very unique property that if we XOR two same elements 
   they will cancel each other out, so in this question we will XOR each element and as m elements will cancel each 
   other out and only 1 element will not be cancelled out, storing it in ans and then returning ans.
   */
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    return ans;
}
