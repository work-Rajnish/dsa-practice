int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int l=0;
    int h=numsSize-1;
    int last=-1;
    int first=-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if (nums[mid]==target)
        {
            first=mid;
            h=mid-1;
    
        }
        else if(nums[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }    
        l=0;
        h=numsSize-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if (nums[mid]==target)
        {
            last=mid;
            l=mid+1;
    
        }
        else if(nums[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }

    }    
    int* result = malloc(2 * sizeof(int));

    result[0] = first;
    result[1] = last;

    *returnSize = 2;

    return result;
}