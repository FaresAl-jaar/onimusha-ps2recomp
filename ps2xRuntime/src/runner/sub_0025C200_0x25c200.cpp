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

// Function: sub_0025C200
// Address: 0x25c200 - 0x25c310
void sub_0025C200_0x25c200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C200_0x25c200");
#endif

    switch (ctx->pc) {
        case 0x25c260u: goto label_25c260;
        case 0x25c2e8u: goto label_25c2e8;
        default: break;
    }

    ctx->pc = 0x25c200u;

    // 0x25c200: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x25c200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x25c204: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c208: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x25C208u;
    {
        const bool branch_taken_0x25c208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x25C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C208u;
        // 0x25c20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c208) {
            ctx->pc = 0x25C238u;
            goto label_25c238;
        }
    }
    ctx->pc = 0x25C210u;
    // 0x25c210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c214: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C214u;
    {
        const bool branch_taken_0x25c214 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x25c214) {
            ctx->pc = 0x25C228u;
            goto label_25c228;
        }
    }
    ctx->pc = 0x25C21Cu;
    // 0x25c21c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C21Cu;
    {
        const bool branch_taken_0x25c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c21c) {
            ctx->pc = 0x25C248u;
            goto label_25c248;
        }
    }
    ctx->pc = 0x25C224u;
    // 0x25c224: 0x0  nop
    ctx->pc = 0x25c224u;
    // NOP
label_25c228:
    // 0x25c228: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c22c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C22Cu;
    {
        const bool branch_taken_0x25c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C22Cu;
        // 0x25c230: 0x8c294fb8  lw          $t1, 0x4FB8($at) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c22c) {
            ctx->pc = 0x25C250u;
            goto label_25c250;
        }
    }
    ctx->pc = 0x25C234u;
    // 0x25c234: 0x0  nop
    ctx->pc = 0x25c234u;
    // NOP
label_25c238:
    // 0x25c238: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x25c238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x25c23c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C23Cu;
    {
        const bool branch_taken_0x25c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C23Cu;
        // 0x25c240: 0x8c295018  lw          $t1, 0x5018($at) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c23c) {
            ctx->pc = 0x25C250u;
            goto label_25c250;
        }
    }
    ctx->pc = 0x25C244u;
    // 0x25c244: 0x0  nop
    ctx->pc = 0x25c244u;
    // NOP
label_25c248:
    // 0x25c248: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x25C248u;
    {
        const bool branch_taken_0x25c248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c248) {
            ctx->pc = 0x25C308u;
            goto label_25c308;
        }
    }
    ctx->pc = 0x25C250u;
label_25c250:
    // 0x25c250: 0x1520002b  bnez        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x25C250u;
    {
        const bool branch_taken_0x25c250 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c250) {
            ctx->pc = 0x25C300u;
            goto label_25c300;
        }
    }
    ctx->pc = 0x25C258u;
    // 0x25c258: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x25C258u;
    {
        const bool branch_taken_0x25c258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C258u;
        // 0x25c25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c258) {
            ctx->pc = 0x25C308u;
            goto label_25c308;
        }
    }
    ctx->pc = 0x25C260u;
label_25c260:
    // 0x25c260: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x25c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x25c264: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x25c264u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x25c268: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C268u;
    {
        const bool branch_taken_0x25c268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C268u;
        // 0x25c26c: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c268) {
            ctx->pc = 0x25C278u;
            goto label_25c278;
        }
    }
    ctx->pc = 0x25C270u;
    // 0x25c270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c274: 0x0  nop
    ctx->pc = 0x25c274u;
    // NOP
label_25c278:
    // 0x25c278: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C278u;
    {
        const bool branch_taken_0x25c278 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c278) {
            ctx->pc = 0x25C288u;
            goto label_25c288;
        }
    }
    ctx->pc = 0x25C280u;
    // 0x25c280: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25C280u;
    {
        const bool branch_taken_0x25c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C280u;
        // 0x25c284: 0x8d290018  lw          $t1, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c280) {
            ctx->pc = 0x25C2E8u;
            goto label_25c2e8;
        }
    }
    ctx->pc = 0x25C288u;
label_25c288:
    // 0x25c288: 0x8d23004c  lw          $v1, 0x4C($t1)
    ctx->pc = 0x25c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x25c28c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C28Cu;
    {
        const bool branch_taken_0x25c28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c28c) {
            ctx->pc = 0x25C2A0u;
            goto label_25c2a0;
        }
    }
    ctx->pc = 0x25C294u;
    // 0x25c294: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x25C294u;
    {
        const bool branch_taken_0x25c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C294u;
        // 0x25c298: 0x8d290018  lw          $t1, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c294) {
            ctx->pc = 0x25C2E8u;
            goto label_25c2e8;
        }
    }
    ctx->pc = 0x25C29Cu;
    // 0x25c29c: 0x0  nop
    ctx->pc = 0x25c29cu;
    // NOP
label_25c2a0:
    // 0x25c2a0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x25C2A0u;
    {
        const bool branch_taken_0x25c2a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2a0) {
            ctx->pc = 0x25C2C0u;
            goto label_25c2c0;
        }
    }
    ctx->pc = 0x25C2A8u;
    // 0x25c2a8: 0x8d2329c0  lw          $v1, 0x29C0($t1)
    ctx->pc = 0x25c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10688)));
    // 0x25c2ac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x25c2acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c2b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C2B0u;
    {
        const bool branch_taken_0x25c2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2b0) {
            ctx->pc = 0x25C2C0u;
            goto label_25c2c0;
        }
    }
    ctx->pc = 0x25C2B8u;
    // 0x25c2b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25C2B8u;
    {
        const bool branch_taken_0x25c2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C2B8u;
        // 0x25c2bc: 0x8d290018  lw          $t1, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c2b8) {
            ctx->pc = 0x25C2E8u;
            goto label_25c2e8;
        }
    }
    ctx->pc = 0x25C2C0u;
label_25c2c0:
    // 0x25c2c0: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x25c2c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x25c2c4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x25C2C4u;
    {
        const bool branch_taken_0x25c2c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2c4) {
            ctx->pc = 0x25C2F8u;
            goto label_25c2f8;
        }
    }
    ctx->pc = 0x25C2CCu;
    // 0x25c2cc: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25C2CCu;
    {
        const bool branch_taken_0x25c2cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2cc) {
            ctx->pc = 0x25C2D8u;
            goto label_25c2d8;
        }
    }
    ctx->pc = 0x25C2D4u;
    // 0x25c2d4: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x25c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
label_25c2d8:
    // 0x25c2d8: 0x8d290018  lw          $t1, 0x18($t1)
    ctx->pc = 0x25c2d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x25c2dc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x25c2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x25c2e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25c2e4: 0x0  nop
    ctx->pc = 0x25c2e4u;
    // NOP
label_25c2e8:
    // 0x25c2e8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x25c2e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x25c2ec: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x25C2ECu;
    {
        const bool branch_taken_0x25c2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c2ec) {
            ctx->pc = 0x25C260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c260;
        }
    }
    ctx->pc = 0x25C2F4u;
    // 0x25c2f4: 0x0  nop
    ctx->pc = 0x25c2f4u;
    // NOP
label_25c2f8:
    // 0x25c2f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25C2F8u;
    {
        const bool branch_taken_0x25c2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c2f8) {
            ctx->pc = 0x25C308u;
            goto label_25c308;
        }
    }
    ctx->pc = 0x25C300u;
label_25c300:
    // 0x25c300: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x25C300u;
    {
        const bool branch_taken_0x25c300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C300u;
        // 0x25c304: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c300) {
            ctx->pc = 0x25C2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c2e8;
        }
    }
    ctx->pc = 0x25C308u;
label_25c308:
    // 0x25c308: 0x3e00008  jr          $ra
    ctx->pc = 0x25C308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C310u;
}
