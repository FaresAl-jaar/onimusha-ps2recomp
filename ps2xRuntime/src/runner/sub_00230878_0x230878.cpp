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

// Function: sub_00230878
// Address: 0x230878 - 0x230978
void sub_00230878_0x230878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230878_0x230878");
#endif

    switch (ctx->pc) {
        case 0x2308a0u: goto label_2308a0;
        case 0x2308b4u: goto label_2308b4;
        case 0x2308bcu: goto label_2308bc;
        case 0x230908u: goto label_230908;
        case 0x230914u: goto label_230914;
        case 0x230920u: goto label_230920;
        case 0x230938u: goto label_230938;
        case 0x230944u: goto label_230944;
        case 0x230950u: goto label_230950;
        case 0x23095cu: goto label_23095c;
        default: break;
    }

    ctx->pc = 0x230878u;

    // 0x230878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23087c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230888: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23088c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230890: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x230890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230894: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230898: 0xc08dd84  jal         func_237610
    ctx->pc = 0x230898u;
    SET_GPR_U32(ctx, 31, 0x2308A0u);
    ctx->pc = 0x23089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230898u;
    // 0x23089c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237610u, 0x230898u, 0x2308A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308A0u;
label_2308a0:
    // 0x2308a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2308a4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2308A4u;
    {
        const bool branch_taken_0x2308a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2308a4) {
            ctx->pc = 0x2308B4u;
            goto label_2308b4;
        }
    }
    ctx->pc = 0x2308ACu;
    // 0x2308ac: 0xc08de38  jal         func_2378E0
    ctx->pc = 0x2308ACu;
    SET_GPR_U32(ctx, 31, 0x2308B4u);
    ctx->pc = 0x2308B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308ACu;
    // 0x2308b0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2378E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2378E0u, 0x2308ACu, 0x2308B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308B4u;
label_2308b4:
    // 0x2308b4: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x2308B4u;
    SET_GPR_U32(ctx, 31, 0x2308BCu);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x2308B4u, 0x2308BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308BCu;
label_2308bc:
    // 0x2308bc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2308c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2308c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2308c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2308c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2308c8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2308c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2308cc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2308ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2308d0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2308d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2308d4: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x2308d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2308d8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2308dc: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x2308dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x2308e0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2308e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2308e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2308E4u;
    {
        const bool branch_taken_0x2308e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2308E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E4u;
        // 0x2308e8: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308e4) {
            ctx->pc = 0x230900u;
            goto label_230900;
        }
    }
    ctx->pc = 0x2308ECu;
    // 0x2308ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2308f0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2308f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2308f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2308F4u;
    {
        const bool branch_taken_0x2308f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308F4u;
        // 0x2308f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308f4) {
            ctx->pc = 0x230954u;
            goto label_230954;
        }
    }
    ctx->pc = 0x2308FCu;
    // 0x2308fc: 0x0  nop
    ctx->pc = 0x2308fcu;
    // NOP
label_230900:
    // 0x230900: 0xc08de70  jal         func_2379C0
    ctx->pc = 0x230900u;
    SET_GPR_U32(ctx, 31, 0x230908u);
    ctx->pc = 0x230904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230900u;
    // 0x230904: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379C0u, 0x230900u, 0x230908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230908u;
label_230908:
    // 0x230908: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23090c: 0xc08e1dc  jal         func_238770
    ctx->pc = 0x23090Cu;
    SET_GPR_U32(ctx, 31, 0x230914u);
    ctx->pc = 0x230910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23090Cu;
    // 0x230910: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238770u, 0x23090Cu, 0x230914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230914u;
label_230914:
    // 0x230914: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230918: 0xc08e0e0  jal         func_238380
    ctx->pc = 0x230918u;
    SET_GPR_U32(ctx, 31, 0x230920u);
    ctx->pc = 0x23091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230918u;
    // 0x23091c: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238380u, 0x230918u, 0x230920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230920u;
label_230920:
    // 0x230920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230924: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x230924u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x230928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23092c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230930: 0xc08e164  jal         func_238590
    ctx->pc = 0x230930u;
    SET_GPR_U32(ctx, 31, 0x230938u);
    ctx->pc = 0x230934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230930u;
    // 0x230934: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238590u, 0x230930u, 0x230938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230938u;
label_230938:
    // 0x230938: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23093c: 0xc08dd94  jal         func_237650
    ctx->pc = 0x23093Cu;
    SET_GPR_U32(ctx, 31, 0x230944u);
    ctx->pc = 0x230940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23093Cu;
    // 0x230940: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x23093Cu, 0x230944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230944u;
label_230944:
    // 0x230944: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x230948: 0xc08ddee  jal         func_2377B8
    ctx->pc = 0x230948u;
    SET_GPR_U32(ctx, 31, 0x230950u);
    ctx->pc = 0x23094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230948u;
    // 0x23094c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2377B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2377B8u, 0x230948u, 0x230950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230950u;
label_230950:
    // 0x230950: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_230954:
    // 0x230954: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x230954u;
    SET_GPR_U32(ctx, 31, 0x23095Cu);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x230954u, 0x23095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23095Cu;
label_23095c:
    // 0x23095c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23095cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230968: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230968u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23096c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23096cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230970: 0x3e00008  jr          $ra
    ctx->pc = 0x230970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230970u;
        // 0x230974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230978u;
}
