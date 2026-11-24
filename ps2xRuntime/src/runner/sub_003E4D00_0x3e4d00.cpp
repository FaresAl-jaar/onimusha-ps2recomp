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

// Function: sub_003E4D00
// Address: 0x3e4d00 - 0x3e4da8
void sub_003E4D00_0x3e4d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4D00_0x3e4d00");
#endif

    ctx->pc = 0x3e4d00u;

    // 0x3e4d00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3e4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e4d04: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e4d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e4d08: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x3e4d08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3e4d0c: 0x24c6fa10  addiu       $a2, $a2, -0x5F0
    ctx->pc = 0x3e4d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965776));
    // 0x3e4d10: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3e4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3e4d14: 0x9147007a  lbu         $a3, 0x7A($t2)
    ctx->pc = 0x3e4d14u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 122)));
    // 0x3e4d18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e4d1c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e4d20: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x3e4d20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3e4d24: 0x2484fa12  addiu       $a0, $a0, -0x5EE
    ctx->pc = 0x3e4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965778));
    // 0x3e4d28: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e4d2c: 0x2463f998  addiu       $v1, $v1, -0x668
    ctx->pc = 0x3e4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965656));
    // 0x3e4d30: 0x682821  addu        $a1, $v1, $t0
    ctx->pc = 0x3e4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e4d34: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e4d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e4d38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3e4d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3e4d3c: 0x2463f99a  addiu       $v1, $v1, -0x666
    ctx->pc = 0x3e4d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965658));
    // 0x3e4d40: 0xa147007a  sb          $a3, 0x7A($t2)
    ctx->pc = 0x3e4d40u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 122), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e4d44: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3e4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3e4d48: 0x9149007a  lbu         $t1, 0x7A($t2)
    ctx->pc = 0x3e4d48u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 122)));
    // 0x3e4d4c: 0x8f888464  lw          $t0, -0x7B9C($gp)
    ctx->pc = 0x3e4d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x3e4d50: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x3e4d50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3e4d54: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3e4d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3e4d58: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x3e4d58u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3e4d5c: 0x127001b  divu        $zero, $t1, $a3
    ctx->pc = 0x3e4d5cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x3e4d60: 0x0  nop
    ctx->pc = 0x3e4d60u;
    // NOP
    // 0x3e4d64: 0x0  nop
    ctx->pc = 0x3e4d64u;
    // NOP
    // 0x3e4d68: 0x3810  mfhi        $a3
    ctx->pc = 0x3e4d68u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x3e4d6c: 0xa147007a  sb          $a3, 0x7A($t2)
    ctx->pc = 0x3e4d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 122), (uint8_t)GPR_U32(ctx, 7));
    // 0x3e4d70: 0x9148007a  lbu         $t0, 0x7A($t2)
    ctx->pc = 0x3e4d70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 122)));
    // 0x3e4d74: 0x8f878464  lw          $a3, -0x7B9C($gp)
    ctx->pc = 0x3e4d74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935652)));
    // 0x3e4d78: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x3e4d78u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3e4d7c: 0x0  nop
    ctx->pc = 0x3e4d7cu;
    // NOP
    // 0x3e4d80: 0x0  nop
    ctx->pc = 0x3e4d80u;
    // NOP
    // 0x3e4d84: 0x3812  mflo        $a3
    ctx->pc = 0x3e4d84u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x3e4d88: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x3e4d88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e4d8c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3e4d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3e4d90: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x3e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x3e4d94: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x3e4d94u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e4d98: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x3e4d98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3e4d9c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e4d9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e4da0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4DA0u;
        // 0x3e4da4: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4DA8u;
}
