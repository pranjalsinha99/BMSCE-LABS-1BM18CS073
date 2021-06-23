echo "Enter a number : "
read input

if [ $input -gt 0 ]
then
    echo "$input is positive"
elif [ $input -lt 0 ]
then
    echo "$input is negative"
else
    echo "$input is zero"
fi
