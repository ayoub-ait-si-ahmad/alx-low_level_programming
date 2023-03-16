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
	echo "#!/bin/bash" > $1
	chmod 700 $1
	vim $1
fi

