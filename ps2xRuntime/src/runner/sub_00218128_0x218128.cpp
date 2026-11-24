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

// Function: sub_00218128
// Address: 0x218128 - 0x218218
void sub_00218128_0x218128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218128_0x218128");
#endif

    switch (ctx->pc) {
        case 0x218160u: goto label_218160;
        case 0x218174u: goto label_218174;
        case 0x218184u: goto label_218184;
        case 0x218198u: goto label_218198;
        case 0x2181b4u: goto label_2181b4;
        case 0x2181c4u: goto label_2181c4;
        case 0x2181ecu: goto label_2181ec;
        default: break;
    }

    ctx->pc = 0x218128u;

    // 0x218128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21812c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218130: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x218130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x218134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x218138: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x218138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21813c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x218140: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x218140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x218144: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x218144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x218148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x218148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21814c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x218150: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x218150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x218154: 0x8e551fc0  lw          $s5, 0x1FC0($s2)
    ctx->pc = 0x218154u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x218158: 0xc086086  jal         func_218218
    ctx->pc = 0x218158u;
    SET_GPR_U32(ctx, 31, 0x218160u);
    ctx->pc = 0x21815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218158u;
    // 0x21815c: 0x8eb10000  lw          $s1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218218u, 0x218158u, 0x218160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218160u;
label_218160:
    // 0x218160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218164: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x218164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21816c: 0xc0944ce  jal         func_251338
    ctx->pc = 0x21816Cu;
    SET_GPR_U32(ctx, 31, 0x218174u);
    ctx->pc = 0x218170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21816Cu;
    // 0x218170: 0x26b6008c  addiu       $s6, $s5, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x21816Cu, 0x218174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218174u;
label_218174:
    // 0x218174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x218174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218178: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x218178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21817c: 0xc07fa9c  jal         func_1FEA70
    ctx->pc = 0x21817Cu;
    SET_GPR_U32(ctx, 31, 0x218184u);
    ctx->pc = 0x218180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21817Cu;
    // 0x218180: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEA70u, 0x21817Cu, 0x218184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218184u;
label_218184:
    // 0x218184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218188: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x218188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21818c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x21818cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218190: 0xc0944ce  jal         func_251338
    ctx->pc = 0x218190u;
    SET_GPR_U32(ctx, 31, 0x218198u);
    ctx->pc = 0x218194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218190u;
    // 0x218194: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251338u, 0x218190u, 0x218198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218198u;
label_218198:
    // 0x218198: 0x548823  subu        $s1, $v0, $s4
    ctx->pc = 0x218198u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x21819c: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x21819cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x2181a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2181a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2181a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2181a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181ac: 0xc085960  jal         func_216580
    ctx->pc = 0x2181ACu;
    SET_GPR_U32(ctx, 31, 0x2181B4u);
    ctx->pc = 0x2181B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181ACu;
    // 0x2181b0: 0x34e70f07  ori         $a3, $a3, 0xF07 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3847);
    ctx->in_delay_slot = false;
    ctx->pc = 0x216580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216580u, 0x2181ACu, 0x2181B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181B4u;
label_2181b4:
    // 0x2181b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2181b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2181b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181bc: 0xc085936  jal         func_2164D8
    ctx->pc = 0x2181BCu;
    SET_GPR_U32(ctx, 31, 0x2181C4u);
    ctx->pc = 0x2181C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181BCu;
    // 0x2181c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2164D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2164D8u, 0x2181BCu, 0x2181C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181C4u;
label_2181c4:
    // 0x2181c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2181c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2181c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2181cc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2181CCu;
    {
        const bool branch_taken_0x2181cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2181D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181CCu;
        // 0x2181d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181cc) {
            ctx->pc = 0x2181F0u;
            goto label_2181f0;
        }
    }
    ctx->pc = 0x2181D4u;
    // 0x2181d4: 0x82c20058  lb          $v0, 0x58($s6)
    ctx->pc = 0x2181d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 88)));
    // 0x2181d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2181D8u;
    {
        const bool branch_taken_0x2181d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2181DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181D8u;
        // 0x2181dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2181d8) {
            ctx->pc = 0x2181E4u;
            goto label_2181e4;
        }
    }
    ctx->pc = 0x2181E0u;
    // 0x2181e0: 0xaea2016c  sw          $v0, 0x16C($s5)
    ctx->pc = 0x2181e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 364), GPR_U32(ctx, 2));
label_2181e4:
    // 0x2181e4: 0xc087604  jal         func_21D810
    ctx->pc = 0x2181E4u;
    SET_GPR_U32(ctx, 31, 0x2181ECu);
    ctx->pc = 0x2181E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181E4u;
    // 0x2181e8: 0x8ec60018  lw          $a2, 0x18($s6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D810u, 0x2181E4u, 0x2181ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181ECu;
label_2181ec:
    // 0x2181ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2181ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2181f0:
    // 0x2181f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2181f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2181f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2181f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2181f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2181fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2181fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x218200: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x218200u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218204: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x218204u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x218208: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x218208u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21820c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x21820cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218210: 0x3e00008  jr          $ra
    ctx->pc = 0x218210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218210u;
        // 0x218214: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218218u;
}
