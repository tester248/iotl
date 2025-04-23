import time

# Simulate GPIO behavior (no actual hardware required)
class SimulatedGPIO:
    BCM = "BCM"
    OUT = "OUT"
    HIGH = True
    LOW = False

    def __init__(self):
        self.pin_states = {}

    def setmode(self, mode):
        if mode != SimulatedGPIO.BCM:
            raise ValueError("Only BCM mode is supported in simulation")

    def setup(self, pin, direction):
        if direction != SimulatedGPIO.OUT:
            raise ValueError("Only OUT direction is supported in simulation")
        self.pin_states[pin] = SimulatedGPIO.LOW  # Initialize pin state to LOW

    def output(self, pin, state):
        self.pin_states[pin] = state
        if state == SimulatedGPIO.HIGH:
            print(f"LED set to HIGH (pin {pin})")
        else:
            print(f"LED set to LOW (pin {pin})")

    def cleanup(self):
        self.pin_states.clear()
        print("Program stopped")

# Replace RPi.GPIO with our simulated class
GPIO = SimulatedGPIO()

# Define GPIO pin for LED
led_pin = 11

# Setup GPIO pin as output
GPIO.setup(led_pin, GPIO.OUT)

try:
    while True:
        GPIO.output(led_pin, GPIO.HIGH)
        time.sleep(0.5)
        GPIO.output(led_pin, GPIO.LOW)
        time.sleep(0.5)

except KeyboardInterrupt:
    GPIO.cleanup()