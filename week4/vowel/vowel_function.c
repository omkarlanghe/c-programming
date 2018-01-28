

int vowel(char ch){
  int retVal = 0;
 switch(ch){
 case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
     retVal = 1;
     break;
 }
 return retVal;
}


