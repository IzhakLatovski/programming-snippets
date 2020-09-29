# Medium Python tasks from 'Edabit' website, implemented by me

"""-------------------------------------------------------------------------------------------
Task 1
Create a function that takes a number as an argument and returns "Fizz", "Buzz" or "FizzBuzz".
If the number is a multiple of 3 the output should be "Fizz".
If the number given is a multiple of 5, the output should be "Buzz".
If the number given is a multiple of both 3 and 5, the output should be "FizzBuzz".
If the number is not a multiple of either 3 or 5, the number should be output on its own as shown in the examples below.
The output should always be a string even if it is not a multiple of 3 or 5
-------------------------------------------------------------------------------------------"""

def fizz_buzz(num):
	if num%3==0:
		if num%5==0:
			return "FizzBuzz"
		else:
			return "Fizz"
	elif num%5==0:
		return "Buzz"
	else:
		return str(num)