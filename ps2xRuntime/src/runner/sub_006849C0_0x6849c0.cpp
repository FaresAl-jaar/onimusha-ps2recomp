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

// Function: sub_006849C0
// Address: 0x6849c0 - 0x6849e0
void sub_006849C0_0x6849c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_006849C0_0x6849c0");
#endif

    ctx->pc = 0x6849c0u;

    // 0x6849c0: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6849c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x6849c4: 0x0  nop
    ctx->pc = 0x6849c4u;
    // NOP
    // 0x6849c8: 0x64373025  daddiu      $s7, $at, 0x3025
    ctx->pc = 0x6849c8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
    // 0x6849cc: 0x0  nop
    ctx->pc = 0x6849ccu;
    // NOP
    // 0x6849d0: 0x1390038  .word       0x01390038                   # dsll        $zero, $t9, 0 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6849d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 25) << 0);
    // 0x6849d4: 0x13b013a  .word       0x013B013A                   # dsrl        $zero, $k1, 4 # 01200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6849d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 27) >> 4);
    // 0x6849d8: 0x23d023c  .word       0x023D023C                   # dsll32      $zero, $sp, 8 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6849d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 29) << (32 + 8));
    // 0x6849dc: 0x0  nop
    ctx->pc = 0x6849dcu;
    // NOP
    ctx->pc = 0x6849e0u;
}
