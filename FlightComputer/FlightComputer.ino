/**
 * @file FlightComputer.ino
 * @brief Main sketch file for execution of the flight computer.
 */

#include "GPSSensor.h"
#include "IMUSensor.h"
#include "NonBlockingServo.h"
#include "config.h"
#include "util.h"

/* Sensors to receive data. */
static NonBlockingServo serv;
static IMUSensor imu_sensor;
static GPSSensor gps_sensor;

void setup() {
  Serial.begin(BAUD_RATE);
  Serial.println("Hello World!"); // serial monitor test.
  serv.begin();
  gps_sensor.begin();
}

void loop() {
  /*-----------------------------------------------------------------*/
  /* Servo part. */
  updateServoFromSerial(serv);
  /*-----------------------------------------------------------------*/
}
