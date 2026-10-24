class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        auto dateToDay = [](const string& date) {
            static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int month = stoi(date.substr(0, 2));
            int day = stoi(date.substr(3, 2));
            
            int totalDays = day;
            for (int i = 0; i < month - 1; ++i) {
                totalDays += daysInMonth[i];
            }
            return totalDays;
        };
        int startAlice = dateToDay(arriveAlice);
        int endAlice = dateToDay(leaveAlice);
        int startBob = dateToDay(arriveBob);
        int endBob = dateToDay(leaveBob);
        
        int startOverlap = max(startAlice, startBob);
        int endOverlap = min(endAlice, endBob);
        return max(0, endOverlap - startOverlap + 1);
    }
};