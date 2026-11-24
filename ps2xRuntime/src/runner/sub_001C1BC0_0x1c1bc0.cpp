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

// Function: sub_001C1BC0
// Address: 0x1c1bc0 - 0x1c1ca0
void sub_001C1BC0_0x1c1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1BC0_0x1c1bc0");
#endif

    switch (ctx->pc) {
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1be0u: goto label_1c1be0;
        default: break;
    }

    ctx->pc = 0x1c1bc0u;

    // 0x1c1bc0: 0x2d030002  sltiu       $v1, $t0, 0x2
    ctx->pc = 0x1c1bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c1bc4: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C1BC4u;
    {
        const bool branch_taken_0x1c1bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC4u;
        // 0x1c1bc8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bc4) {
            ctx->pc = 0x1C1C98u;
            goto label_1c1c98;
        }
    }
    ctx->pc = 0x1C1BCCu;
    // 0x1c1bcc: 0x0  nop
    ctx->pc = 0x1c1bccu;
    // NOP
label_1c1bd0:
    // 0x1c1bd0: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1c1bd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1bd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1bd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1bd8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C1BD8u;
    {
        const bool branch_taken_0x1c1bd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD8u;
        // 0x1c1bdc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd8) {
            ctx->pc = 0x1C1C68u;
            goto label_1c1c68;
        }
    }
    ctx->pc = 0x1C1BE0u;
label_1c1be0:
    // 0x1c1be0: 0xec2021  addu        $a0, $a3, $t4
    ctx->pc = 0x1c1be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1c1be4: 0x908a0000  lbu         $t2, 0x0($a0)
    ctx->pc = 0x1c1be4u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1be8: 0x143082a  slt         $at, $t2, $v1
    ctx->pc = 0x1c1be8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c1bec: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C1BECu;
    {
        const bool branch_taken_0x1c1bec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1bec) {
            ctx->pc = 0x1C1C58u;
            goto label_1c1c58;
        }
    }
    ctx->pc = 0x1C1BF4u;
    // 0x1c1bf4: 0x11800002  beqz        $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1BF4u;
    {
        const bool branch_taken_0x1c1bf4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BF4u;
        // 0x1c1bf8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bf4) {
            ctx->pc = 0x1C1C00u;
            goto label_1c1c00;
        }
    }
    ctx->pc = 0x1C1BFCu;
    // 0x1c1bfc: 0x258bffff  addiu       $t3, $t4, -0x1
    ctx->pc = 0x1c1bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_1c1c00:
    // 0x1c1c00: 0xeb2021  addu        $a0, $a3, $t3
    ctx->pc = 0x1c1c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x1c1c04: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x1c1c04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1c08: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1C08u;
    {
        const bool branch_taken_0x1c1c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x1C1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C08u;
        // 0x1c1c0c: 0x1492023  subu        $a0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c08) {
            ctx->pc = 0x1C1C18u;
            goto label_1c1c18;
        }
    }
    ctx->pc = 0x1C1C10u;
    // 0x1c1c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1C10u;
    {
        const bool branch_taken_0x1c1c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C10u;
        // 0x1c1c14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c10) {
            ctx->pc = 0x1C1C30u;
            goto label_1c1c30;
        }
    }
    ctx->pc = 0x1C1C18u;
label_1c1c18:
    // 0x1c1c18: 0x694823  subu        $t1, $v1, $t1
    ctx->pc = 0x1c1c18u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c1c1c: 0x949c0  sll         $t1, $t1, 7
    ctx->pc = 0x1c1c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x1c1c20: 0x124001a  div         $zero, $t1, $a0
    ctx->pc = 0x1c1c20u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c1c24: 0x0  nop
    ctx->pc = 0x1c1c24u;
    // NOP
    // 0x1c1c28: 0x0  nop
    ctx->pc = 0x1c1c28u;
    // NOP
    // 0x1c1c2c: 0x5012  mflo        $t2
    ctx->pc = 0x1c1c2cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_1c1c30:
    // 0x1c1c30: 0xcb4821  addu        $t1, $a2, $t3
    ctx->pc = 0x1c1c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1c1c34: 0xcc2021  addu        $a0, $a2, $t4
    ctx->pc = 0x1c1c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1c1c38: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x1c1c38u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1c1c3c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1c1c3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1c40: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x1c1c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1c1c44: 0x1442018  mult        $a0, $t2, $a0
    ctx->pc = 0x1c1c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c1c48: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1c1c48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1c1c4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C1C4Cu;
    {
        const bool branch_taken_0x1c1c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C4Cu;
        // 0x1c1c50: 0x1245821  addu        $t3, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c4c) {
            ctx->pc = 0x1C1C68u;
            goto label_1c1c68;
        }
    }
    ctx->pc = 0x1C1C54u;
    // 0x1c1c54: 0x0  nop
    ctx->pc = 0x1c1c54u;
    // NOP
label_1c1c58:
    // 0x1c1c58: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1c1c5c: 0x188202b  sltu        $a0, $t4, $t0
    ctx->pc = 0x1c1c5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c1c60: 0x1480ffdf  bnez        $a0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C1C60u;
    {
        const bool branch_taken_0x1c1c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c60) {
            ctx->pc = 0x1C1BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1be0;
        }
    }
    ctx->pc = 0x1C1C68u;
label_1c1c68:
    // 0x1c1c68: 0xb2200  sll         $a0, $t3, 8
    ctx->pc = 0x1c1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x1c1c6c: 0xb5400  sll         $t2, $t3, 16
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1c1c70: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1c1c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1c1c74: 0xb4e00  sll         $t1, $t3, 24
    ctx->pc = 0x1c1c74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x1c1c78: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x1c1c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1c1c7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c1c80: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1c1c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1c1c84: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1c1c84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1c1c88: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1c1c88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c1c8c: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C1C8Cu;
    {
        const bool branch_taken_0x1c1c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c8c) {
            ctx->pc = 0x1C1BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1bd0;
        }
    }
    ctx->pc = 0x1C1C94u;
    // 0x1c1c94: 0x0  nop
    ctx->pc = 0x1c1c94u;
    // NOP
label_1c1c98:
    // 0x1c1c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1CA0u;
}
