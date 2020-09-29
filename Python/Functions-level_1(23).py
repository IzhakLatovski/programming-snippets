# Very easy Python tasks from 'Edabit' website, implemented by me

"""-------------------------------------------------------------------------------------------
Task 1
Create a function that takes two numbers as arguments and return their sum.
-------------------------------------------------------------------------------------------"""

def addition(a, b):
  return a+b


"""-------------------------------------------------------------------------------------------
Task 2
Create a function that takes a number as an argument, increments the number by +1 and returns the result.
-------------------------------------------------------------------------------------------"""

def increment(num):
  return num+1


"""-------------------------------------------------------------------------------------------
Task 3
Create a function that takes the number of wins, draws and losses and calculates the number of
points a football team as obtained so far. A win receives 3 points, a draw 1 point and a loss 0 points.
-------------------------------------------------------------------------------------------"""

def football_points(wins, draws, losses):
	return wins*3 + draws


"""-------------------------------------------------------------------------------------------
Task 4
Write a function that takes an integer minutes and converts it to seconds.
-------------------------------------------------------------------------------------------"""

def convert_minutes_to_seconds(minutes):
	return minutes*60


"""-------------------------------------------------------------------------------------------
Task 5
Write a function that converts hours into seconds.
-------------------------------------------------------------------------------------------"""

def convert_hours_to_seconds(hours):
	return hours*60*60


"""-------------------------------------------------------------------------------------------
Task 6
Write a function that takes the base and height of a triangle and return its area.
-------------------------------------------------------------------------------------------"""

def triangle_area(base, height):
	return base*height/2


"""-------------------------------------------------------------------------------------------
Task 7
There is a single operator in Python, capable of providing the remainder of a division operation.
Two numbers are passed as parameters. The first parameter divided by the second parameter will have
a remainder, possibly zero. Return that value.
-------------------------------------------------------------------------------------------"""

def remainder(x, y):
	return x%y


"""-------------------------------------------------------------------------------------------
Task 8
Create a function that finds the maximum range of a triangle's third edge, where the side lengths are all integers.
-------------------------------------------------------------------------------------------"""

def next_edge(side1, side2):
	return side1+side2-1


"""-------------------------------------------------------------------------------------------
Task 9
Create a function that takes a string and returns it as an integer.
-------------------------------------------------------------------------------------------"""

def string_to_int(txt):
	return int(txt)


"""-------------------------------------------------------------------------------------------
Task 10
Create a function that returns True when num1 is equal to num2; otherwise return False.
-------------------------------------------------------------------------------------------"""

def is_same_num(num1, num2):
	return num1==num2


"""-------------------------------------------------------------------------------------------
Task 11
In this challenge, a farmer is asking you to tell him how many legs can be counted among all his animals.
The farmer breeds three species:
chickens = 2 legs
cows = 4 legs
pigs = 4 legs
The farmer has counted his animals and he gives you a subtotal for each species.
You have to implement a function that returns the total number of legs of all the animals,
that returns True when num1 is equal to num2; otherwise return False.
-------------------------------------------------------------------------------------------"""

def animals_legs_counter(chickens, cows, pigs):
	return chickens*2 + cows*4 + pigs*4


"""-------------------------------------------------------------------------------------------
Task 12
Create a function that takes a number as its only argument
and returns True if it's less than or equal to zero,otherwise return False.
-------------------------------------------------------------------------------------------"""

def less_than_or_equal_to_zero(num):
	return num<=0


"""-------------------------------------------------------------------------------------------
Task 13
Given two numbers, return True if the sum of both numbers is less than 100. Otherwise return False.
-------------------------------------------------------------------------------------------"""

def sum_is_less_than_100(a, b):
	return a+b<100


"""-------------------------------------------------------------------------------------------
Task 14
Write a function that takes two integers (hours, minutes), converts them to seconds, and adds them.
-------------------------------------------------------------------------------------------"""


def convert(hours, minutes):
	return hours*3600 + minutes*60


"""-------------------------------------------------------------------------------------------
Task 15
Create a function that takes a base number and an exponent number and returns the calculation.
-------------------------------------------------------------------------------------------"""

def calculate_exponent(num, exp):
	return num**exp


"""-------------------------------------------------------------------------------------------
Task 16
Create a function that takes a list and returns the first element.
-------------------------------------------------------------------------------------------"""

def get_first_value(number_list):
	return number_list[0]


"""-------------------------------------------------------------------------------------------
Task 17
Create a function that takes a number as an argument and returns double the num.
-------------------------------------------------------------------------------------------"""

def multiply_by_two(num):
	return num*2


"""-------------------------------------------------------------------------------------------
Task 18
Create a function that takes a list of numbers and returns the smallest number in the list.
-------------------------------------------------------------------------------------------"""

def find_smallest_num_in_list(lst):
	return min(lst)


"""-------------------------------------------------------------------------------------------
Task 19
Create a function to concatenate two integer lists.
-------------------------------------------------------------------------------------------"""

def concat_lists(lst1, lst2):
	return lst1+lst2


"""-------------------------------------------------------------------------------------------
Task 20
Given a list of integers, return the difference between the largest and smallest integers in the list.
-------------------------------------------------------------------------------------------"""

def difference_in_list(nums):
	return max(nums)-min(nums)


"""-------------------------------------------------------------------------------------------
Task 21
Create a function that takes a list of numbers. Return the largest number in the list.
-------------------------------------------------------------------------------------------"""

def find_biggest_num_in_list(nums):
	return max(nums)


"""-------------------------------------------------------------------------------------------
Task 22
Create a function that accepts a name and print Welcome message with the persons name
-------------------------------------------------------------------------------------------"""

def my_func(name):
	string="Welcome "+name
	print(string)
	return string


"""-------------------------------------------------------------------------------------------
Task 23
Write two functions:
to_int() : A function to convert a string to an integer.
to_str() : A function to convert an integer to a string.
-------------------------------------------------------------------------------------------"""

def to_int(txt):
	return int(txt)

def to_str(num):
	return str(num)



