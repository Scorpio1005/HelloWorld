String &String::operator += (const String& str)
{
    char *temp = rep;
    len = len + str.len;
    rep = new char[len + 1];
    strcpy(rep, temp);
    strcat(rep, str.rep);
    delete []temp;
    return *this;
}
String &String::operator + (const String& str)
{
    char *temp = rep;
    strcat(temp, str.rep);
    String src(temp);
    delete []temp;
    return src;
}
