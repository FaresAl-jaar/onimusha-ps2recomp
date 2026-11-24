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

// Function: sub_00216240
// Address: 0x216240 - 0x216310
void sub_00216240_0x216240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216240_0x216240");
#endif

    switch (ctx->pc) {
        case 0x216268u: goto label_216268;
        case 0x216278u: goto label_216278;
        case 0x216288u: goto label_216288;
        case 0x2162a4u: goto label_2162a4;
        case 0x2162b8u: goto label_2162b8;
        case 0x2162c8u: goto label_2162c8;
        case 0x2162e0u: goto label_2162e0;
        case 0x2162ecu: goto label_2162ec;
        default: break;
    }

    ctx->pc = 0x216240u;

    // 0x216240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216244: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x216244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x216248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21624c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21624cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216254: 0x26110d30  addiu       $s1, $s0, 0xD30
    ctx->pc = 0x216254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x216258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21625c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216260: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x216260u;
    SET_GPR_U32(ctx, 31, 0x216268u);
    ctx->pc = 0x216264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216260u;
    // 0x216264: 0x8e121fc0  lw          $s2, 0x1FC0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x216260u, 0x216268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216268u;
label_216268:
    // 0x216268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216268u;
    {
        const bool branch_taken_0x216268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216268u;
        // 0x21626c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216268) {
            ctx->pc = 0x216280u;
            goto label_216280;
        }
    }
    ctx->pc = 0x216270u;
    // 0x216270: 0xc0858c4  jal         func_216310
    ctx->pc = 0x216270u;
    SET_GPR_U32(ctx, 31, 0x216278u);
    ctx->pc = 0x216310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216310u, 0x216270u, 0x216278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216278u;
label_216278:
    // 0x216278: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x216278u;
    {
        const bool branch_taken_0x216278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216278u;
        // 0x21627c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216278) {
            ctx->pc = 0x216294u;
            goto label_216294;
        }
    }
    ctx->pc = 0x216280u;
label_216280:
    // 0x216280: 0xc0858dc  jal         func_216370
    ctx->pc = 0x216280u;
    SET_GPR_U32(ctx, 31, 0x216288u);
    ctx->pc = 0x216370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216370u, 0x216280u, 0x216288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216288u;
label_216288:
    // 0x216288: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x216288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21628c: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x21628Cu;
    {
        const bool branch_taken_0x21628c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x216290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21628Cu;
        // 0x216290: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21628c) {
            ctx->pc = 0x2162F8u;
            goto label_2162f8;
        }
    }
    ctx->pc = 0x216294u;
label_216294:
    // 0x216294: 0x58a0000f  blezl       $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x216294u;
    {
        const bool branch_taken_0x216294 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x216294) {
            ctx->pc = 0x216298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216294u;
            // 0x216298: 0x3c057fff  lui         $a1, 0x7FFF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2162D4u;
            goto label_2162d4;
        }
    }
    ctx->pc = 0x21629Cu;
    // 0x21629c: 0xc084170  jal         func_2105C0
    ctx->pc = 0x21629Cu;
    SET_GPR_U32(ctx, 31, 0x2162A4u);
    ctx->pc = 0x2162A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21629Cu;
    // 0x2162a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C0u, 0x21629Cu, 0x2162A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162A4u;
label_2162a4:
    // 0x2162a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2162a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2162a8: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2162ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2162acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2162b0: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x2162B0u;
    SET_GPR_U32(ctx, 31, 0x2162B8u);
    ctx->pc = 0x2162B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162B0u;
    // 0x2162b4: 0xae420088  sw          $v0, 0x88($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x2162B0u, 0x2162B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162B8u;
label_2162b8:
    // 0x2162b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2162B8u;
    {
        const bool branch_taken_0x2162b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162B8u;
        // 0x2162bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162b8) {
            ctx->pc = 0x2162D0u;
            goto label_2162d0;
        }
    }
    ctx->pc = 0x2162C0u;
    // 0x2162c0: 0xc086ec2  jal         func_21BB08
    ctx->pc = 0x2162C0u;
    SET_GPR_U32(ctx, 31, 0x2162C8u);
    ctx->pc = 0x21BB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BB08u, 0x2162C0u, 0x2162C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162C8u;
label_2162c8:
    // 0x2162c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2162c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2162cc: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x2162ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_2162d0:
    // 0x2162d0: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x2162d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
label_2162d4:
    // 0x2162d4: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x2162d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2162d8: 0xc08805a  jal         func_220168
    ctx->pc = 0x2162D8u;
    SET_GPR_U32(ctx, 31, 0x2162E0u);
    ctx->pc = 0x2162DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162D8u;
    // 0x2162dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x2162D8u, 0x2162E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162E0u;
label_2162e0:
    // 0x2162e0: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x2162e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2162e4: 0xc08805a  jal         func_220168
    ctx->pc = 0x2162E4u;
    SET_GPR_U32(ctx, 31, 0x2162ECu);
    ctx->pc = 0x2162E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2162E4u;
    // 0x2162e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x2162E4u, 0x2162ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2162ECu;
label_2162ec:
    // 0x2162ec: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2162ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2162f0: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x2162f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x2162f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2162f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2162f8:
    // 0x2162f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2162f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2162fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2162fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x216300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216304: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x216304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x216308: 0x3e00008  jr          $ra
    ctx->pc = 0x216308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216308u;
        // 0x21630c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216310u;
}
