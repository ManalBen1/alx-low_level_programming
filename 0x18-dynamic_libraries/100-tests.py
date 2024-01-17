import ctypes

# Load the dynamic library
cops = ctypes.CDLL('./100-operations.so')

# Generate random numbers
a = 10
b = 5

# Call C functions from Python
print(f"{a} + {b} = {cops.add(a, b)}")
print(f"{a} - {b} = {cops.sub(a, b)}")
print(f"{a} * {b} = {cops.mul(a, b)}")
print(f"{a} / {b} = {cops.divi(a, b)}")
print(f"{a} % {b} = {cops.mod(a, b)}")
