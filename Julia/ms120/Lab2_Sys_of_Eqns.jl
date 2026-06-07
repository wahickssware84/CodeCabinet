using LinearAlgebra
using RowEchelon

# 1.    KaufACS10 11.2.021
println("1.\tKaufACS10 11.2.021\n")

x = [ 1 1 1;
     3.5 4 2;
     0 -3 1 ]
y = [ 20;
      58;
      0 ]
ans = x \ y
println(round(ans[1]), " pounds of almonds")
println(round(ans[2]), " pounds of pecans")
println(round(ans[3]), " pounds of peanuts")

println('\n')

# 2.    KaufACS10 11.2.023
println("2.\tKaufACS10 11.2.023\n")

x = [ 1 1 1;
      0.05 0.10 0.25;
      1 1 -1 ]
y = [ 45;
      7.75;
      -3 ]
ans = x \ y
println(round(ans[1]), " nickels")
println(round(ans[2]), " dimes")
println(round(ans[3]), " quarters")

println('\n')

# 3.    KaufACS10 11.2.025
println("3.\tKaufACS10 11.2.025\n")

x = [ 1 1 1;
     -5 0 1;
     1 -5 1 ]
y = [ 180;
      0;
      0 ]
ans = x \ y
println(round(ans[1]), " degrees (smaller value)")
println(round(ans[2]), " degrees")
println(round(ans[3]), " degrees (larger value)")

println('\n')

# 4.    KaufACS10 11.2.027
println("4.\tKaufACS10 11.2.027\n")

x = [ 1 1 1;
      0.12 0.13 0.14;
      1 1 -1 ]
y = [ 2800;
      375;
      0 ]
ans = x \ y
println("12% interest: ", round(ans[1]))
println("13% interest: ", round(ans[2]))
println("14% interest: ", round(ans[3]))

println('\n')

# 5.    KaufACS10 11.2.029
println("5.\tKaufACS10 11.2.029\n")

x = [ 0.1 0.2 0.1;
      0.4 0.4 0.3;
      0.2 0.1 0.3 ]
y = [ 33.5;
      97.5;
      61.5 ]
ans = x \ y
println(round(ans[1]), " bird houses of type A")
println(round(ans[2]), " bird houses of type B")
println(round(ans[3]), " bird houses of type C")

println('\n')

# 6.    HarMathAp12 3.3.045
println("6.\tHarMathAp12 3.3.045\n")

x = [ 1 1;
      2.5 7 ]
y = [ 20;
      104 ]
ans = x \ y
println("beef: ", round(ans[1]), " cups")
println("burger: ", round(ans[2]), " cups")

println('\n')

# 7.    SAlgTrig4 10.2.046
println("7.\tSAlgTrig4 10.2.046\n")

x = [ 8 10 14;
      16 12 10;
      10 18 6 ]
y = [ 110;
      150;
      114 ]
ans = x \ y
println("factory A: ", round(ans[1]), " days")
println("factory B: ", round(ans[2]), " days")
println("factory C: ", round(ans[3]), " days")

println('\n')

# 8.    HarMathAp12 3.3.051.MI
println("8.\tHarMathAp12 3.3.051.MI\n")

x = [ 50 108 127;
      0 0.1 5.5;
      22 25.7 18 ]
y = [ 697;
      16.7;
      149.4 ]
ans = x \ y
println("All Fiber: ", round(ans[1]), "oz")
println("Frosted Puffs: ", round(ans[2]), "oz")
println("Natural Mixed Grain: ", round(ans[3]), "oz")

println('\n')

# 9.    HarMathAp12 3.3.055
println("9.\tHarMathAp12 3.3.055\n")

x = [ 0.1 3.4 2.2;
      8.5 22 10;
      1 20 12 ]
y = [ 37.2;
      234;
      212 ]
ans = x \ y
println("skim milk: ", round(ans[1]), " glasses")
println("meat: ", round(ans[2]), " quarter-pound servings")
println("whole grain bread: ", round(ans[3]), " two-slice servings")

println('\n')

# 10.   HarMathAp12 3.3.059
println("10.\tHarMathAp12 3.3.059\n")

function bactera_solution(z)
    x = 7200 - 3 * z
    y = (z - 2200) / 2
    return x, y, z
end
for z in 2000: 50: 2500
    x, y, z_val = bactera_solution(z)
    println(" z = ", z_val, ", x = ", x, ", y = ", y)
end

println('\n')

# 11.   SAlgTrig4 11.1.073.MI
println("11.\tSAlgTrig4 11.1.073.MI\n")

x = [ 0.5 1 1;
      0.5 1.5 1;
      1 1.5 2 ]
y = [ 290;
      430;
      570 ]
try
    ans = x \ y
catch e
    println("IMPOSSIBLE tables, IMPOSSIBLE chairs, IMPOSSIBLE armoires")
end

println('\n')