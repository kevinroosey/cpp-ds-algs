## Arrays

Appending to the end of an array is a constant time operation, however inserting an element at a specific location is more inefficient at logarithmic time.

### Inserting elements to an array
```
std::vector<int> myVector;
myVector.push_back(25);
myVector.push_back(15);
```

### Iterating array elements
```
for (int i = 0; i < myVector.size(); i++) {
    cout << myVector[i] << endl;
}
```

### Relevant data structures:

**Hash maps**: Maps are a collection of key-value pairs. The keys in maps MUST be unique, something that can be exploited in Array questions.
