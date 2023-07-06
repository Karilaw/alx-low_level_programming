unsigned long int hash_sdbm(const unsigned char *str)
{
    unsigned long int hash = 0;
    int c;

    while ((c = *str++))
        hash = c + (hash << 6) + (hash << 16) - hash;

    return hash;
}
