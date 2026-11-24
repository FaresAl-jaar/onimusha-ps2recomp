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

// Function: sub_0027A1C0
// Address: 0x27a1c0 - 0x27a2f8
void sub_0027A1C0_0x27a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A1C0_0x27a1c0");
#endif

    switch (ctx->pc) {
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a230u: goto label_27a230;
        case 0x27a2b0u: goto label_27a2b0;
        default: break;
    }

    ctx->pc = 0x27a1c0u;

    // 0x27a1c0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x27a1c4: 0x10c00034  beqz        $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x27A1C4u;
    {
        const bool branch_taken_0x27a1c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1C4u;
        // 0x27a1c8: 0x3c03008c  lui         $v1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1c4) {
            ctx->pc = 0x27A298u;
            goto label_27a298;
        }
    }
    ctx->pc = 0x27A1CCu;
    // 0x27a1cc: 0x3c09008c  lui         $t1, 0x8C
    ctx->pc = 0x27a1ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)140 << 16));
    // 0x27a1d0: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x27a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x27a1d4: 0x25290950  addiu       $t1, $t1, 0x950
    ctx->pc = 0x27a1d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2384));
label_27a1d8:
    // 0x27a1d8: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x27a1d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27a1dc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x27a1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x27a1e0: 0x14a00029  bnez        $a1, . + 4 + (0x29 << 2)
    ctx->pc = 0x27A1E0u;
    {
        const bool branch_taken_0x27a1e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a1e0) {
            ctx->pc = 0x27A288u;
            goto label_27a288;
        }
    }
    ctx->pc = 0x27A1E8u;
    // 0x27a1e8: 0x90c80003  lbu         $t0, 0x3($a2)
    ctx->pc = 0x27a1e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x27a1ec: 0x90c70002  lbu         $a3, 0x2($a2)
    ctx->pc = 0x27a1ecu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x27a1f0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x27a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27a1f4: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x27a1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x27a1f8: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x27a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27a1fc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x27a1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x27a200: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x27a200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x27a204: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27a208: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x27a208u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x27a20c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x27a20cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x27a210: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27a214: 0x24ec01c0  addiu       $t4, $a3, 0x1C0
    ctx->pc = 0x27a214u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x27a218: 0x90e70208  lbu         $a3, 0x208($a3)
    ctx->pc = 0x27a218u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 520)));
    // 0x27a21c: 0x75080  sll         $t2, $a3, 2
    ctx->pc = 0x27a21cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27a220: 0x18a3821  addu        $a3, $t4, $t2
    ctx->pc = 0x27a220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x27a224: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x27a224u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27a228: 0x11600017  beqz        $t3, . + 4 + (0x17 << 2)
    ctx->pc = 0x27A228u;
    {
        const bool branch_taken_0x27a228 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A228u;
        // 0x27a22c: 0x8d050008  lw          $a1, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a228) {
            ctx->pc = 0x27A288u;
            goto label_27a288;
        }
    }
    ctx->pc = 0x27A230u;
label_27a230:
    // 0x27a230: 0x91670000  lbu         $a3, 0x0($t3)
    ctx->pc = 0x27a230u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x27a234: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x27a234u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x27a238: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x27A238u;
    {
        const bool branch_taken_0x27a238 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a238) {
            ctx->pc = 0x27A270u;
            goto label_27a270;
        }
    }
    ctx->pc = 0x27A240u;
    // 0x27a240: 0x91680003  lbu         $t0, 0x3($t3)
    ctx->pc = 0x27a240u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x27a244: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x27a244u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27a248: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x27a248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x27a24c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x27a24cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x27a250: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x27a250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x27a254: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x27a254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x27a258: 0x14e50005  bne         $a3, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A258u;
    {
        const bool branch_taken_0x27a258 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x27A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A258u;
        // 0x27a25c: 0x14b4021  addu        $t0, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a258) {
            ctx->pc = 0x27A270u;
            goto label_27a270;
        }
    }
    ctx->pc = 0x27A260u;
    // 0x27a260: 0x14c3821  addu        $a3, $t2, $t4
    ctx->pc = 0x27a260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x27a264: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x27a268: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27A268u;
    {
        const bool branch_taken_0x27a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A268u;
        // 0x27a26c: 0xace80004  sw          $t0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a268) {
            ctx->pc = 0x27A278u;
            goto label_27a278;
        }
    }
    ctx->pc = 0x27A270u;
label_27a270:
    // 0x27a270: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x27a270u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a274: 0x0  nop
    ctx->pc = 0x27a274u;
    // NOP
label_27a278:
    // 0x27a278: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x27a278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x27a27c: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x27a27cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27a280: 0x1560ffeb  bnez        $t3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x27A280u;
    {
        const bool branch_taken_0x27a280 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a280) {
            ctx->pc = 0x27A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a230;
        }
    }
    ctx->pc = 0x27A288u;
label_27a288:
    // 0x27a288: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x27a288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x27a28c: 0x14c0ffd2  bnez        $a2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x27A28Cu;
    {
        const bool branch_taken_0x27a28c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a28c) {
            ctx->pc = 0x27A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a1d8;
        }
    }
    ctx->pc = 0x27A294u;
    // 0x27a294: 0x0  nop
    ctx->pc = 0x27a294u;
    // NOP
label_27a298:
    // 0x27a298: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x27a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27a29c: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x27a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x27a2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27a2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2a4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x27a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x27a2a8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27a2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a2ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27a2b0:
    // 0x27a2b0: 0x90c300d9  lbu         $v1, 0xD9($a2)
    ctx->pc = 0x27a2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 217)));
    // 0x27a2b4: 0x1465000a  bne         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x27A2B4u;
    {
        const bool branch_taken_0x27a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x27a2b4) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2BCu;
    // 0x27a2bc: 0x90c300d8  lbu         $v1, 0xD8($a2)
    ctx->pc = 0x27a2bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x27a2c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A2C0u;
    {
        const bool branch_taken_0x27a2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2C0u;
        // 0x27a2c4: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2c0) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2C8u;
    // 0x27a2c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a2cc: 0xfc6000d0  sd          $zero, 0xD0($v1)
    ctx->pc = 0x27a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 0));
    // 0x27a2d0: 0xa06000d8  sb          $zero, 0xD8($v1)
    ctx->pc = 0x27a2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x27a2d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27A2D4u;
    {
        const bool branch_taken_0x27a2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D4u;
        // 0x27a2d8: 0xa06000d9  sb          $zero, 0xD9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d4) {
            ctx->pc = 0x27A2F0u;
            goto label_27a2f0;
        }
    }
    ctx->pc = 0x27A2DCu;
    // 0x27a2dc: 0x0  nop
    ctx->pc = 0x27a2dcu;
    // NOP
label_27a2e0:
    // 0x27a2e0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x27a2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x27a2e4: 0x28e30020  slti        $v1, $a3, 0x20
    ctx->pc = 0x27a2e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27a2e8: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x27A2E8u;
    {
        const bool branch_taken_0x27a2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2E8u;
        // 0x27a2ec: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2e8) {
            ctx->pc = 0x27A2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a2b0;
        }
    }
    ctx->pc = 0x27A2F0u;
label_27a2f0:
    // 0x27a2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x27A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A2F8u;
}
