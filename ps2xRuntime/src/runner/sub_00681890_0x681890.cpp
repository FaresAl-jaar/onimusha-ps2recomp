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

// Function: sub_00681890
// Address: 0x681890 - 0x6818b8
void sub_00681890_0x681890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00681890_0x681890");
#endif

    ctx->pc = 0x681890u;

    // 0x681890: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681890u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x681894: 0x0  nop
    ctx->pc = 0x681894u;
    // NOP
    // 0x681898: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x681898u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x68189c: 0x0  nop
    ctx->pc = 0x68189cu;
    // NOP
    // 0x6818a0: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6818a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x6818a4: 0x0  nop
    ctx->pc = 0x6818a4u;
    // NOP
    // 0x6818a8: 0x0  nop
    ctx->pc = 0x6818a8u;
    // NOP
    // 0x6818ac: 0x0  nop
    ctx->pc = 0x6818acu;
    // NOP
    // 0x6818b0: 0xff0302  .word       0x00FF0302                   # srl         $zero, $ra, 12 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6818b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 31), 12));
    // 0x6818b4: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x6818b4u;
    
    ctx->pc = 0x6818b8u;
}
