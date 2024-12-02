#include <iostream>
#include <vector>


using namespace std;


void insertionSort(vector<int>& vec) {
    int n = vec.size();


    for(int i=1; i < n; i++) {
        int key = vec[i];
        int j= i-1;
        while(j>=0 && vec[j]>key){
            vec[j+1]=vec[j];
            j=j-1;
        }
        vec[j+1]=key;
    }
}
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to filter array and keep only prime numbers
vector<int> filterPrimes(const vector<int>& vec){
    vector<int> primes;
    for (int num : vec) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }
    return primes;
}
int main()




{
    vector<int> vec= {12, 5, 3, 7, 11, 4, 8, 13};


    insertionSort(vec);
    vector<int> primes = filterPrimes(vec);

    for(int num: primes) {
        cout<< num << ",";
    }
    return 0;
}
