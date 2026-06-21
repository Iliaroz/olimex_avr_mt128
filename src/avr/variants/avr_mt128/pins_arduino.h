#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <avr/pgmspace.h>
#include <avr/io.h>

#define NUM_DIGITAL_PINS            53
#define NUM_ANALOG_INPUTS           8

// SPI & I2C
#define PIN_SPI_SS                  (10)
#define PIN_SPI_SCK                 (11)
#define PIN_SPI_MOSI                (12)
#define PIN_SPI_MISO                (13)
#define PIN_WIRE_SDA                (16)
#define PIN_WIRE_SCL                (15)

// Периферия Olimex AVR-MT128
#define BUTTON_1                    (A0)
#define BUTTON_2                    (A1)
#define BUTTON_3                    (A2)
#define BUTTON_4                    (A3)
#define BUTTON_5                    (A4)

#define RELAY_PIN                   (6)  
#define BUZZER_PIN                  (12) 

#define LCD_RS                      (0)  
#define LCD_E                       (2)  
#define LCD_D4                      (16) 
#define LCD_D5                      (17) 
#define LCD_D6                      (18) 
#define LCD_D7                      (19) 

#define PIN_A0                      (48)
#define PIN_A1                      (49)
#define PIN_A2                      (50)
#define PIN_A3                      (51)
#define PIN_A4                      (52)
#define PIN_A5                      (53)
static const uint8_t A0 = PIN_A0;
static const uint8_t A1 = PIN_A1;
static const uint8_t A2 = PIN_A2;
static const uint8_t A3 = PIN_A3;
static const uint8_t A4 = PIN_A4;
static const uint8_t A5 = PIN_A5;

#define digitalPinToPCICR(p)        (0)
#define digitalPinToPCMSK(p)        (0)
#define digitalPinToTimer(p)        (NOT_ON_TIMER)

#ifdef ARDUINO_MAIN
const uint16_t PROGMEM port_to_mode_PGM[] = {
  NOT_A_PORT, (uint16_t) &DDRA, (uint16_t) &DDRB, (uint16_t) &DDRC, (uint16_t) &DDRD, (uint16_t) &DDRE, (uint16_t) &DDRF
};
const uint16_t PROGMEM port_to_output_PGM[] = {
  NOT_A_PORT, (uint16_t) &PORTA, (uint16_t) &PORTB, (uint16_t) &PORTC, (uint16_t) &PORTD, (uint16_t) &PORTE, (uint16_t) &PORTF
};
const uint16_t PROGMEM port_to_input_PGM[] = {
  NOT_A_PORT, (uint16_t) &PINA, (uint16_t) &PINB, (uint16_t) &PINC, (uint16_t) &PIND, (uint16_t) &PINE, (uint16_t) &PINF
};
const uint8_t PROGMEM digital_pin_to_port_PGM[] = {
  PA, PA, PA, PA, PA, PA, PA, PA,
  PB, PB, PB, PB, PB, PB, PB, PB,
  PC, PC, PC, PC, PC, PC, PC, PC,
  PD, PD, PD, PD, PD, PD, PD, PD,
  PE, PE, PE, PE, PE, PE, PE, PE,
  PF, PF, PF, PF, PF, PF, PF, PF
};
const uint8_t PROGMEM digital_pin_to_bit_mask_PGM[] = {
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7),
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7),
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7),
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7),
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7),
  _BV(0), _BV(1), _BV(2), _BV(3), _BV(4), _BV(5), _BV(6), _BV(7)
};
#endif
#endif
