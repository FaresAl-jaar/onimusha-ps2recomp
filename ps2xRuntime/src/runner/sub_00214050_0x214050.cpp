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

// Function: sub_00214050
// Address: 0x214050 - 0x214144
void sub_00214050_0x214050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214050_0x214050");
#endif

    switch (ctx->pc) {
        case 0x214070u: goto label_214070;
        case 0x214080u: goto label_214080;
        case 0x214090u: goto label_214090;
        case 0x2140acu: goto label_2140ac;
        case 0x2140c0u: goto label_2140c0;
        case 0x2140ccu: goto label_2140cc;
        case 0x2140dcu: goto label_2140dc;
        case 0x2140ecu: goto label_2140ec;
        case 0x21410cu: goto label_21410c;
        default: break;
    }

    ctx->pc = 0x214050u;

    // 0x214050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214054: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x214058: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21405c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21405cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214068: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x214068u;
    SET_GPR_U32(ctx, 31, 0x214070u);
    ctx->pc = 0x21406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214068u;
    // 0x21406c: 0x8e111f7c  lw          $s1, 0x1F7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x214068u, 0x214070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214070u;
label_214070:
    // 0x214070: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x214070u;
    {
        const bool branch_taken_0x214070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214070u;
        // 0x214074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214070) {
            ctx->pc = 0x2140C0u;
            goto label_2140c0;
        }
    }
    ctx->pc = 0x214078u;
    // 0x214078: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x214078u;
    SET_GPR_U32(ctx, 31, 0x214080u);
    ctx->pc = 0x21407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214078u;
    // 0x21407c: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x214078u, 0x214080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214080u;
label_214080:
    // 0x214080: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x214080u;
    {
        const bool branch_taken_0x214080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214080u;
        // 0x214084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214080) {
            ctx->pc = 0x2140C0u;
            goto label_2140c0;
        }
    }
    ctx->pc = 0x214088u;
    // 0x214088: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x214088u;
    SET_GPR_U32(ctx, 31, 0x214090u);
    ctx->pc = 0x21408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214088u;
    // 0x21408c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x214088u, 0x214090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214090u;
label_214090:
    // 0x214090: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x214090u;
    {
        const bool branch_taken_0x214090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214090u;
        // 0x214094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214090) {
            ctx->pc = 0x2140C4u;
            goto label_2140c4;
        }
    }
    ctx->pc = 0x214098u;
    // 0x214098: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x214098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21409c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21409Cu;
    {
        const bool branch_taken_0x21409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21409c) {
            ctx->pc = 0x2140C4u;
            goto label_2140c4;
        }
    }
    ctx->pc = 0x2140A4u;
    // 0x2140a4: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x2140A4u;
    SET_GPR_U32(ctx, 31, 0x2140ACu);
    ctx->pc = 0x2140A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140A4u;
    // 0x2140a8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x2140A4u, 0x2140ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140ACu;
label_2140ac:
    // 0x2140ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2140ACu;
    {
        const bool branch_taken_0x2140ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140ACu;
        // 0x2140b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140ac) {
            ctx->pc = 0x2140C0u;
            goto label_2140c0;
        }
    }
    ctx->pc = 0x2140B4u;
    // 0x2140b4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2140b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2140b8: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x2140B8u;
    SET_GPR_U32(ctx, 31, 0x2140C0u);
    ctx->pc = 0x2140BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140B8u;
    // 0x2140bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x2140B8u, 0x2140C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140C0u;
label_2140c0:
    // 0x2140c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2140c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2140c4:
    // 0x2140c4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2140C4u;
    SET_GPR_U32(ctx, 31, 0x2140CCu);
    ctx->pc = 0x2140C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140C4u;
    // 0x2140c8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2140C4u, 0x2140CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140CCu;
label_2140cc:
    // 0x2140cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2140CCu;
    {
        const bool branch_taken_0x2140cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140CCu;
        // 0x2140d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140cc) {
            ctx->pc = 0x214130u;
            goto label_214130;
        }
    }
    ctx->pc = 0x2140D4u;
    // 0x2140d4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2140D4u;
    SET_GPR_U32(ctx, 31, 0x2140DCu);
    ctx->pc = 0x2140D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140D4u;
    // 0x2140d8: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2140D4u, 0x2140DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140DCu;
label_2140dc:
    // 0x2140dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2140DCu;
    {
        const bool branch_taken_0x2140dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2140E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140DCu;
        // 0x2140e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2140dc) {
            ctx->pc = 0x214130u;
            goto label_214130;
        }
    }
    ctx->pc = 0x2140E4u;
    // 0x2140e4: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x2140E4u;
    SET_GPR_U32(ctx, 31, 0x2140ECu);
    ctx->pc = 0x2140E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140E4u;
    // 0x2140e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x2140E4u, 0x2140ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140ECu;
label_2140ec:
    // 0x2140ec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2140ECu;
    {
        const bool branch_taken_0x2140ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2140ec) {
            ctx->pc = 0x2140F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2140ECu;
            // 0x2140f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214134u;
            goto label_214134;
        }
    }
    ctx->pc = 0x2140F4u;
    // 0x2140f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2140f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2140f8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2140F8u;
    {
        const bool branch_taken_0x2140f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2140f8) {
            ctx->pc = 0x2140FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2140F8u;
            // 0x2140fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214134u;
            goto label_214134;
        }
    }
    ctx->pc = 0x214100u;
    // 0x214100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214104: 0xc0888f0  jal         func_2223C0
    ctx->pc = 0x214104u;
    SET_GPR_U32(ctx, 31, 0x21410Cu);
    ctx->pc = 0x214108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214104u;
    // 0x214108: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223C0u, 0x214104u, 0x21410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21410Cu;
label_21410c:
    // 0x21410c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21410Cu;
    {
        const bool branch_taken_0x21410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21410Cu;
        // 0x214110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21410c) {
            ctx->pc = 0x214130u;
            goto label_214130;
        }
    }
    ctx->pc = 0x214114u;
    // 0x214114: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214118: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214118u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21411c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x21411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x214120: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x214124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214128: 0x8087e5e  j           func_21F978
    ctx->pc = 0x214128u;
    ctx->pc = 0x21412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214128u;
    // 0x21412c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    sub_0021F978_0x21f978(rdram, ctx, runtime); return;
    ctx->pc = 0x214130u;
label_214130:
    // 0x214130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214134:
    // 0x214134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21413c: 0x3e00008  jr          $ra
    ctx->pc = 0x21413Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21413Cu;
        // 0x214140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21413Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214144u;
}
