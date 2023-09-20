int superDigit(string n, int k)
{

    if (n.length() == 1)
    {
        long long int ans = n[0] - '0';
        return ans;
    }

    long long digit = 0;
    string kTimes = "";

    // int x = n.length();
    for (int i = 0; i < k; i++)
    {
        kTimes = kTimes + n;
    }

    int y = kTimes.length();
    for (int i = 0; i < y; i++)
    {
        if (isdigit(kTimes[i]))
        {
            digit = digit + (kTimes[i] - '0');
        }
    }

    // cout<<"digit :"<<digit<<endl;
    // cout<<"string digit :"<< to_string(digit)<< endl;

    return superDigit(to_string(digit), 1);
}