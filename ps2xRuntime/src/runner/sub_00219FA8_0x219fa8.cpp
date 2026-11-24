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

// Function: sub_00219FA8
// Address: 0x219fa8 - 0x21a048
void sub_00219FA8_0x219fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219FA8_0x219fa8");
#endif

    switch (ctx->pc) {
        case 0x219fc0u: goto label_219fc0;
        case 0x219fe8u: goto label_219fe8;
        case 0x21a034u: goto label_21a034;
        default: break;
    }

    ctx->pc = 0x219fa8u;

    // 0x219fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219fac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x219facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x219fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x219fb8: 0xc084990  jal         func_212640
    ctx->pc = 0x219FB8u;
    SET_GPR_U32(ctx, 31, 0x219FC0u);
    ctx->pc = 0x219FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FB8u;
    // 0x219fbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x219FB8u, 0x219FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FC0u;
label_219fc0:
    // 0x219fc0: 0x8e061fc0  lw          $a2, 0x1FC0($s0)
    ctx->pc = 0x219fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x219fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x219fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fc8: 0x8cc20178  lw          $v0, 0x178($a2)
    ctx->pc = 0x219fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x219fcc: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x219FCCu;
    {
        const bool branch_taken_0x219fcc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x219FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FCCu;
        // 0x219fd0: 0x24c40180  addiu       $a0, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219fcc) {
            ctx->pc = 0x21A018u;
            goto label_21a018;
        }
    }
    ctx->pc = 0x219FD4u;
    // 0x219fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x219fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219fd8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x219fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219fdc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x219fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x219fe0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x219fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x219fe4: 0x0  nop
    ctx->pc = 0x219fe4u;
    // NOP
label_219fe8:
    // 0x219fe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x219fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x219fec: 0x50490004  beql        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219FECu;
    {
        const bool branch_taken_0x219fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x219fec) {
            ctx->pc = 0x219FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219FECu;
            // 0x219ff0: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A000u;
            goto label_21a000;
        }
    }
    ctx->pc = 0x219FF4u;
    // 0x219ff4: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x219FF4u;
    {
        const bool branch_taken_0x219ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x219ff4) {
            ctx->pc = 0x219FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x219FF4u;
            // 0x219ff8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A010u;
            goto label_21a010;
        }
    }
    ctx->pc = 0x219FFCu;
    // 0x219ffc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_21a000:
    // 0x21a000: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x21a000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21a004: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x21a004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x21a008: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x21a008u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x21a00c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x21a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_21a010:
    // 0x21a010: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x21A010u;
    {
        const bool branch_taken_0x21a010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A010u;
        // 0x21a014: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a010) {
            ctx->pc = 0x219FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219fe8;
        }
    }
    ctx->pc = 0x21A018u;
label_21a018:
    // 0x21a018: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x21a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x21a01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a020: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21A020u;
    {
        const bool branch_taken_0x21a020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A020u;
        // 0x21a024: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a020) {
            ctx->pc = 0x21A02Cu;
            goto label_21a02c;
        }
    }
    ctx->pc = 0x21A028u;
    // 0x21a028: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x21a028u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_21a02c:
    // 0x21a02c: 0xc084996  jal         func_212658
    ctx->pc = 0x21A02Cu;
    SET_GPR_U32(ctx, 31, 0x21A034u);
    ctx->pc = 0x21A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A02Cu;
    // 0x21a030: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21A02Cu, 0x21A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A034u;
label_21a034:
    // 0x21a034: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a038: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a03c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a040: 0x3e00008  jr          $ra
    ctx->pc = 0x21A040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A040u;
        // 0x21a044: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A048u;
}
