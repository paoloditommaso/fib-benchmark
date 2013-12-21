# Uninformal benchmark

A performance comparison between C, Java, Groovy and Python using a very simple Fibonacci implementation. 

Calculating Fibonacci for number 500'000'000 .

Processor: `Intel core i7 2.7 GHz`
Operating System: `Apple OS X 10.8`


### Results 
 
  C   | C o3   | Java 6 | Java 7 | Groovy | Groovy S | Python  |
-----:|-------:|-------:|-------:|-------:|---------:|--------:|   
1.2049| 0.2806 | 0.2900 | 0.2821 | 1.0586 | 0.2889   | 110.0   |



### Legends

##### C
* Compile cmd line: ``gcc fib.c``
* Running cmd line: ``./a.out 500000000``


##### C o3 
* Compile cmd line: ``gcc -O3 fib.c``
* Running cmd line: ``./a.out 500000000``

##### Java 6 

* Oracle Java version 1.6.0_51
* Compile cmd line: ``javac fib.java``
* Running cmd line: ``java fib 500000000``


##### Java 7 
* Oracle Java version 1.7.0_21
* Compile cmd line: ``javac fib.java``
* Running cmd line: ``java fib 500000000``


##### Groovy 
* Groovy version 2.1.6 
* Oracle Java version 1.7.0_21
* Running cmd line: ``groovy fib.groovy 500000000``

##### Groovy S 
* Groovy version 2.1.6 
* @StaticCompile feature
* Oracle Java version 1.7.0_21
* Running cmd line: ``groovy fib_static.groovy 500000000``

##### Python
* Python version 2.7.5
* Running cmd line: ``python fib.py 500000000``



