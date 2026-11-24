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

// Function: sub_0024F160
// Address: 0x24f160 - 0x24f1f8
void sub_0024F160_0x24f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F160_0x24f160");
#endif

    switch (ctx->pc) {
        case 0x24f1c0u: goto label_24f1c0;
        case 0x24f1d0u: goto label_24f1d0;
        default: break;
    }

    ctx->pc = 0x24f160u;

    // 0x24f160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f164: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24f16c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24f16cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f174: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24f174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24f17c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24f180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24f184: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f188: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F188u;
    {
        const bool branch_taken_0x24f188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x24F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F188u;
        // 0x24f18c: 0x82440052  lb          $a0, 0x52($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f188) {
            ctx->pc = 0x24F1A0u;
            goto label_24f1a0;
        }
    }
    ctx->pc = 0x24F190u;
    // 0x24f190: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f194: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f194u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f198: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F198u;
    {
        const bool branch_taken_0x24f198 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F198u;
        // 0x24f19c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f198) {
            ctx->pc = 0x24F1E0u;
            goto label_24f1e0;
        }
    }
    ctx->pc = 0x24F1A0u;
label_24f1a0:
    // 0x24f1a0: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x24F1A0u;
    {
        const bool branch_taken_0x24f1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x24F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1A0u;
        // 0x24f1a4: 0xa2450058  sb          $a1, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1a0) {
            ctx->pc = 0x24F1DCu;
            goto label_24f1dc;
        }
    }
    ctx->pc = 0x24F1A8u;
    // 0x24f1a8: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F1A8u;
    {
        const bool branch_taken_0x24f1a8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x24F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1A8u;
        // 0x24f1ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1a8) {
            ctx->pc = 0x24F1E0u;
            goto label_24f1e0;
        }
    }
    ctx->pc = 0x24F1B0u;
    // 0x24f1b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24f1b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24f1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f1b8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x24f1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x24f1bc: 0x0  nop
    ctx->pc = 0x24f1bcu;
    // NOP
label_24f1c0:
    // 0x24f1c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f1c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x24f1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24f1c8: 0xc091ccc  jal         func_247330
    ctx->pc = 0x24F1C8u;
    SET_GPR_U32(ctx, 31, 0x24F1D0u);
    ctx->pc = 0x24F1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F1C8u;
    // 0x24f1cc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247330u, 0x24F1C8u, 0x24F1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F1D0u;
label_24f1d0:
    // 0x24f1d0: 0xa2530059  sb          $s3, 0x59($s2)
    ctx->pc = 0x24f1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 89), (uint8_t)GPR_U32(ctx, 19));
    // 0x24f1d4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24F1D4u;
    {
        const bool branch_taken_0x24f1d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1D4u;
        // 0x24f1d8: 0xa2400058  sb          $zero, 0x58($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 88), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1d4) {
            ctx->pc = 0x24F1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f1c0;
        }
    }
    ctx->pc = 0x24F1DCu;
label_24f1dc:
    // 0x24f1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24f1e0:
    // 0x24f1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24f1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f1e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24f1e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f1e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24f1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24f1ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24f1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1F0u;
        // 0x24f1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F1F8u;
}
