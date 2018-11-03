#include<bits/stdc++.h>
using namespace std;
int plaindrome(string required);
int mirrodstring(string requied);
    string rc="A   3  HIL JM O   2TUVWXY5";
    string rn="1SE Z  8";
int main()
{
    bool a,b;
    char s[100];
    // freopen("in_401.txt","r",stdin);
      //freopen("out_401.txt","w",stdout);
       while(scanf("%s",s)!=EOF){
    a = plaindrome(s);
    b = mirrodstring(s);
    if(a==0 && b==0)
        cout<<s<<" "<<"-- is not a palindrome."<<endl<<endl;
    else if(a==1 && b==0)
        cout<<s<<" "<<"-- is a regular palindrome."<<endl<<endl;
    else if(a==0&& b==1)
        cout<<s<<" "<<"-- is a mirrored string."<<endl<<endl;
    else
        cout<<s<<" "<<"-- is a mirrored palindrome."<<endl<<endl;
       }
return 0;
}

//Check for plaindrome
int plaindrome(string required)
{
    string s1;
    char temp;
    s1 = required;
    int i,j;
    j=required.size()-1;
    for(i=0;i<j;)
    {
        temp = required[i];
        required[i]=required[j];
        required[j]=temp;
        i++;
        j--;
    }
   if(s1==required)
        return 1;
    else
        return 0;

}
//check for mirror string
int mirrodstring(string requied)
{
    int check=0,c,i,j=0;
    string s2;
    s2 = requied;
    check= s2.size()-1;
    int need=0;
    for(int i=0;requied[i]!='\0';i++)
    {
        if(requied[i]>=65&&requied[i]<=90)
        {
        need = requied[i]-'A';
        requied[i]=rc[need];
        }
        else{
            need = requied[i]-49;
            requied[i]=rn[need];
        }
    }
    for(i=check;i>=0;i--)
    {

       if(s2[i]!=requied[j])
        return 0;
    j++;
    }

return 1;
}
