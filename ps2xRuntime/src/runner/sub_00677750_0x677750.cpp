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

// Function: sub_00677750
// Address: 0x677750 - 0x677788
void sub_00677750_0x677750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00677750_0x677750");
#endif

    ctx->pc = 0x677750u;

    // 0x677750: 0x2bd050  .word       0x002BD050                   # mfhi        $k0 # 002B0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677750u;
    SET_GPR_U64(ctx, 26, ctx->hi);
    // 0x677754: 0x2bcc00  .word       0x002BCC00                   # sll         $t9, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677754u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x677758: 0x2bcf50  .word       0x002BCF50                   # mfhi        $t9 # 002B0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677758u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x67775c: 0x2bcc70  tge         $at, $t3, 817
    ctx->pc = 0x67775cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x677760: 0x2bcfd0  .word       0x002BCFD0                   # mfhi        $t9 # 002B07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677760u;
    SET_GPR_U64(ctx, 25, ctx->hi);
    // 0x677764: 0x2bcd00  .word       0x002BCD00                   # sll         $t9, $t3, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x677764u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
    // 0x677768: 0x2bcdb0  tge         $at, $t3, 822
    ctx->pc = 0x677768u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
    // 0x67776c: 0x2bce28  .word       0x002BCE28                   # mfsa        $t9 # 002B0600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67776cu;
    SET_GPR_U32(ctx, 25, ctx->sa);
    // 0x677770: 0x2bce98  .word       0x002BCE98                   # mult        $t9, $at, $t3 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x677770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
    // 0x677774: 0x0  nop
    ctx->pc = 0x677774u;
    // NOP
    // 0x677778: 0x0  nop
    ctx->pc = 0x677778u;
    // NOP
    // 0x67777c: 0x0  nop
    ctx->pc = 0x67777cu;
    // NOP
    // 0x677780: 0xfff1fff0  sd          $s1, -0x10($ra)
    ctx->pc = 0x677780u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967280), GPR_U64(ctx, 17));
    // 0x677784: 0xfff3fff2  sd          $s3, -0xE($ra)
    ctx->pc = 0x677784u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967282), GPR_U64(ctx, 19));
    ctx->pc = 0x677788u;
}
