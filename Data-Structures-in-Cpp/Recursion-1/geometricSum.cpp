double geometricSum(int k){
    if(k==0)
    return 1;
    int no = 2;
    for(int i=1; i<k;i++){
        no = no*2;
    }
    double power = 1/(double)no;
    return power+geometricSum;
}

/* time complexity: 0(k)
   space complexity: 0(k)

   double geometricSum(int k){
       if(k==0){
           return 1;
       }
       return (1 / pow(2, k)) + geometricSum(k-1);
   }