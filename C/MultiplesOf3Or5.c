int solution(int number) {
		// code here
  int temp = 0; 
  
  if(number <= 0)
    return 0;
  
  for(int i = 0; i < number; i++)
    {
    if(i % 3 == 0 && i % 5 == 0)
      {
      temp += i;
      continue;
    }
    
    if(i % 3 == 0 || i % 5 == 0)
      {
      temp += i;
    }
  }
