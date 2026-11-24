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

// Function: sub_00182C00
// Address: 0x182c00 - 0x182cc0
void sub_00182C00_0x182c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182C00_0x182c00");
#endif

    switch (ctx->pc) {
        case 0x182c18u: goto label_182c18;
        case 0x182c68u: goto label_182c68;
        default: break;
    }

    ctx->pc = 0x182c00u;

    // 0x182c00: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x182c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x182c04: 0x9467006a  lhu         $a3, 0x6A($v1)
    ctx->pc = 0x182c04u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x182c08: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x182c08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x182c0c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x182C0Cu;
    {
        const bool branch_taken_0x182c0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C0Cu;
        // 0x182c10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c0c) {
            ctx->pc = 0x182C50u;
            goto label_182c50;
        }
    }
    ctx->pc = 0x182C14u;
    // 0x182c14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x182c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c18:
    // 0x182c18: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x182c1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x182c20: 0x883821  addu        $a3, $a0, $t0
    ctx->pc = 0x182c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x182c24: 0x94e400c6  lhu         $a0, 0xC6($a3)
    ctx->pc = 0x182c24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 198)));
    // 0x182c28: 0x3084fffb  andi        $a0, $a0, 0xFFFB
    ctx->pc = 0x182c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
    // 0x182c2c: 0xa4e400c6  sh          $a0, 0xC6($a3)
    ctx->pc = 0x182c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 198), (uint16_t)GPR_U32(ctx, 4));
    // 0x182c30: 0x94e400c6  lhu         $a0, 0xC6($a3)
    ctx->pc = 0x182c30u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 198)));
    // 0x182c34: 0x3084fffd  andi        $a0, $a0, 0xFFFD
    ctx->pc = 0x182c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65533);
    // 0x182c38: 0xa4e400c6  sh          $a0, 0xC6($a3)
    ctx->pc = 0x182c38u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 198), (uint16_t)GPR_U32(ctx, 4));
    // 0x182c3c: 0x9467006a  lhu         $a3, 0x6A($v1)
    ctx->pc = 0x182c3cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x182c40: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x182c40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x182c44: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x182C44u;
    {
        const bool branch_taken_0x182c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C44u;
        // 0x182c48: 0x250800e0  addiu       $t0, $t0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c44) {
            ctx->pc = 0x182C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182c18;
        }
    }
    ctx->pc = 0x182C4Cu;
    // 0x182c4c: 0x0  nop
    ctx->pc = 0x182c4cu;
    // NOP
label_182c50:
    // 0x182c50: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x182c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x182c54: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x182C54u;
    {
        const bool branch_taken_0x182c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C54u;
        // 0x182c58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c54) {
            ctx->pc = 0x182CB8u;
            goto label_182cb8;
        }
    }
    ctx->pc = 0x182C5Cu;
    // 0x182c5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x182c5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182c64: 0x0  nop
    ctx->pc = 0x182c64u;
    // NOP
label_182c68:
    // 0x182c68: 0x8c680080  lw          $t0, 0x80($v1)
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x182c6c: 0x1275814  dsllv       $t3, $a3, $t1
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x182c70: 0xab2024  and         $a0, $a1, $t3
    ctx->pc = 0x182c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 11));
    // 0x182c74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182C74u;
    {
        const bool branch_taken_0x182c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182C74u;
        // 0x182c78: 0x10a4021  addu        $t0, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c74) {
            ctx->pc = 0x182C88u;
            goto label_182c88;
        }
    }
    ctx->pc = 0x182C7Cu;
    // 0x182c7c: 0x950400c6  lhu         $a0, 0xC6($t0)
    ctx->pc = 0x182c7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 198)));
    // 0x182c80: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x182c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x182c84: 0xa50400c6  sh          $a0, 0xC6($t0)
    ctx->pc = 0x182c84u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 198), (uint16_t)GPR_U32(ctx, 4));
label_182c88:
    // 0x182c88: 0xcb2024  and         $a0, $a2, $t3
    ctx->pc = 0x182c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
    // 0x182c8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x182C8Cu;
    {
        const bool branch_taken_0x182c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c8c) {
            ctx->pc = 0x182CA0u;
            goto label_182ca0;
        }
    }
    ctx->pc = 0x182C94u;
    // 0x182c94: 0x950400c6  lhu         $a0, 0xC6($t0)
    ctx->pc = 0x182c94u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 198)));
    // 0x182c98: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x182c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x182c9c: 0xa50400c6  sh          $a0, 0xC6($t0)
    ctx->pc = 0x182c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 198), (uint16_t)GPR_U32(ctx, 4));
label_182ca0:
    // 0x182ca0: 0x9464006a  lhu         $a0, 0x6A($v1)
    ctx->pc = 0x182ca0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x182ca4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x182ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x182ca8: 0x124202a  slt         $a0, $t1, $a0
    ctx->pc = 0x182ca8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x182cac: 0x1480ffee  bnez        $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x182CACu;
    {
        const bool branch_taken_0x182cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182CACu;
        // 0x182cb0: 0x254a00e0  addiu       $t2, $t2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cac) {
            ctx->pc = 0x182C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182c68;
        }
    }
    ctx->pc = 0x182CB4u;
    // 0x182cb4: 0x0  nop
    ctx->pc = 0x182cb4u;
    // NOP
label_182cb8:
    // 0x182cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x182CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182CC0u;
}
