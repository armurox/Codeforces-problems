# Problem 1901A "Line Trip
This is my current best solution to the problem 1901A "Line Trip", which is an 800 rated problem. My current solution has been accepted, and hence I consider it to be complete. Of course, as always, if I can think of a more efficient solution, I shall return to the problem. 

## Problem statement
You are driving a car on a number line, starting at point 0 and arriving at point x, then returning. The car burns 1 unit of fuel for every 1 unit moved along the number line, and certain points along the number line allow for refueling back up to full. Given these points, determine the minimum fuel capacity of the car.

## Method
The idea is to find the maximum difference between the gas stations (including the special case of the final gas station and the point x and then back to the gas stations i.e. 2 * (x - final_gas_station)). This difference then becomes the minimum necessary fuel capacity of the car, as it corresponds to the max required distance the car has to travel before being able to refuel.