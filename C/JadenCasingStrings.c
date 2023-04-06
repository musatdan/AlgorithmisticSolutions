char *to_jaden_case (char *jaden_case, const char *string)
{
  int temp = 0;
// write to jaden_case and return it
	*jaden_case = '\0';
  
  if(*string == '\0') {
    return jaden_case;
  }
    
  if(*string > 90)
    jaden_case[temp] = *string - 32;
  else
    jaden_case[temp] = *string;
  
  string += 1;
  temp += 1;
  
    while(*string != '\0') {
      if(*(string - 1) == ' ' && *string > 90) {
        jaden_case[temp] = *string - 32;
        }
      else {
        jaden_case[temp] = *string;
        }
      
      temp += 1;
      string += 1;
    }
    
	return jaden_case;
}
