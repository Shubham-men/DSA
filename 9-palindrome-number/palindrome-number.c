bool isPalindrome(int x) {
    int temp = x;
    
    long long d ,rev=0;
    while(temp !=0){
        d= temp %10;
        rev = rev*10 + d;
        temp /= 10;
    }
    if(x<0)
    return false;
    if(x==rev)
    return true;
    else 
    return false;
}