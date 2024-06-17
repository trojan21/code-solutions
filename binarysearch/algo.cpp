while(low<=high)
{
  int mid = low  + (high - low)/2;
  if(ele == mid) return mid;
  else if(ele > mid) high = mid - 1;
  else low = mid+1;
}
