def  addnumbers(list):
    toplam=0
    for i in range(len(list)):
        list[i]=list[i]*10**i
        toplam+=list[i]
    return toplam


l1=[2,4,3]
l2 = [5,6,4]
toplamsonuc=addnumbers(l1)+addnumbers(l2)
rakamlar = list(str(toplamsonuc)) 
rakamlar.sort(reverse=True)  
result = int(''.join(rakamlar))
print(result)