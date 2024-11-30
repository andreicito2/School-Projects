original_price  = float(input("Enter the original cost of the item: "))
sale_price      = float(input("Enter the sale price: "))
percent_savings = ((original_price - sale_price) / original_price) * 100

print("Percent savings: {:0.2f}%".format(percent_savings))

if (percent_savings >= 50):
  print("You found a great deal!")
