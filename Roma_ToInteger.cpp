#include<string>
class Solution {
public:
    int romanToInt(String s) {
       
        int toplam=0;
     
        for(int i=0;i<s.length();i++){
            
            if(s[i]=='C'&& s[i+1]=='M'){
                toplam+=900;
                i++;
                continue;
                
            }
            
             if(s[i]=='C'&& s[i+1]=='D'){
                toplam+=400;
                i++;
                continue;
            }
            if(s[i]=='X' && s[i+1]=='C'){
                toplam+=90;
                i++;
                continue;
            }
            if(s[i]=='I' && s[i+1]=='V'){
                toplam+=4;
                i++;
                continue;
            }
            if(s[i]=='X' && s[i+1]=='L'){
                toplam+=40;
                i++;
                continue;
            }
            if(s[i]=='I' && s[i+1]=='X' ){
                toplam+=9;
                i++;
                continue;
            }
            
            
            if(s[i]=='M'){
                toplam+=1000;  
            }
            if(s[i]=='V'){
                toplam+=5;
            }
            if(s[i]=='D'){
                toplam+=500;  
            }
            if(s[i]=='X'){
            toplam+=10;
        }   
            if(s[i]=='I'){
            toplam+=1;
        }
        if(s[i]=='L'){
                toplam+=50;
            }
        if(s[i]=='C'){
                toplam+=100;
            }
        }
        
        return toplam;
    }
};