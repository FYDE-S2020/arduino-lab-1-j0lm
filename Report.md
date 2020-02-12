Name: Jose Olmedo Jr

EID: jo25785

Team Number: F13

## Questions

1. Why does your program need a setup and a loop?

    You need to set up what pins will be the inputs and the outputs and you need the loop so that the program will run continuously, resulting in the light blinking on and off continuously

2. What is the downside to putting all your code in a loop?

    It can make the program run less efficiently since you would be running all code in the loop, even the unnecessary code.

3. Why does your code need to be compiled?

    It needs to be compiled into machine code so that the Arduino can understand it.

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

    The LED turns on and off very distinctly. A solution could be to either keep the frequency high, or do something with the current running through the LED.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

    To complete the circuit with the Arduino

6. What is the difference between synchronous and asynchronous communication?

    Synchronous communication only allows 1 thing to be executed at a time, whereas asynchronous alows for multiple things to be executed at the same tim

7. Profile of UART: Sent X bytes in Y time 

    Sent 11 bytes in 0.417ms

8. Profile of SPI: Sent X bytes in Y time

    Sent 5 bytes in 0.154ms

9. Why is SPI so much faster than UART?

    SPI is synchronous while UART is asynchronous

10. list one pro and one con of UART

    Pro: Not very complicated hardware wise, Con: Slow compared to other options

11. list one pro and one con of SPI

    Pro: Data can be transferred at high speed in tens of MHz, Con: No flow control

12. list one pro and one con of I2C

    Pro: Flow control, Con: The hardware complexity increases when number of master/slave devices are more in the circuit

13. Why does I2C need external resistors to work?

    Lines are open drain

## Screenshots

Procedure A, step 1:
![Put path to your image here ->](img/Saleae SS1.png)

Procedure A, step 4:
![Put path to your image here ->](img/Saleae SS2.png)

Procedure B, UART:
![Put path to your image here ->](img/Saleae SS3.png)

Procedure B, SPI:
![Put path to your image here ->](img/Saleae SS4.png)
