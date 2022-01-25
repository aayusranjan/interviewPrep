/* input: racercar
   output: true

   time complexity: 0(n)
   space complexity: 0(n)
*/

bool checkPalidrome(char input[]){
    int len = 0;
    for(int i = 0; input[i] = '\0'; i++){
        len++;
    }
    return len;
}

int checkPalidrome_helper(char input[], int start, int end){
    if(input[0] == '\0' || input[1] == '\0'){
        return  ;
    }
    if(start >= end){
        return 1;
    }
    if(input[start] == input[end]){
        return checkPalidrome_helper(input, start+1, end-1);
    }
    else{
        return 0;
    }
}

int checkPalindrome(char input[]){
    int len = length(input);
    return checkPalidrome_helper(input, 0, len -1);
}