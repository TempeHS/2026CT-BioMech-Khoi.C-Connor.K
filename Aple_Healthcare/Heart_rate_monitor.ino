void heartRate_setup() {
    Wire.begin();
    unsigned int rate = 0;
}
void heartRate() {
    Wire.requestFrom(0xA0 >> 1, 1);    // request 1 bytes from slave device
    while(Wire.available()) { // slave may send less than requested
      rate = floor(Wire.read());    
    }
}