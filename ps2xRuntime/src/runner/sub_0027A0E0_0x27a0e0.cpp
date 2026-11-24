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

// Function: sub_0027A0E0
// Address: 0x27a0e0 - 0x27a1c0
void sub_0027A0E0_0x27a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A0E0_0x27a0e0");
#endif

    switch (ctx->pc) {
        case 0x27a108u: goto label_27a108;
        case 0x27a178u: goto label_27a178;
        default: break;
    }

    ctx->pc = 0x27a0e0u;

    // 0x27a0e0: 0x90820072  lbu         $v0, 0x72($a0)
    ctx->pc = 0x27a0e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x27a0e4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27A0E4u;
    {
        const bool branch_taken_0x27a0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0E4u;
        // 0x27a0e8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0e4) {
            ctx->pc = 0x27A138u;
            goto label_27a138;
        }
    }
    ctx->pc = 0x27A0ECu;
    // 0x27a0ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0f0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27a0f4: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27a0f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x27a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27a0fc: 0x24420950  addiu       $v0, $v0, 0x950
    ctx->pc = 0x27a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2384));
    // 0x27a100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a104: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x27a104u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_27a108:
    // 0x27a108: 0xdc8200d0  ld          $v0, 0xD0($a0)
    ctx->pc = 0x27a108u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x27a10c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A10Cu;
    {
        const bool branch_taken_0x27a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A10Cu;
        // 0x27a110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a10c) {
            ctx->pc = 0x27A120u;
            goto label_27a120;
        }
    }
    ctx->pc = 0x27A114u;
    // 0x27a114: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27A114u;
    {
        const bool branch_taken_0x27a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a114) {
            ctx->pc = 0x27A1B8u;
            goto label_27a1b8;
        }
    }
    ctx->pc = 0x27A11Cu;
    // 0x27a11c: 0x0  nop
    ctx->pc = 0x27a11cu;
    // NOP
label_27a120:
    // 0x27a120: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27a120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27a124: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x27a124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27a128: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27A128u;
    {
        const bool branch_taken_0x27a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A128u;
        // 0x27a12c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a128) {
            ctx->pc = 0x27A108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a108;
        }
    }
    ctx->pc = 0x27A130u;
    // 0x27a130: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x27A130u;
    {
        const bool branch_taken_0x27a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a130) {
            ctx->pc = 0x27A1B0u;
            goto label_27a1b0;
        }
    }
    ctx->pc = 0x27A138u;
label_27a138:
    // 0x27a138: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x27a138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27a13c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x27a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27a140: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x27a140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x27a144: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x27a144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x27a148: 0x24630950  addiu       $v1, $v1, 0x950
    ctx->pc = 0x27a148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2384));
    // 0x27a14c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x27a14cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27a150: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27a150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27a154: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27a158: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a15c: 0xdca60000  ld          $a2, 0x0($a1)
    ctx->pc = 0x27a15cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a160: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27a164: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x27a164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x27a168: 0x244231a0  addiu       $v0, $v0, 0x31A0
    ctx->pc = 0x27a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12704));
    // 0x27a16c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a170: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x27a174: 0x0  nop
    ctx->pc = 0x27a174u;
    // NOP
label_27a178:
    // 0x27a178: 0xdc8200d0  ld          $v0, 0xD0($a0)
    ctx->pc = 0x27a178u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x27a17c: 0x14460008  bne         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x27A17Cu;
    {
        const bool branch_taken_0x27a17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x27a17c) {
            ctx->pc = 0x27A1A0u;
            goto label_27a1a0;
        }
    }
    ctx->pc = 0x27A184u;
    // 0x27a184: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x27a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x27a188: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a18c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A18Cu;
    {
        const bool branch_taken_0x27a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A18Cu;
        // 0x27a190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a18c) {
            ctx->pc = 0x27A1A0u;
            goto label_27a1a0;
        }
    }
    ctx->pc = 0x27A194u;
    // 0x27a194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27A194u;
    {
        const bool branch_taken_0x27a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a194) {
            ctx->pc = 0x27A1B8u;
            goto label_27a1b8;
        }
    }
    ctx->pc = 0x27A19Cu;
    // 0x27a19c: 0x0  nop
    ctx->pc = 0x27a19cu;
    // NOP
label_27a1a0:
    // 0x27a1a0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27a1a4: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x27a1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27a1a8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27A1A8u;
    {
        const bool branch_taken_0x27a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1A8u;
        // 0x27a1ac: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1a8) {
            ctx->pc = 0x27A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a178;
        }
    }
    ctx->pc = 0x27A1B0u;
label_27a1b0:
    // 0x27a1b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1b4: 0x0  nop
    ctx->pc = 0x27a1b4u;
    // NOP
label_27a1b8:
    // 0x27a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A1C0u;
}
