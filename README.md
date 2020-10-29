# Lowest common multiple

Another problem about LCM, but it was more difficult.
I had problem with time limit.
I had to speed up my function. 

Instead of Euclidean Algorithm I used modulo-algorithm:

unsigned long long LCM (unsigned long long a, unsigned long long b)
{
c=a;
d=b;
while (b!=0)
{
e=a%b;
a=b;
b=e;
}
return (c/a)*d
}

Also I changed order of operation at the end of function.
In operation (c*d)/a we have very large result. And the we divide this result by a.
In my solution we firstly divide by 'a' and then we multiply by d.
Thanks to this solution programme doesn't need to multiply large numbers.
