while(low<=high)
{
  int mid = low  + (high - low)/2;
  if(ele == mid) return mid;
  else if(ele > mid) high = mid - 1;
  else low = mid+1;
}
// if  you are searching for an element and that key is not in the array then after the loop low will be at its right neighbour and high will be at its left neighbout
//1 3 5 10 15 now you search for 12 after the loop high is at 10 and low is at 15
//another variation is when the array is not sorted you need a certain criteria to reject one of the half.
