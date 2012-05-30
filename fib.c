int
fib( int n )
{
    if( 0 > n ) return -1;
    if( 0 == n ) return 1;
    if( 1 == n ) return 1;
    if( 1 < n ) return fib( n-1 ) + fib( n-2 );

    return -1;
}
