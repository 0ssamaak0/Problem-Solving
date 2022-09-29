class Solution(object):

    def returner(self, result, negative):
        MAXINT = 2147483647
        if (negative) == 1:
            result *= -1
        if result >= MAXINT:
            result = MAXINT
        elif result <= (-1 * MAXINT) - 1:
            result = (-1 * MAXINT) - 1

        return result

    def myAtoi(self, s):
        negative = -1
        reach1 = False
        reach2 = False
        result = 0

        for i in range(len(s)):
            if s[i] == " ":
                if reach1:
                    return Solution.returner(self, result, negative)
                continue
            reach1 = True
            if s[i] == "-":
                if negative != -1 or reach2:
                    return Solution.returner(self, result, negative)
                negative = 1
                continue
            if s[i] == "+":
                if negative != -1 or reach2:
                    return Solution.returner(self, result, negative)
                negative = 0
                continue
            reach2 = True
            if s[i] == ".":
                return Solution.returner(self, result, negative)
            if s[i] not in ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]:
                return Solution.returner(self, result, negative)
            result *= 10
            result += int(s[i])

        return Solution.returner(self, result, negative)
