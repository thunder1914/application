#include "earth.h"
#include "parseNMEA.h"
#include <string>

using namespace System;

namespace NMEA
{

  bool isWellFormedSentence(std::string)
  {
      // Stub definition, needs implementing
      return false;
  }

  bool hasValidChecksum(std::string sentence)
  {
      if(sentence.Substring(sentence.IndexOf("*") + 1) == getChecksum2(sentence)
            return true;
      else  
            return false;
  }

  void static hasValidChecksum2(std::string sentence) {
      int x = Convert.ToByte(sentence[sentence.IndexOf('$')+1]);
          for (int i = sentence.IndexOf('$') + 2; i < sentence.InfexOf('*'); i++) {
              x^=Convert.ToByte(sentence[i]);
          }
      return x.ToString("X2");
  }
  SentenceData extractSentenceData(std::string sentence)
  {
      char[] comma = { ',', '*' };
          return sentence.Split(comma);
  }
          // Stub definition, needs implementing
      return {"",{}};
  }

  GPS::Position positionFromSentenceData(SentenceData)
  {
      // Stub definition, needs implementing
      return GPS::Earth::NorthPole;
  }

  Route routeFromLog(std::istream &)
  {
      // Stub definition, needs implementing
      return {};
  }

}
