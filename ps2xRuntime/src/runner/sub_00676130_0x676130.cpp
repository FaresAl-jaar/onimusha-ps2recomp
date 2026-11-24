#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00676130
// Address: 0x676130 - 0x676160
void sub_00676130_0x676130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00676130_0x676130");
#endif

    ctx->pc = 0x676130u;

    // 0x676130: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676130u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x676134: 0x3f8ccccd  .word       0x3F8CCCCD                   # lui         $t4, 0xCCCD # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676134u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x676138: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676138u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x67613c: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x67613cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x676140: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676140u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
    // 0x676144: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676144u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x676148: 0x3fcccccd  .word       0x3FCCCCCD                   # lui         $t4, 0xCCCD # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676148u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
    // 0x67614c: 0x3fd9999a  .word       0x3FD9999A                   # lui         $t9, 0x999A # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x67614cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
    // 0x676150: 0x3fe66666  .word       0x3FE66666                   # lui         $a2, 0x6666 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x676150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
    // 0x676154: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x676154u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x676158: 0x0  nop
    ctx->pc = 0x676158u;
    // NOP
    // 0x67615c: 0x0  nop
    ctx->pc = 0x67615cu;
    // NOP
    ctx->pc = 0x676160u;
}
