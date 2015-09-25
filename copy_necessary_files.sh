#!/usr/bin/bash

for i in *
do
    echo "processing ${i}"
    if [ ${i} != "AddressBookEx" ]; then
        cat AddressBookEx/.cdtproject | sed "s/AddressBookEx/$i/" > ${i}/.cdtproject
        cat AddressBookEx/.project | sed "s/AddressBookEx/$i/" > ${i}/.project
        cat AddressBookEx/.cdtbuild | sed "s/AddressBookEx/$i/" > ${i}/.cdtbuild
        cp -R AddressBookEx/.settings ${i}
    fi
done
