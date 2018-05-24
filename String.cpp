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
    char *temp = new char[len+1];
    strcpy(temp, rep);
    strcat(temp, str.rep);
    String src(temp);
    return src;
}
//简单修改