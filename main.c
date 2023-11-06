int masDos(int x)
{
    int localg = x + 2;
    return localg;
}

int porDos(int y)
{
    int localf = masDos(y);
    return localf;
}

int main(void)
{

    int localmain = 11;
    localmain = porDos(masDos(localmain));    
    printf("valor final: %d\n", localmain);

}