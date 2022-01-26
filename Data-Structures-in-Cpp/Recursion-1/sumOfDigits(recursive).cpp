/* input: 12345
   output: 15
*/

int sumOfDigits(int n){
    if(n <= 9){
        return n;
    }
    return n % 10 + sumOfDigits(n/10);
}