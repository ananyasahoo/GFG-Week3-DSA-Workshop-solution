bool isAnagram(string a, string b){
    
    // Your code here
    
    int len1 = a.length();
    int len2 = b.length();
    int count[256];
    
    memset(count, 0, sizeof(count));
    
    if(len1 != len2)
        return false;
        
    for(int i=0;i<len1;i++){
        count[a[i]]++;
        count[b[i]]--;
    }
    
    for(int i=0;i<256;i++){
        if(count[i] > 0){
            return false;
        }
    }
    
    return true;
    


    
}
