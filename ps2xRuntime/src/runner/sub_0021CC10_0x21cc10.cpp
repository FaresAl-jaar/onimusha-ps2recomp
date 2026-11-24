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

// Function: sub_0021CC10
// Address: 0x21cc10 - 0x21ccf0
void sub_0021CC10_0x21cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CC10_0x21cc10");
#endif

    switch (ctx->pc) {
        case 0x21cc28u: goto label_21cc28;
        case 0x21cc3cu: goto label_21cc3c;
        case 0x21cc50u: goto label_21cc50;
        case 0x21cc64u: goto label_21cc64;
        case 0x21cc78u: goto label_21cc78;
        case 0x21cc98u: goto label_21cc98;
        case 0x21ccb0u: goto label_21ccb0;
        case 0x21ccc4u: goto label_21ccc4;
        case 0x21ccd8u: goto label_21ccd8;
        default: break;
    }

    ctx->pc = 0x21cc10u;

    // 0x21cc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21cc14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21cc18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21cc1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21cc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21cc20: 0xc08733c  jal         func_21CCF0
    ctx->pc = 0x21CC20u;
    SET_GPR_U32(ctx, 31, 0x21CC28u);
    ctx->pc = 0x21CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC20u;
    // 0x21cc24: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CCF0u, 0x21CC20u, 0x21CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC28u;
label_21cc28:
    // 0x21cc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc2c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21CC2Cu;
    {
        const bool branch_taken_0x21cc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC2Cu;
        // 0x21cc30: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc2c) {
            ctx->pc = 0x21CC80u;
            goto label_21cc80;
        }
    }
    ctx->pc = 0x21CC34u;
    // 0x21cc34: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CC34u;
    SET_GPR_U32(ctx, 31, 0x21CC3Cu);
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CC34u, 0x21CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC3Cu;
label_21cc3c:
    // 0x21cc3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc40: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CC40u;
    {
        const bool branch_taken_0x21cc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC40u;
        // 0x21cc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc40) {
            ctx->pc = 0x21CC58u;
            goto label_21cc58;
        }
    }
    ctx->pc = 0x21CC48u;
    // 0x21cc48: 0xc087364  jal         func_21CD90
    ctx->pc = 0x21CC48u;
    SET_GPR_U32(ctx, 31, 0x21CC50u);
    ctx->pc = 0x21CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD90u, 0x21CC48u, 0x21CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC50u;
label_21cc50:
    // 0x21cc50: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21CC50u;
    {
        const bool branch_taken_0x21cc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC50u;
        // 0x21cc54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc50) {
            ctx->pc = 0x21CCDCu;
            goto label_21ccdc;
        }
    }
    ctx->pc = 0x21CC58u;
label_21cc58:
    // 0x21cc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc5c: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CC5Cu;
    SET_GPR_U32(ctx, 31, 0x21CC64u);
    ctx->pc = 0x21CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC5Cu;
    // 0x21cc60: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CC5Cu, 0x21CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC64u;
label_21cc64:
    // 0x21cc64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21cc68: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21CC68u;
    {
        const bool branch_taken_0x21cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC68u;
        // 0x21cc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc68) {
            ctx->pc = 0x21CC88u;
            goto label_21cc88;
        }
    }
    ctx->pc = 0x21CC70u;
    // 0x21cc70: 0xc087392  jal         func_21CE48
    ctx->pc = 0x21CC70u;
    SET_GPR_U32(ctx, 31, 0x21CC78u);
    ctx->pc = 0x21CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE48u, 0x21CC70u, 0x21CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC78u;
label_21cc78:
    // 0x21cc78: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CC78u;
    {
        const bool branch_taken_0x21cc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cc78) {
            ctx->pc = 0x21CC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CC78u;
            // 0x21cc7c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CC8Cu;
            goto label_21cc8c;
        }
    }
    ctx->pc = 0x21CC80u;
label_21cc80:
    // 0x21cc80: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x21CC80u;
    {
        const bool branch_taken_0x21cc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC80u;
        // 0x21cc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc80) {
            ctx->pc = 0x21CCDCu;
            goto label_21ccdc;
        }
    }
    ctx->pc = 0x21CC88u;
label_21cc88:
    // 0x21cc88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21cc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21cc8c:
    // 0x21cc8c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x21cc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21cc90: 0xc088228  jal         func_2208A0
    ctx->pc = 0x21CC90u;
    SET_GPR_U32(ctx, 31, 0x21CC98u);
    ctx->pc = 0x21CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC90u;
    // 0x21cc94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208A0u, 0x21CC90u, 0x21CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC98u;
label_21cc98:
    // 0x21cc98: 0x26230d30  addiu       $v1, $s1, 0xD30
    ctx->pc = 0x21cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x21cc9c: 0x8c700288  lw          $s0, 0x288($v1)
    ctx->pc = 0x21cc9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x21cca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21cca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cca4: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x21cca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x21cca8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21CCA8u;
    SET_GPR_U32(ctx, 31, 0x21CCB0u);
    ctx->pc = 0x21CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCA8u;
    // 0x21ccac: 0x8c710284  lw          $s1, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21CCA8u, 0x21CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCB0u;
label_21ccb0:
    // 0x21ccb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21ccb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccb4: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x21ccb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21ccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccbc: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21CCBCu;
    SET_GPR_U32(ctx, 31, 0x21CCC4u);
    ctx->pc = 0x21CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCBCu;
    // 0x21ccc0: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21CCBCu, 0x21CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCC4u;
label_21ccc4:
    // 0x21ccc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ccc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccc8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21ccc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cccc: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x21ccccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21ccd0: 0xc088326  jal         func_220C98
    ctx->pc = 0x21CCD0u;
    SET_GPR_U32(ctx, 31, 0x21CCD8u);
    ctx->pc = 0x21CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCD0u;
    // 0x21ccd4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220C98u, 0x21CCD0u, 0x21CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCD8u;
label_21ccd8:
    // 0x21ccd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21ccd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21ccdc:
    // 0x21ccdc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21ccdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cce0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cce0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cce4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21cce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cce8: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCE8u;
        // 0x21ccec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CCF0u;
}
