class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int mn=0;
    for(int i=0;i<colors.size()-1;i++)
    {
       if(colors[i]==colors[i+1])
       {
          while(colors[i+1]==colors[i] && i<colors.size()-1)
           {
               if(neededTime[i]<neededTime[i+1])
               {
                   mn+=neededTime[i];
               }
              else
                {
                    swap(neededTime[i],neededTime[i+1]);
                    mn+=neededTime[i];
                }
              i++;
           } 
       }
    }
    return mn;
    }
};