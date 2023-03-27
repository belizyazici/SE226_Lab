# question-3
std_name = input("Enter student name: ")
lab_grade = int(input("Lab grade: "))
midterm_grade = int(input("Midterm grade: "))
final_grade = int(input("Final grade: "))

last_score = (lab_grade*25/100) + (midterm_grade*35/100) + (final_grade*40/100)

print("Name: " + std_name + "\nLab: " + str(lab_grade) + "\nMidterm: " + str(midterm_grade) +
      "\nFinal: " + str(final_grade) + "\nLast Score: " + str(last_score))
