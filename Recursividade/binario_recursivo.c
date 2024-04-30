int result = 0;
int binary (int num)
{
    if (num == 1)
    {
        printf("1");
        return 1;
    }
    else
    {
        binary(num/2);
        printf("%d", num%2);
        return 0;
    }
}

int main ()
{
    binary(3);
}