#include "Input/Adt/AdtChunk.hpp"
#include "utility/Include/BinaryStream.hpp"

namespace parser {
namespace input
{
class MCVT : AdtChunk
{
    public:
        float Heights[8 * 8 + 9 * 9];

        MCVT(long position, utility::BinaryStream *reader);
};
}
}