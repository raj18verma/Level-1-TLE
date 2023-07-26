// Problem link:- https://www.hackerrank.com/challenges/summing-the-n-series/problem

int summingSeries(long n) {
    return (n % 1000000007) * (n % 1000000007) % 1000000007;
}
