"""
Expert Problem:  TV Schedule

File Name: tv_schedule.py
Name:      ?
Course:    CPTR 141
"""

# Your code goes here

t_num_min = int(input("Enter number of minutes to fill: "))
t_num_sec = t_num_min*60
hours = t_num_sec//3600
r_num_sec = t_num_sec - (hours*3600)
mins = r_num_sec//60
dramas = t_num_sec//3120
t_num_sec -= (dramas * 3120)
sitcoms = t_num_sec//1440
t_num_sec -= (sitcoms*1440)
news = t_num_sec//150
t_num_sec -= (news*150)
ads = t_num_sec//30

print("\n{} hour(s) and {} minute(s) can hold the following items: ".format(hours, mins))
print("  - Dramas:", dramas)
print("  - Sitcoms:", sitcoms)
print("  - News Breaks:", news)
print("  - Advertisements:", ads)
