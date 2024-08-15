class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int n;
        // int five = 0, ten = 0, twenty = 0;
        // for(int i=0; i<n; i++)
        // {
        //     if(bills[i] == 5)
        //     {
        //         five = five+1;
        //     }
        //     else if(bills[i] == 10)
        //     {
        //         if(five)
        //         {
        //             five -= 1;
        //             ten += 1;
        //         }
        //         else
        //         {
        //             return false;
        //         }
        //     }
        //     else
        //     {
        //         if(five && ten)
        //         {
        //             ten = ten-1;
        //             five = five-1;
        //         }
        //         else if(five >= 3)
        //         {
        //             five -= 3;
        //         }
        //         else
        //         {
        //             return false;
        //         }
        //     }
            
        // }
        // return true;

        // sort code of above approach ... 
        int five = 0, ten = 0;
        for (int i : bills) {
            if (i == 5) five++;
            else if (i == 10) five--, ten++;
            else if (ten > 0) ten--, five--;
            else five -= 3;
            if (five < 0) return false;
        }
        return true;
    }    
};