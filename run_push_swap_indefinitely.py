import subprocess
import random
import time

def run_push_swap_checker():
	while True:
		# Generate a random permutation of 8 integers from 1 to 8
		numbers = list(range(1, 9))
		random.shuffle(numbers)

		# Convert the list of numbers to a string of space-separated values
		numbers_str = ' '.join(map(str, numbers))

		# Print the random set of integers before running the push_swap program
		print(f"Random set of integers: {numbers_str}")

		# Define the command to run push_swap and pipe the output to checker_OS
		command = f"./push_swap {numbers_str} | ./checker_Mac {numbers_str}"
		
		# Run the command and capture the output
		result = subprocess.run(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

		# Print the output of the checker_OS program with colored "OK" and "KO"
		output = result.stdout.strip()
		if "OK" in output:
			print("\033[92mOK\033[0m")  # Green
		elif "KO" in output:
			print("\033[91mKO\033[0m")  # Red
		else:
			print(output)

		if result.stderr:
			print("Errors:")
			print(result.stderr)
		
		# Optional: Sleep for a short duration to prevent overwhelming the system
		time.sleep(1)

if __name__ == "__main__":
	run_push_swap_checker()
