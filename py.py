# Tells the how many left
from datetime import date
# Get today's date object
today= date.today()
# Specify a date
d1 = date(2016, 3, 10)
delta = d1 - today
print str(delta.days) + " days left"
