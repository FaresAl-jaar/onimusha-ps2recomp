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

// Function: sub_00252C60
// Address: 0x252c60 - 0x252d58
void sub_00252C60_0x252c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252C60_0x252c60");
#endif

    switch (ctx->pc) {
        case 0x252ca0u: goto label_252ca0;
        case 0x252ce0u: goto label_252ce0;
        case 0x252d14u: goto label_252d14;
        case 0x252d28u: goto label_252d28;
        default: break;
    }

    ctx->pc = 0x252c60u;

    // 0x252c60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252c64: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x252c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x252c68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x252c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x252c6c: 0x2450fbb0  addiu       $s0, $v0, -0x450
    ctx->pc = 0x252c6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966192));
    // 0x252c70: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x252c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x252c74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x252c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c78: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252c7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x252c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c80: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x252c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x252c84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x252c84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252c8c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x252c8cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4DFBB0u));
    // 0x252c90: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x252C90u;
    {
        const bool branch_taken_0x252c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252C90u;
        // 0x252c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c90) {
            ctx->pc = 0x252CC4u;
            goto label_252cc4;
        }
    }
    ctx->pc = 0x252C98u;
    // 0x252c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c9c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x252c9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_252ca0:
    // 0x252ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x252ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x252ca4: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x252ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x252ca8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x252ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x252cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252CACu;
    {
        const bool branch_taken_0x252cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CACu;
        // 0x252cb0: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cac) {
            ctx->pc = 0x252CC4u;
            goto label_252cc4;
        }
    }
    ctx->pc = 0x252CB4u;
    // 0x252cb4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x252cb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x252cb8: 0x0  nop
    ctx->pc = 0x252cb8u;
    // NOP
    // 0x252cbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x252CBCu;
    {
        const bool branch_taken_0x252cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CBCu;
        // 0x252cc0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cbc) {
            ctx->pc = 0x252CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252ca0;
        }
    }
    ctx->pc = 0x252CC4u;
label_252cc4:
    // 0x252cc4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x252cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252cc8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x252CC8u;
    {
        const bool branch_taken_0x252cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x252CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CC8u;
        // 0x252ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cc8) {
            ctx->pc = 0x252D3Cu;
            goto label_252d3c;
        }
    }
    ctx->pc = 0x252CD0u;
    // 0x252cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cd8: 0xc049590  jal         func_125640
    ctx->pc = 0x252CD8u;
    SET_GPR_U32(ctx, 31, 0x252CE0u);
    ctx->pc = 0x252CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CD8u;
    // 0x252cdc: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x252CD8u, 0x252CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CE0u;
label_252ce0:
    // 0x252ce0: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x252ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x252ce4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x252ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x252ce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cec: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x252cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x252cf0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x252cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cf4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x252cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252cf8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x252cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252cfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x252cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d00: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x252d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x252d04: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x252d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x252d08: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x252d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x252d0c: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x252D0Cu;
    SET_GPR_U32(ctx, 31, 0x252D14u);
    ctx->pc = 0x252D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D0Cu;
    // 0x252d10: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x252D0Cu, 0x252D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D14u;
label_252d14:
    // 0x252d14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252D14u;
    {
        const bool branch_taken_0x252d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D14u;
        // 0x252d18: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d14) {
            ctx->pc = 0x252D30u;
            goto label_252d30;
        }
    }
    ctx->pc = 0x252D1Cu;
    // 0x252d1c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x252d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x252d20: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x252D20u;
    SET_GPR_U32(ctx, 31, 0x252D28u);
    ctx->pc = 0x252D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252D20u;
    // 0x252d24: 0x2484eec8  addiu       $a0, $a0, -0x1138 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x252D20u, 0x252D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252D28u;
label_252d28:
    // 0x252d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x252D28u;
    {
        const bool branch_taken_0x252d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D28u;
        // 0x252d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d28) {
            ctx->pc = 0x252D3Cu;
            goto label_252d3c;
        }
    }
    ctx->pc = 0x252D30u;
label_252d30:
    // 0x252d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x252d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x252d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d38: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x252d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_252d3c:
    // 0x252d3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252d40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x252d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x252d44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252d48: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x252d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x252d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252d50: 0x3e00008  jr          $ra
    ctx->pc = 0x252D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D50u;
        // 0x252d54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252D58u;
}
