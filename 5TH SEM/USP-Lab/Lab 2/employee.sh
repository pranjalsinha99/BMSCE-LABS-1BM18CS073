

echo "\nEnter name"
read name

echo "\nEnter DA :"
read da

echo "\nEnter HRA:"
read hra

echo "\nEnter basic salary"
read basic

sal=$(( $da + $hra + $basic ))

echo "\nGross Salary of $name = $sal"
