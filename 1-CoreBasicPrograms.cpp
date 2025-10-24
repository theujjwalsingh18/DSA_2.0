// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n = 3298;
    int sum = 0;
    int prod = 1;
    
    // Sum of Number 
    
    // while(n>0){
        // sum += n % 10;
        // n = n/10;
    // }
    
    // Sum of Even && Product of Odd Number
    
    // for(; n>0;n /= 10 ){
    //     //  sum *= n % 10;
    //     if(n % 2 == 0){
    //         sum += n % 10;
    //     }else{
    //         prod *= n % 10;
    //     }
    // }
    
    // Factorial of Number
    
    // int n = 10;
    // int fact = 1;
    // while(n>0){
    //     fact *= n;
    //     n--;
    // }
    
    // Reverse of Number 
    // int num = 12345;
    // int rev = 0;
    // while(num > 0){
    //     rev = (rev * 10) + num % 10;
    //     num = num / 10;
    // }
    
    // Palindrome Number
    
    // int pal = 131;
    // int org = pal;
    // int rev2 = 0;
    // while(pal > 0){
    //     rev2 = (rev2 * 10) + pal % 10;
    //     pal = pal / 10;
    // }
    // if(org==rev2){
    //     cout<<"Yes";
    // }else{
    //     cout<<"NO";
    // }
    
    // IsPrime or Not 
    int ii = 13;
    if(ii <= 1){
        cout<<"Not a Prime";
        return 0;
    }
    int i = 2;
    while(i*i <= ii){
        if (ii % i == 0) {
            cout<< " is not a prime number." <<endl;
            return 0;
        }
        i++;
    }
    
    // cout<<"Sum of even digit : " <<rev<<endl;
    // cout<<"Prod of odd digit : " << prod;


    return 0;
}
