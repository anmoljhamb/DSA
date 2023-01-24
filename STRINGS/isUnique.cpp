bool isUnique(string s)
{
    char LETTERS[256] = {false};

    for (char ch : s)
    {
        if (LETTERS[(int)ch] == true)
        {
            return false;
        }
        LETTERS[(int)ch] = true;
    }

    return true;
}