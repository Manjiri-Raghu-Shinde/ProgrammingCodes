print("Welcome to the tip calculator.")
BillAmount=float(input("How much is the bill?"))
Tip=int(input("How much tip you want to give? 10 , 12 or 15%?"))
NoOfPeople=int(input("In how much people you want to spilt the bill?"))

TipPercent=Tip/100;
BillWithTip=BillAmount*TipPercent;
TotalBill=BillAmount+BillWithTip;
PerPersonBill=round(TotalBill/NoOfPeople,2);

print("Each Person Bill would be "+str(PerPersonBill))
print("Thankyou for using Tip Calculator.")