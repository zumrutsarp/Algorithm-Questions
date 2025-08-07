class Solution:
    def isPalindrome(self, x: int) -> bool:
     if x<0:
      return False
     array=[int(b) for b in str(x)] #number to array
     for i in range(len(array)//2):
        j=len(array)-1-i
        if array[i]!=array[j]:
         return False        
        

     return True 