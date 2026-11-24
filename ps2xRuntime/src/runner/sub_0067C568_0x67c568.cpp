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

// Function: sub_0067C568
// Address: 0x67c568 - 0x67c590
void sub_0067C568_0x67c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0067C568_0x67c568");
#endif

    ctx->pc = 0x67c568u;

    // 0x67c568: 0x29292929  slti        $t1, $t1, 0x2929
    ctx->pc = 0x67c568u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10537) ? 1 : 0);
    // 0x67c56c: 0x292929  .word       0x00292929                   # mtsa        $at # 00092900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x67c56cu;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
    // 0x67c570: 0x2a2a2a2a  slti        $t2, $s1, 0x2A2A
    ctx->pc = 0x67c570u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10794) ? 1 : 0);
    // 0x67c574: 0x2a2a2a  .word       0x002A2A2A                   # slt         $a1, $at, $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c574u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x67c578: 0x2b2b2b2b  slti        $t3, $t9, 0x2B2B
    ctx->pc = 0x67c578u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)11051) ? 1 : 0);
    // 0x67c57c: 0x2b2b2b  .word       0x002B2B2B                   # sltu        $a1, $at, $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c57cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 1) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x67c580: 0x200ffff  .word       0x0200FFFF                   # dsra32      $ra, $zero, 31 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x67c580u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 31));
    // 0x67c584: 0x6000e00  bltz        $s0, . + 4 + (0xE00 << 2)
    ctx->pc = 0x67C584u;
    {
        const bool branch_taken_0x67c584 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x67C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x67C584u;
        // 0x67c588: 0x400fa00  bltz        $zero, . + 4 + (-0x600 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x67AD8C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x67c584) {
            ctx->pc = 0x67FD88u;
            return;
        }
    }
    ctx->pc = 0x67C58Cu;
    // 0x67c58c: 0xc00  sll         $at, $zero, 16
    ctx->pc = 0x67c58cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x67c590u;
}
