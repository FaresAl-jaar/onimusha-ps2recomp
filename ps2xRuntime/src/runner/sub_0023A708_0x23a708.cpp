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

// Function: sub_0023A708
// Address: 0x23a708 - 0x23a81c
void sub_0023A708_0x23a708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A708_0x23a708");
#endif

    switch (ctx->pc) {
        case 0x23a770u: goto label_23a770;
        case 0x23a7a8u: goto label_23a7a8;
        case 0x23a7ecu: goto label_23a7ec;
        case 0x23a800u: goto label_23a800;
        default: break;
    }

    ctx->pc = 0x23a708u;

    // 0x23a708: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23a718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a71c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23a71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23a720: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23a720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a728: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23A728u;
    {
        const bool branch_taken_0x23a728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A728u;
        // 0x23a72c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a728) {
            ctx->pc = 0x23A758u;
            goto label_23a758;
        }
    }
    ctx->pc = 0x23A730u;
    // 0x23a730: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23a734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a73c: 0x2484b1e8  addiu       $a0, $a0, -0x4E18
    ctx->pc = 0x23a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947304));
    // 0x23a740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a744: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a74c: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23A74Cu;
    ctx->pc = 0x23A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A74Cu;
    // 0x23a750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23A754u;
    // 0x23a754: 0x0  nop
    ctx->pc = 0x23a754u;
    // NOP
label_23a758:
    // 0x23a758: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x23a758u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x23a75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a760: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A760u;
    {
        const bool branch_taken_0x23a760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A760u;
        // 0x23a764: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a760) {
            ctx->pc = 0x23A784u;
            goto label_23a784;
        }
    }
    ctx->pc = 0x23A768u;
    // 0x23a768: 0xc08db72  jal         func_236DC8
    ctx->pc = 0x23A768u;
    SET_GPR_U32(ctx, 31, 0x23A770u);
    ctx->pc = 0x23A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A768u;
    // 0x23a76c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236DC8u, 0x23A768u, 0x23A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A770u;
label_23a770:
    // 0x23a770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23a770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a774: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x23a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x23a778: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A778u;
    {
        const bool branch_taken_0x23a778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A778u;
        // 0x23a77c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a778) {
            ctx->pc = 0x23A788u;
            goto label_23a788;
        }
    }
    ctx->pc = 0x23A780u;
    // 0x23a780: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a784:
    // 0x23a784: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_23a788:
    // 0x23a788: 0x8c62ef78  lw          $v0, -0x1088($v1)
    ctx->pc = 0x23a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963064)));
    // 0x23a78c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23A78Cu;
    {
        const bool branch_taken_0x23a78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A78Cu;
        // 0x23a790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a78c) {
            ctx->pc = 0x23A7C4u;
            goto label_23a7c4;
        }
    }
    ctx->pc = 0x23A794u;
    // 0x23a794: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x23a798: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A798u;
    {
        const bool branch_taken_0x23a798 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a798) {
            ctx->pc = 0x23A79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A798u;
            // 0x23a79c: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A7C4u;
            goto label_23a7c4;
        }
    }
    ctx->pc = 0x23A7A0u;
    // 0x23a7a0: 0xc08db08  jal         func_236C20
    ctx->pc = 0x23A7A0u;
    SET_GPR_U32(ctx, 31, 0x23A7A8u);
    ctx->pc = 0x23A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7A0u;
    // 0x23a7a4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C20u, 0x23A7A0u, 0x23A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7A8u;
label_23a7a8:
    // 0x23a7a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23a7ac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A7ACu;
    {
        const bool branch_taken_0x23a7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23a7ac) {
            ctx->pc = 0x23A7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A7ACu;
            // 0x23a7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A7C0u;
            goto label_23a7c0;
        }
    }
    ctx->pc = 0x23A7B4u;
    // 0x23a7b4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23a7b8: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x23a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x23a7bc: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x23a7bcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_23a7c0:
    // 0x23a7c0: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_23a7c4:
    // 0x23a7c4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x23a7c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x23a7cc: 0xa4530042  sh          $s3, 0x42($v0)
    ctx->pc = 0x23a7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x23a7d0: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x23a7d4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x23a7d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23a7d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23A7D8u;
    {
        const bool branch_taken_0x23a7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7D8u;
        // 0x23a7dc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7d8) {
            ctx->pc = 0x23A7F8u;
            goto label_23a7f8;
        }
    }
    ctx->pc = 0x23A7E0u;
    // 0x23a7e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x23a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x23a7e4: 0xc08d59c  jal         func_235670
    ctx->pc = 0x23A7E4u;
    SET_GPR_U32(ctx, 31, 0x23A7ECu);
    ctx->pc = 0x23A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7E4u;
    // 0x23a7e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235670u, 0x23A7E4u, 0x23A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7ECu;
label_23a7ec:
    // 0x23a7ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A7ECu;
    {
        const bool branch_taken_0x23a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7ECu;
        // 0x23a7f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7ec) {
            ctx->pc = 0x23A804u;
            goto label_23a804;
        }
    }
    ctx->pc = 0x23A7F4u;
    // 0x23a7f4: 0x0  nop
    ctx->pc = 0x23a7f4u;
    // NOP
label_23a7f8:
    // 0x23a7f8: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x23A7F8u;
    SET_GPR_U32(ctx, 31, 0x23A800u);
    ctx->pc = 0x23A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7F8u;
    // 0x23a7fc: 0x2484b218  addiu       $a0, $a0, -0x4DE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23A7F8u, 0x23A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A800u;
label_23a800:
    // 0x23a800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a804:
    // 0x23a804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a808: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a80c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a80cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a814: 0x3e00008  jr          $ra
    ctx->pc = 0x23A814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A814u;
        // 0x23a818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A81Cu;
}
