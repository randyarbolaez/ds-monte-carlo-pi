# Parallel System Monte Carlo Pi Approximation

## Baseline — Sequential — M1 Pro
inside_counter(78539680866)/total_points(100000000000) = 3.141587  
Seconds the program took to run was: 1929    
Minutes: 32.15 Minutes    

## Baseline — Sequential — x86 
inside_counter(78540053328)/total_points(100000000000) = 3.141602   
Seconds the program took to run was: 3031   
Minutes: 50.51 Minutes

## 5 Threads(Half) — Parallelization — M1 Pro
inside_counter(78539880456)/total_points(100000000000) = 3.141595   
Seconds the program took to run was: 453   
Minutes: 7.55 Minutes

## 4 Threads(Half) — Parallelization — x86
inside_counter(78539698351)/total_points(100000000000) = 3.141588   
Seconds the program took to run was: 462   
Minutes: 7.7 Minutes

## 10 Threads(All) — Parallelization — M1 Pro
inside_counter(78539814741)/total_points(100000000000) = 3.141593    
Seconds the program took to run was: 262    
Minutes: 4.36

## 8 Threads(All) — Parallelization — x86
inside_counter(78539691437)/total_points(100000000000) = 3.141588    
Seconds the program took to run was: 369    
Minutes: 6.15 Minutes
