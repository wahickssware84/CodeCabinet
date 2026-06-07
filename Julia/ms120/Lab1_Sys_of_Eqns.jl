using LinearAlgebra
using RowEchelon

# 1.     HarMathAp12 3.3.003
println("1.\tHarMathAp12 3.3.003\n")

ans = [ 1 -6 8 5; 
      5 0 5 1; 
      1 5 1 1 ]
display(ans)

println('\n')

# 2.     HarMathAp12 3.3.009
println("2.\tHarMathAp12 3.3.009\n")

x = [ 1 2 5;
      2 -2 4; 
      0 1 -3 ]
y = [ -4; 
      -8; 
      12 ]
ans = x \ y
println("x = ", ans[1])
println("y = ", ans[2])
println("z = ", ans[3])

println('\n')

# 3.     HarMathAp12 3.3.015
println("3.\tHarMathAp12 3.3.015\n")

x = [ 1 -2 3 1;
      1 -3 1 -1;
      1 -1 0 0;
      1 0 1 1 ]
y = [ -14; 
      -25; 
      -8; 
      2 ]
ans = x \ y
println(ans)

println('\n')

# 4.     HarMathAp12 3.3.023.MI
println("4.\tHarMathAp12 3.3.023.MI\n")

x = [ 1 1 1;
      6 -1 -1;
      -1 6 6 ]
ans = rref(x)
display(ans)

println('\n')

# 5.     HarMathAp12 3.3.025
println("5.\tHarMathAp12 3.3.025\n")

x = [ 6 5 7 1;
      1 1 2 1;
      2 1 -1 -2 ]
ans = rref(x)
display(ans)

println('\n')

# 6.     HarMathAp12 3.3.028
println("6.\tHarMathAp12 3.3.028\n")

x = [ 2 1 -1 3;
      1 -1 2 3;
      1 1 -1 2 ]
ans = rref(x)
display(ans)

println('\n')

# 7.     HarMathAp12 3.3.029
println("7.\tHarMathAp12 3.3.029\n")

x = [ 2 -5 1 3;
      1 4 -6 -5;
      3 -4 -2 1 ]
ans = rref(x)
display(ans)

println('\n')

# 8.     HarMathAp12 3.3.039
println("8.\tHarMathAp12 3.3.039\n")

x = [ 1 2 -1 1 3;
      1 3 4 1 -2;
      2 5 2 2 1;
      2 3 -6 2 5]
ans = rref(x)
display(ans)

println('\n')

# 9.     HarMathAp12 3.3.037
println("9.\tHarMathAp12 3.3.037\n")

x = [ 1 3 2 2 5;
      1 1 3 0 4;
      2 0 2 -3 2;
      1 -3 0 0 -3]
ans = rref(x)
display(ans)

println('\n')

# 10.    HarMathAp12 3.3.045
println("10.\tHarMathAp12 3.3.045\n")

x = [ 1 1;
      2.5 7]
y = [ 20;
      113]
ans = x \ y
println("beef: ", ans[1], " cups")
println("burger: ", ans[2], " cups")

println('\n')