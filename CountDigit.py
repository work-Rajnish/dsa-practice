def countDigits(n: int) -> int:
    if n==0:
        return -1
    count=0
    while n>0:
        count+=1
        n//=10
    return count

''' solution using type conversion method(this changes the datatype of input)

def countDigits(n: int) -> int:
    return len(str(n))
 '''

        