class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if((s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')&&   ( s[j]=='a'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='e'||s[j]=='A'||s[j]=='I'||s[j]=='O'||s[j]=='U'||s[j]=='E')){ swap(s[i],s[j]);
            i++;
            j--;}
            else if(s[i]!='a'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='e'&&s[i]!='A'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='E') i++;
            else if(s[j]!='a'&&s[j]!='i'&&s[j]!='o'&&s[j]!='u'&&s[j]!='e'&&s[j]!='A'&&s[j]!='I'&&s[j]!='O'&&s[j]!='U'&&s[j]!='E') j--;
        }
        return s;
    }
};