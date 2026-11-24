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

// Function: sub_00471018
// Address: 0x471018 - 0x471050
void sub_00471018_0x471018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471018_0x471018");
#endif

    ctx->pc = 0x471018u;

    // 0x471018: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x471018u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
    // 0x47101c: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x47101cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
    // 0x471020: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x471020u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
    // 0x471024: 0x3c  dsll32      $zero, $zero, 0
    ctx->pc = 0x471024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 0));
    // 0x471028: 0xfa  dsrl        $zero, $zero, 3
    ctx->pc = 0x471028u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 3);
    // 0x47102c: 0x0  nop
    ctx->pc = 0x47102cu;
    // NOP
    // 0x471030: 0x0  nop
    ctx->pc = 0x471030u;
    // NOP
    // 0x471034: 0x0  nop
    ctx->pc = 0x471034u;
    // NOP
    // 0x471038: 0x0  nop
    ctx->pc = 0x471038u;
    // NOP
    // 0x47103c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x47103cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x471040: 0x0  nop
    ctx->pc = 0x471040u;
    // NOP
    // 0x471044: 0x0  nop
    ctx->pc = 0x471044u;
    // NOP
    // 0x471048: 0x0  nop
    ctx->pc = 0x471048u;
    // NOP
    // 0x47104c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x47104cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x471050u;
}
