class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        //just for trigger when the scanning ends
        prices.push_back(0);
        //increasing deque
        deque<int> deq;
        
        int profit = 0;
        
        for(int i = 0; i < n+1; ++i){
            /*
            start to process deque's content
            when we meet a smaller element
            */
            /*
            we will process all elements from deque in one pass,
            so don't need a while loop here
            */
            if(!deq.empty() && prices[i] < prices[deq.back()]){
                /*
                only when there are >= 2 choosable prices,
                we can start a transaction
                */
                if(deq.size() >= 2){
                    profit += prices[deq.back()] - prices[deq.front()];
                }
                deq.clear();
            }
            
            deq.push_back(i);
        }
        
        return profit;
    }
};