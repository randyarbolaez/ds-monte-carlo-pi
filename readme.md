# Distributed System Monte Carlo Pi Approximation

## Baseline — Sequential — M1 Pro
inside_counter(78539680866)/total_points(100000000000) = 3.141587  
Seconds the program took to run was: 1929    
Minutes: 32.15 Minutes    

## Baseline — Sequential — x86 
inside_counter(78540053328)/total_points(100000000000) = 3.141602   
Seconds the program took to run was: 3031   
Minutes: 50.51 Minutes

## 5 Threads(Half) — Parallelization — M1 Pro
inside_counter(78376904275)/total_points(100000000000) = 3.135076   
Seconds the program took to run was: 478   
Minutes: 7.96 Minutes

## 4 Threads(Half) — Parallelization — x86
inside_counter(78539698351)/total_points(100000000000) = 3.141588
Seconds the program took to run was: 462
Minutes: 7.7 Minutes

## 8 Threads(All) — Parallelization — x86
inside_counter(78539691437)/total_points(100000000000) = 3.141588
Seconds the program took to run was: 369
Minutes: 6.15 Minutes
