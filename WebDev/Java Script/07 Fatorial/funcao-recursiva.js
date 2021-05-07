function fatorial(n){
    if(n!=1){
        for(var c = n; c<=1; c--){
            return n * fatorial(n-1)
        }
    } else{
        return 1
    }
}

console.log(fatorial(5))

/* 
    5! = 5 x 4 x 3 x 2 x 1    = 120 
    5! = 5 x 4!               = 120
    1! = 1
*/