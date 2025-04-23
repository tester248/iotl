import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BOARD)  
led_pin = 11  
GPIO.setup(led_pin, GPIO.OUT)

try:
    while True:
        GPIO.output(led_pin, GPIO.HIGH)
        print(f"LED set to HIGH (pin {led_pin})")
        time.sleep(0.5)
        GPIO.output(led_pin, GPIO.LOW)
        print(f"LED set to LOW (pin {led_pin})")
        time.sleep(0.5)

except KeyboardInterrupt:
    GPIO.cleanup()
    print("Program stopped")