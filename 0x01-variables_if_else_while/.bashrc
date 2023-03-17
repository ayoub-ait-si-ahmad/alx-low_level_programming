function gitP {
  ara="$1"
  git add .
  git commit -m "$ara"
  git push
}
newfile()
if [ -e $1 ]
then
	echo "This file exists already"
else
	echo "#include <stdio.h>
	int main()
       	{
  	printf("Hello World!");
	return (0);
	}" > $1
	vim $1
fi

