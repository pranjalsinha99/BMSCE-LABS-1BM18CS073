echo "Enter first number : "
read num1
echo "Enter second number : "
read num2

if [ $num1 -gt $num2 ]
then
    echo "\n$num1 is greater"
else
    echo "\n$num2 is greater"
fi
