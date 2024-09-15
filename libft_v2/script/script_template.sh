#!/bin/bash

# Récupérer le premier argument (s1) passé au script
s1=$1
s2=$s2

echo "This is stdout"
echo "This is stdout"

if [ ${s1} ]
then
    touch ${s1}.c
    cp template/template.c test
    mv test/template.c test/${s1}_main.c
    echo "File  ${s1}_main.c created in folder test"
    echo "File  ${s1} created"
fi
