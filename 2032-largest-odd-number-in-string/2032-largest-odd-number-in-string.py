class Solution:
    sys.set_int_max_str_digits(1000000)
    def largestOddNumber(self, num: str) -> str:
        cnt=0
        len_num=len(num)
        number=int(num)
        if number%2!=0:
            return num
        while number:
            if number%2!=0:
                return str(number)
            else:
                cnt=cnt+1
            number//=10
        if len_num==cnt:
            return ""
        