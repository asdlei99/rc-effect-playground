#include "Controls.hpp"

void InitParameter(uint32_t index, Parameter& parameter)
{
    DISTRHO_SAFE_ASSERT_RETURN(index < paramCount,);

    parameter.hints = kParameterIsAutomable;

    switch (index) {
    case pIdButtonI:
        parameter.symbol = "I";
        parameter.name = "Chorus (I)";
        parameter.hints |= kParameterIsBoolean|kParameterIsInteger;
        break;
    case pIdButtonII:
        parameter.symbol = "II";
        parameter.name = "Chorus (II)";
        parameter.hints |= kParameterIsBoolean|kParameterIsInteger;
        break;
    }
}