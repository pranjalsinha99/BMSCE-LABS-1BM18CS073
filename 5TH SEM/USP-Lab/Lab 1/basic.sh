cat copy.txt
echo "\n1.Created \n"

cp copy.txt ~/Desktop/copied.txt
echo "Copied \n"

mkdir inside_lab1 && cd inside_lab1
echo "3.Changed  Directory  \n"

echo "4.Present working Directory :"
pwd

echo "\ninside directory : \n"
ls

echo "Home Dir"
echo $HOME
