/*
 * @lc app=leetcode id=2409 lang=cpp
 *
 * [2409] Count Days Spent Together
 */

// @lc code=start
class Solution
{
public:
    int convert(string date)
    {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int total = day;

        for (int i = 0; i < month - 1; i++)
        {
            total += months[i];
        }

        return total;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob)
    {

        int a1 = convert(arriveAlice);
        int a2 = convert(leaveAlice);
        int b1 = convert(arriveBob);
        int b2 = convert(leaveBob);

        int start = max(a1, b1);
        int end = min(a2, b2);

        if (start > end)
        {
            return 0;
        }

        return end - start + 1;
    }
};
// @lc code=end
