bool isPerfectSquare(int num)
{
   long long low=0;
   long long high=num;
   while(low<=high)
   {
       long long mid=(low+high)/2;
        long long square=mid*mid;
        if(square==num)
        {
            return True;
        }
        else if(square<num)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
   } 
   return False;
}

/*   
bool isPerfectSquare(int num)
{
    int i=1;
    while(num>0)
    {
        num-=i;
        i+=2;
    }
    return num==0;

}




*/

