class Solution(object):
    def reverse(self, x):

        neg = False
        if (x < 0):
            neg = True
            x *= -1

        xs = str(x)

        xs = xs[::-1]
        if(len(xs) > 10):
            return 0

        mx = str(2147483647)
        if(len(xs) == 10):
            for i in range(10):
                if(int(xs[i]) > int(mx[i])):
                    return 0
                elif(int(xs[i]) < int(mx[i])):
                    break
        xs = int(xs)

        if(neg):
            xs *= -1
        return (xs)
