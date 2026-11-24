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

// Function: sub_00132300
// Address: 0x132300 - 0x132400
void sub_00132300_0x132300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132300_0x132300");
#endif

    switch (ctx->pc) {
        case 0x132320u: goto label_132320;
        case 0x132358u: goto label_132358;
        case 0x132368u: goto label_132368;
        case 0x132390u: goto label_132390;
        case 0x1323a0u: goto label_1323a0;
        case 0x1323d0u: goto label_1323d0;
        case 0x1323d8u: goto label_1323d8;
        default: break;
    }

    ctx->pc = 0x132300u;

    // 0x132300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132304: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x132304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x132308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x132308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13230c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x132310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x132310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x132314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x132318: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x132318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13231c: 0x26500180  addiu       $s0, $s2, 0x180
    ctx->pc = 0x13231cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_132320:
    // 0x132320: 0xae510180  sw          $s1, 0x180($s2)
    ctx->pc = 0x132320u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 17));
    // 0x132324: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x132324u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x132328: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x132328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13232c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13232Cu;
    {
        const bool branch_taken_0x13232c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x132330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13232Cu;
        // 0x132330: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13232c) {
            ctx->pc = 0x132390u;
            goto label_132390;
        }
    }
    ctx->pc = 0x132334u;
    // 0x132334: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x132334u;
    {
        const bool branch_taken_0x132334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x132334) {
            ctx->pc = 0x132370u;
            goto label_132370;
        }
    }
    ctx->pc = 0x13233Cu;
    // 0x13233c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13233cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132340: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132340u;
    {
        const bool branch_taken_0x132340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x132340) {
            ctx->pc = 0x132350u;
            goto label_132350;
        }
    }
    ctx->pc = 0x132348u;
    // 0x132348: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x132348u;
    {
        const bool branch_taken_0x132348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132348) {
            ctx->pc = 0x1323A0u;
            goto label_1323a0;
        }
    }
    ctx->pc = 0x132350u;
label_132350:
    // 0x132350: 0xc043778  jal         func_10DDE0
    ctx->pc = 0x132350u;
    SET_GPR_U32(ctx, 31, 0x132358u);
    ctx->pc = 0x132354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132350u;
    // 0x132354: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDE0u, 0x132350u, 0x132358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132358u;
label_132358:
    // 0x132358: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x132358u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x13235c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x13235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132360: 0xc043c48  jal         func_10F120
    ctx->pc = 0x132360u;
    SET_GPR_U32(ctx, 31, 0x132368u);
    ctx->pc = 0x132364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132360u;
    // 0x132364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F120u, 0x132360u, 0x132368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132368u;
label_132368:
    // 0x132368: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x132368u;
    {
        const bool branch_taken_0x132368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132368) {
            ctx->pc = 0x132390u;
            goto label_132390;
        }
    }
    ctx->pc = 0x132370u;
label_132370:
    // 0x132370: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x132370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x132374: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x132374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x132378: 0xa2230005  sb          $v1, 0x5($s1)
    ctx->pc = 0x132378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x13237c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x13237cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x132380: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132380u;
    {
        const bool branch_taken_0x132380 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x132380) {
            ctx->pc = 0x1323A0u;
            goto label_1323a0;
        }
    }
    ctx->pc = 0x132388u;
    // 0x132388: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x132388u;
    SET_GPR_U32(ctx, 31, 0x132390u);
    ctx->pc = 0x13238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132388u;
    // 0x13238c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x132388u, 0x132390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132390u;
label_132390:
    // 0x132390: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x132390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x132394: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x132394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x132398: 0xc043808  jal         func_10E020
    ctx->pc = 0x132398u;
    SET_GPR_U32(ctx, 31, 0x1323A0u);
    ctx->pc = 0x13239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132398u;
    // 0x13239c: 0x8e44019c  lw          $a0, 0x19C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x132398u, 0x1323A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323A0u;
label_1323a0:
    // 0x1323a0: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x1323a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1323a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1323a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1323a8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1323A8u;
    {
        const bool branch_taken_0x1323a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1323ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323A8u;
        // 0x1323ac: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1323a8) {
            ctx->pc = 0x1323C8u;
            goto label_1323c8;
        }
    }
    ctx->pc = 0x1323B0u;
    // 0x1323b0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1323B0u;
    {
        const bool branch_taken_0x1323b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1323b0) {
            ctx->pc = 0x1323C0u;
            goto label_1323c0;
        }
    }
    ctx->pc = 0x1323B8u;
    // 0x1323b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1323B8u;
    {
        const bool branch_taken_0x1323b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323b8) {
            ctx->pc = 0x1323D8u;
            goto label_1323d8;
        }
    }
    ctx->pc = 0x1323C0u;
label_1323c0:
    // 0x1323c0: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x1323c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1323c4: 0x0  nop
    ctx->pc = 0x1323c4u;
    // NOP
label_1323c8:
    // 0x1323c8: 0xc04378c  jal         func_10DE30
    ctx->pc = 0x1323C8u;
    SET_GPR_U32(ctx, 31, 0x1323D0u);
    ctx->pc = 0x1323CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323C8u;
    // 0x1323cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE30u, 0x1323C8u, 0x1323D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323D0u;
label_1323d0:
    // 0x1323d0: 0xc04377c  jal         func_10DDF0
    ctx->pc = 0x1323D0u;
    SET_GPR_U32(ctx, 31, 0x1323D8u);
    ctx->pc = 0x1323D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323D0u;
    // 0x1323d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDF0u, 0x1323D0u, 0x1323D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323D8u;
label_1323d8:
    // 0x1323d8: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1323d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1323dc: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x1323dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1323e0: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1323E0u;
    {
        const bool branch_taken_0x1323e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1323e0) {
            ctx->pc = 0x132320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132320;
        }
    }
    ctx->pc = 0x1323E8u;
    // 0x1323e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1323e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1323ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1323ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1323f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1323f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1323f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1323f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1323f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1323F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1323FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323F8u;
        // 0x1323fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1323F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132400u;
}
