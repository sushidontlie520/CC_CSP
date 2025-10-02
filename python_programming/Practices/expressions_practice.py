#CC 6th Expression Practice


# This script solves 9 math equations using variables and prints the equation and the answer.

# Equation 1: 7-24/8*4+6=1
num1 = 7
num2 = 24
num3 = 8
num4 = 4
num5 = 6
ans1 = num1 - num2 / num3 * num4 + num5
print(f"{num1}-{num2}/{num3}*{num4}+{num5} = {ans1}")

# Equation 2: 18/3-7+2*5=9
num6 = 18
num7 = 3
num8 = 7
num9 = 2
num10 = 5
ans2 = num6 / num7 - num8 + num9 * num10
print(f"{num6}/{num7}-{num8}+{num9}*{num10} = {ans2}")

# Equation 3: 6*4/12+72/8-9=2
num11 = 6
num12 = 4
num13 = 12
num14 = 72
num15 = 8
num16 = 9
ans3 = num11 * num12 / num13 + num14 / num15 - num16
print(f"{num11}*{num12}/{num13}+{num14}/{num15}-{num16} = {ans3}")

# Equation 4: (17-6/2)+4*3=26
num17 = 17
num18 = 6
num19 = 2
num20 = 4
num21 = 3
ans4 = (num17 - num18 / num19) + num20 * num21
print(f"({num17}-{num18}/{num19})+{num20}*{num21} = {ans4}")

# Equation 5: -2(1*4-2/2)+(6+2-3)=-1
num22 = -2
num23 = 1
num24 = 4
num25 = 2
num26 = 6
num27 = 2
num28 = 3
ans5 = num22 * (num23 * num24 - num25 / num25) + (num26 + num27 - num28)
print(f"{num22}*({num23}*{num24}-{num25}/{num25})+({num26}+{num27}-{num28}) = {ans5}")

# Equation 6: -1*[(3-4*7)/5]-2*24/6 = -3
num29 = -1
num30 = 3
num31 = 4
num32 = 7
num33 = 5
num34 = 2
num35 = 24
num36 = 6
ans6 = num29 * ((num30 - num31 * num32) / num33) - num34 * num35 / num36
print(f"{num29}*(({num30}-{num31}*{num32})/{num33})-{num34}*{num35}/{num36} = {ans6}")

# Equation 7: (3*5^2/15)-(5-2^2) = 4
num37 = 3
num38 = 5
num39 = 2
num40 = 15
num41 = 5
ans7 = (num37 * num38 ** num39 / num40) - (num41 - num39 ** num39)
print(f"({num37}*{num38}^{num39}/{num40})-({num41}-{num39}^{num39}) = {ans7}")

# Equation 8: (1^4*2^2+3^3)-2^5/4 = 23
num42 = 1
num43 = 4
num44 = 2
num45 = 3
num46 = 5
num47 = 4
ans8 = (num42 ** num43 * num44 ** num44 + num45 ** num45) - num44 ** num46 / num47
print(f"({num42}^{num43}*{num44}^{num44}+{num45}^{num45})-{num44}^{num46}/{num47} = {ans8}")

# Equation 9: (22/2-2*5)^2+(4-6/6)^2 = 10
num48 = 22
num49 = 2
num50 = 2
num51 = 5
num52 = 4
num53 = 6
ans9 = ((num48 / num49 - num50 * num51) ** 2) + ((num52 - num53 / num53) ** 2)
print(f"({num48}/{num49}-{num50}*{num51})^2+({num52}-{num53}/{num53})^2 = {ans9}")