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

// Function: sub_00255970
// Address: 0x255970 - 0x255a84
void sub_00255970_0x255970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255970_0x255970");
#endif

    switch (ctx->pc) {
        case 0x2559acu: goto label_2559ac;
        case 0x2559c8u: goto label_2559c8;
        case 0x2559ecu: goto label_2559ec;
        case 0x2559fcu: goto label_2559fc;
        case 0x255a0cu: goto label_255a0c;
        case 0x255a30u: goto label_255a30;
        case 0x255a60u: goto label_255a60;
        default: break;
    }

    ctx->pc = 0x255970u;

    // 0x255970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x255970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x255974: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x255974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x255978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x255978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x25597c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25597cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x255980: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x255980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255984: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x255984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x255988: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x255988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25598c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x255990: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x255990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255994: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x255994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x255998: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x255998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25599c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25599cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2559a0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2559a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559a4: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x2559A4u;
    SET_GPR_U32(ctx, 31, 0x2559ACu);
    ctx->pc = 0x2559A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559A4u;
    // 0x2559a8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x2559A4u, 0x2559ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559ACu;
label_2559ac:
    // 0x2559ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2559acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2559b0: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2559B0u;
    {
        const bool branch_taken_0x2559b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x2559B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559B0u;
        // 0x2559b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559b0) {
            ctx->pc = 0x2559C0u;
            goto label_2559c0;
        }
    }
    ctx->pc = 0x2559B8u;
    // 0x2559b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2559B8u;
    {
        const bool branch_taken_0x2559b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2559b8) {
            ctx->pc = 0x255A60u;
            goto label_255a60;
        }
    }
    ctx->pc = 0x2559C0u;
label_2559c0:
    // 0x2559c0: 0xc09564c  jal         func_255930
    ctx->pc = 0x2559C0u;
    SET_GPR_U32(ctx, 31, 0x2559C8u);
    ctx->pc = 0x2559C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559C0u;
    // 0x2559c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255930u, 0x2559C0u, 0x2559C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559C8u;
label_2559c8:
    // 0x2559c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2559C8u;
    {
        const bool branch_taken_0x2559c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2559c8) {
            ctx->pc = 0x2559D8u;
            goto label_2559d8;
        }
    }
    ctx->pc = 0x2559D0u;
    // 0x2559d0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2559D0u;
    {
        const bool branch_taken_0x2559d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2559D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559D0u;
        // 0x2559d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559d0) {
            ctx->pc = 0x255A60u;
            goto label_255a60;
        }
    }
    ctx->pc = 0x2559D8u;
label_2559d8:
    // 0x2559d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2559d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2559dc: 0x1262000e  beq         $s3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2559DCu;
    {
        const bool branch_taken_0x2559dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2559E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2559DCu;
        // 0x2559e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2559dc) {
            ctx->pc = 0x255A18u;
            goto label_255a18;
        }
    }
    ctx->pc = 0x2559E4u;
    // 0x2559e4: 0xc0957f4  jal         func_255FD0
    ctx->pc = 0x2559E4u;
    SET_GPR_U32(ctx, 31, 0x2559ECu);
    ctx->pc = 0x2559E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559E4u;
    // 0x2559e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255FD0u, 0x2559E4u, 0x2559ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559ECu;
label_2559ec:
    // 0x2559ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2559ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2559f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2559f4: 0xc0957f4  jal         func_255FD0
    ctx->pc = 0x2559F4u;
    SET_GPR_U32(ctx, 31, 0x2559FCu);
    ctx->pc = 0x2559F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2559F4u;
    // 0x2559f8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255FD0u, 0x2559F4u, 0x2559FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2559FCu;
label_2559fc:
    // 0x2559fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2559fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a04: 0xc095d9c  jal         func_257670
    ctx->pc = 0x255A04u;
    SET_GPR_U32(ctx, 31, 0x255A0Cu);
    ctx->pc = 0x255A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A04u;
    // 0x255a08: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257670u, 0x255A04u, 0x255A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A0Cu;
label_255a0c:
    // 0x255a0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x255A0Cu;
    {
        const bool branch_taken_0x255a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A0Cu;
        // 0x255a10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a0c) {
            ctx->pc = 0x255A38u;
            goto label_255a38;
        }
    }
    ctx->pc = 0x255A14u;
    // 0x255a14: 0x0  nop
    ctx->pc = 0x255a14u;
    // NOP
label_255a18:
    // 0x255a18: 0x141602  srl         $v0, $s4, 24
    ctx->pc = 0x255a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 24));
    // 0x255a1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x255a1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x255a20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a24: 0x141402  srl         $v0, $s4, 16
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 16));
    // 0x255a28: 0xc0957e0  jal         func_255F80
    ctx->pc = 0x255A28u;
    SET_GPR_U32(ctx, 31, 0x255A30u);
    ctx->pc = 0x255A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A28u;
    // 0x255a2c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x255F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255F80u, 0x255A28u, 0x255A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A30u;
label_255a30:
    // 0x255a30: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x255a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x255a34: 0x0  nop
    ctx->pc = 0x255a34u;
    // NOP
label_255a38:
    // 0x255a38: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x255a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x255a3c: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x255a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x255a40: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x255a40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x255a44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x255a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a48: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x255a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a4c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x255a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x255a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x255a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a58: 0xc0956a4  jal         func_255A90
    ctx->pc = 0x255A58u;
    SET_GPR_U32(ctx, 31, 0x255A60u);
    ctx->pc = 0x255A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A58u;
    // 0x255a5c: 0xac740004  sw          $s4, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255A90u, 0x255A58u, 0x255A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A60u;
label_255a60:
    // 0x255a60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x255a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255a64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x255a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255a68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x255a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255a6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x255a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255a70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x255a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x255a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x255A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A7Cu;
        // 0x255a80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255A84u;
}
