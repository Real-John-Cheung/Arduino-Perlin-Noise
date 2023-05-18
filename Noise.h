/*
  JohnC 2023
  based on https://github.com/SRombauts/SimplexNoise
  require implementation of <cstdint>, using Arduino Helpers https://tttapa.github.io/Arduino-Helpers/ 
*/

class Noise {
public:
  static float noise(float x);
  static float noise(float x, float y);
  static float noise(float x, float y, float z);

  explicit Noise(float frequency = 1.0f,
                 float amplitude = 1.0f,
                 float lacunarity = 2.0f,
                 float persistence = 0.5f)
    : mFrequency(frequency),
      mAmplitude(amplitude),
      mLacunarity(lacunarity),
      mPersistence(persistence) {
  }
private:
  float mFrequency;
  float mAmplitude;
  float mLacunarity;
  float mPersistence;
};