#include "zeroplayer.h"
#include "lz4-1.9.1/lib/lz4.h"

namespace Unity { namespace Tiny { namespace Codec
{
    ZEROPLAYER_EXPORT
    int ZEROPLAYER_CALL CompressBound_LZ4(int size)
    {
        return LZ4_compressBound(size);
    }

    ZEROPLAYER_EXPORT
    int ZEROPLAYER_CALL Compress_LZ4(const char* src, char* dst, int srcSize, int dstCapacity)
    {
        return LZ4_compress_default(src, dst, srcSize, dstCapacity);
    }

    ZEROPLAYER_EXPORT
    int ZEROPLAYER_CALL Decompress_LZ4(const char* src, char* dst, int compressedSize, int dstCapacity)
    {
        return LZ4_decompress_safe(src, dst, compressedSize, dstCapacity);
    }
}}} // namespace Unity::Tiny::Codec
