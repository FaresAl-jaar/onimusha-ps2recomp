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

// Function: sub_00682F30
// Address: 0x682f30 - 0x682f60
void sub_00682F30_0x682f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00682F30_0x682f30");
#endif

    ctx->pc = 0x682f30u;

    // 0x682f30: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x682f30u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x682f34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x682f34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x682f38: 0x206  .word       0x00000206                   # srlv        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x682f38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    // 0x682f3c: 0x0  nop
    ctx->pc = 0x682f3cu;
    // NOP
    // 0x682f40: 0x0  nop
    ctx->pc = 0x682f40u;
    // NOP
    // 0x682f44: 0x0  nop
    ctx->pc = 0x682f44u;
    // NOP
    // 0x682f48: 0x0  nop
    ctx->pc = 0x682f48u;
    // NOP
    // 0x682f4c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x682f4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x682f50: 0x0  nop
    ctx->pc = 0x682f50u;
    // NOP
    // 0x682f54: 0x0  nop
    ctx->pc = 0x682f54u;
    // NOP
    // 0x682f58: 0x0  nop
    ctx->pc = 0x682f58u;
    // NOP
    // 0x682f5c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x682f5cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    ctx->pc = 0x682f60u;
}
