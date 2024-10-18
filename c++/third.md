# concept of stream,input output using overloaded operator >> and << and member function of input, output

## stream

it is a way to handle data flow either for input(reading)(istream) or output(output)(ostream)

### istream or input stream

it is used for getting data from the user(like cin)

### ostream or output stream

it is used to send data to stream (like cout)

## insertion operator (<<)

this operator is used to display data for example cout << "hello world" << endl ;

## extraction operator (>>)

it is used to read data for example cin >> x ;

## friend function

it is a special function that can access the private data of a class

## member function

it is a function that belongs to a class and it can work on only the data of the class

## clear

it is used to reset any error on a stream and it allow you for new inout output operatot

## eof(end of file)

it is used to check to see if there is no more data to read from a stream

## getline ()

it is used to read an entire line of text from an input string

## ignore()

it is a function that skip over unwanted characters in the input buffer like newline

## friend a structure of ostream

```cpp
friend ostream &operator<<(ostream &ost){
	classname &abc;
}
```

## work with the friend function
