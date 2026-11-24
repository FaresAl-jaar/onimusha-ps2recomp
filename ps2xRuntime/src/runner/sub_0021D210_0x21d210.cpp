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

// Function: sub_0021D210
// Address: 0x21d210 - 0x21d2cc
void sub_0021D210_0x21d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D210_0x21d210");
#endif

    switch (ctx->pc) {
        case 0x21d224u: goto label_21d224;
        case 0x21d248u: goto label_21d248;
        case 0x21d2b8u: goto label_21d2b8;
        default: break;
    }

    ctx->pc = 0x21d210u;

    // 0x21d210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d214: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21d218: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21d218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21d21c: 0xc084990  jal         func_212640
    ctx->pc = 0x21D21Cu;
    SET_GPR_U32(ctx, 31, 0x21D224u);
    ctx->pc = 0x21D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D21Cu;
    // 0x21d220: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21D21Cu, 0x21D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D224u;
label_21d224:
    // 0x21d224: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21d224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21d228: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d22c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21d230: 0x2446a1cc  addiu       $a2, $v0, -0x5E34
    ctx->pc = 0x21d230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x21d234: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21d234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21d238: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x21d238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x21d23c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21d240: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21d240u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BA1CCu));
    // 0x21d244: 0x0  nop
    ctx->pc = 0x21d244u;
    // NOP
label_21d248:
    // 0x21d248: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21D248u;
    {
        const bool branch_taken_0x21d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D248u;
        // 0x21d24c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d248) {
            ctx->pc = 0x21D284u;
            goto label_21d284;
        }
    }
    ctx->pc = 0x21D250u;
    // 0x21d250: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x21d254: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D254u;
    {
        const bool branch_taken_0x21d254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D254u;
        // 0x21d258: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d254) {
            ctx->pc = 0x21D270u;
            goto label_21d270;
        }
    }
    ctx->pc = 0x21D25Cu;
    // 0x21d25c: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D25Cu;
    {
        const bool branch_taken_0x21d25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x21D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D25Cu;
        // 0x21d260: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d25c) {
            ctx->pc = 0x21D270u;
            goto label_21d270;
        }
    }
    ctx->pc = 0x21D264u;
    // 0x21d264: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D264u;
    {
        const bool branch_taken_0x21d264 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x21D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D264u;
        // 0x21d268: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d264) {
            ctx->pc = 0x21D270u;
            goto label_21d270;
        }
    }
    ctx->pc = 0x21D26Cu;
    // 0x21d26c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21d270:
    // 0x21d270: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x21d270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21d274: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x21d278: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d27c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d280: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21d280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_21d284:
    // 0x21d284: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21d284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21d288: 0x4a3ffef  bgezl       $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21D288u;
    {
        const bool branch_taken_0x21d288 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x21d288) {
            ctx->pc = 0x21D28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D288u;
            // 0x21d28c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d248;
        }
    }
    ctx->pc = 0x21D290u;
    // 0x21d290: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21d294: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D294u;
    {
        const bool branch_taken_0x21d294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D294u;
        // 0x21d298: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d294) {
            ctx->pc = 0x21D2A8u;
            goto label_21d2a8;
        }
    }
    ctx->pc = 0x21D29Cu;
    // 0x21d29c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x21d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d2a0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x21d2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d2a4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x21d2a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_21d2a8:
    // 0x21d2a8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21d2ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d2b0: 0xc084996  jal         func_212658
    ctx->pc = 0x21D2B0u;
    SET_GPR_U32(ctx, 31, 0x21D2B8u);
    ctx->pc = 0x21D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2B0u;
    // 0x21d2b4: 0xac50a160  sw          $s0, -0x5EA0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943072), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21D2B0u, 0x21D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2B8u;
label_21d2b8:
    // 0x21d2b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21d2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21d2bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21d2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21d2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2C4u;
        // 0x21d2c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D2CCu;
}
