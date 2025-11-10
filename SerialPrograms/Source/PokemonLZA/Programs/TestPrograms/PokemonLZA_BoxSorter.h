/*  Move Box Arrow
 *
 *  From: https://github.com/PokemonAutomation/
 *
 */

#ifndef PokemonAutomation_PokemonLZA_BoxSorter_H
#define PokemonAutomation_PokemonLZA_BoxSorter_H

#include "Common/Cpp/Options/SimpleIntegerOption.h"
#include "NintendoSwitch/NintendoSwitch_SingleSwitchProgram.h"

namespace PokemonAutomation{
namespace NintendoSwitch{
namespace PokemonLZA{


class BoxSorter_Descriptor : public SingleSwitchProgramDescriptor{
public:
    BoxSorter_Descriptor();
};


class BoxSorter : public SingleSwitchProgramInstance{
public:
    BoxSorter();

    virtual void program(SingleSwitchProgramEnvironment& env, ProControllerContext& context) override;

private:
    SimpleIntegerOption<uint8_t> TARGET_ROW;
    SimpleIntegerOption<uint8_t> TARGET_COL;
};




}
}
}
#endif
