class Solution {
public:
    string losingPlayer(int x, int y) {
        int count= 0;
        while(x>=0 && y >= 0){
            x-=1;
            y-=4;
            if(x >=0 && y>=0)
            count+=1;
        }
        if(count%2==1) return "Alice";
        return "Bob"
      ;  
    }
};