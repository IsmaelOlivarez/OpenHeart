/*
 * OpenHeart — contactless heartbeat / motion sensor
 *
 * Boilerplate sketch: reads an analog signal (e.g. the output of a
 * low-frequency radio reflection front-end) and streams samples over
 * serial so movement can be observed and analyzed.
 *
 * Board: any Arduino-compatible MCU with an ADC.
 */

// ---- Pin configuration ----
const uint8_t SENSOR_PIN = A0;   // analog input from the RF front-end
const uint8_t LED_PIN    = LED_BUILTIN;

// ---- Sampling configuration ----
const unsigned long SAMPLE_INTERVAL_MS = 10;  // ~100 Hz sampling

unsigned long lastSampleTime = 0;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);

  Serial.println(F("OpenHeart sensor ready"));
}

void loop() {
  unsigned long now = millis();
  if (now - lastSampleTime < SAMPLE_INTERVAL_MS) {
    return;
  }
  lastSampleTime = now;

  int raw = analogRead(SENSOR_PIN);

  // Stream the raw sample. Replace with your own detection/filtering.
  Serial.println(raw);

  // TODO: filter the signal and flag heartbeat/motion events.
}
