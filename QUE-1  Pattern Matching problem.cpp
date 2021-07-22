int mod=101;
    int d=50;
    int strStr(string haystack, string needle) {
       int m=needle.size();
       int n=haystack.size();
        if(m>n) return -1;
        if(m==0) return 0;
       
       int h=1;
        
        for(int i=0;i<m-1;i++){
            h=(h*d)%mod;
        }
        
        int hp=0;
        int ht=0;
        for(int i=0;i<m;i++){
            hp=(d* hp+ needle[i])%mod;
            ht=(d* ht + haystack[i])%mod;
        }

    
        
        for(int i=0;i<=n-m;i++){
            if(hp==ht){
                int j=0;
                for( j=0;j<m;j++){
                    //int c=0;
                    if(haystack[j+i]!=needle[j] && j<m-1 ){
                        break;
                    }
                    
                }
                if(j==m) {return i;}
            }
            ht=(d*(ht-haystack[i]*h) + haystack[i+m])%mod;
            if(ht<0){
                ht=ht+mod;
            }
        }
        
        return -1;
        
        
        
       
    }
