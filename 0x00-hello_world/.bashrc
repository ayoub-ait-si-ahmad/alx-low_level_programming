function gitP {
  ara="$1"
  git add .
  git commit -m "$ara"
  git push
}

