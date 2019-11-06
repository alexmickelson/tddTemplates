javac -cp .:junit-4.13-rc-1.jar:hamcrest-core-1.3.jar *.java 
java -cp .:junit-4.13-rc-1.jar:hamcrest-core-1.3.jar org.junit.runner.JUnitCore TestLinkedList


# windows
# javac -cp .;junit-4.13-rc-1.jar;hamcrest-core-1.3.jar *.java 
# java -cp .;junit-4.13-rc-1.jar;hamcrest-core-1.3.jar org.junit.runner.JUnitCore TestLinkedList