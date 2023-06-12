echo "Enter the quantity: "
read quan 
echo "Enter the cost per quantity:"
read cost
total=$(($quan*$cost))
if [ total -gt 1000 ]
then 
{
	echo "You are eligible for 10% discount"
}
else
{
	echo "No discount for now"
}
fi