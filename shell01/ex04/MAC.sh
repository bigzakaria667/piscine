ifconfig | grep "ether" | cut -d ' ' -f 2 | grep -v "autoselect"
