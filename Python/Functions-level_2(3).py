# Easy Python tasks from 'Edabit' website, implemented by me

"""-------------------------------------------------------------------------------------------
Task 1
Create a function that takes an integer and returns the factorial of that integer.
That is, the integer multiplied by all positive lower integers.
-------------------------------------------------------------------------------------------"""

def factorial(num):
	if num<2:
		return num
	return num*factorial(num - 1)


"""-------------------------------------------------------------------------------------------
Task 2
Given a list, return True if there are more odd numbers than even numbers, otherwise return False.
-------------------------------------------------------------------------------------------"""

def oddeven(lst):
	even=0
	odd=0
	for i in lst:
		if i%2 == 0:
			even=even+1
		else:
			odd=odd+1
	if odd>even:
		return 1
	return 0


"""-------------------------------------------------------------------------------------------
Task 3
Create a function that takes height and width and finds the perimeter of a rectangle.
-------------------------------------------------------------------------------------------"""

def find_rectangle_perimeter(height, width):
  return (height+width)*2

