#include<iostream>
#include<string.h>

using namespace std;

class StringConcat
{
    public:
            char str[100];
            StringConcat(char str[])
            {
                strcpy(this->str,str);
            }
            StringConcat operator +(StringConcat &s1)
            {
                char s3[100]="";
                strcat(this->str,s1.str);
                strcpy(s3,this->str);
                return s3;
            }
};
int main()
{
    StringConcat s1("Geetansh");
    StringConcat s2("Atrey");
    StringConcat s3("");
    s3=s1+s2;
    cout<<s3.str;
}
