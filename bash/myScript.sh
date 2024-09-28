#!/bin/bash
S="Ding"
for i in {1..9}
do
	S=$S" ding"
done
cowsay -f vader $S
