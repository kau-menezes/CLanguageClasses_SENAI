int sum (int num)
{
    if (num==0)
    {
        return 0;
    }
    else 
    {
        return num + sum(num-1);
    }
}

int main ()
{
    printf("%d", sum(3));
}