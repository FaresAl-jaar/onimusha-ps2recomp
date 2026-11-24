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

// Function: sub_003B6600
// Address: 0x3b6600 - 0x3b66ec
void sub_003B6600_0x3b6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6600_0x3b6600");
#endif

    switch (ctx->pc) {
        case 0x3b6650u: goto label_3b6650;
        case 0x3b6678u: goto label_3b6678;
        case 0x3b66a0u: goto label_3b66a0;
        default: break;
    }

    ctx->pc = 0x3b6600u;

    // 0x3b6600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3b6604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3b6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3b6608: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b6608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b660c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b6610: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b6610u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6614: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b6614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b6618: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b6618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b661c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b661cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b6620: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b6620u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b6628: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b6628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b662c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3b662cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b6630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6634: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3b6634u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3b6638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b6638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b663c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b663cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6640: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3b6640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3b6644: 0x25086590  addiu       $t0, $t0, 0x6590
    ctx->pc = 0x3b6644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26000));
    // 0x3b6648: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3B6648u;
    SET_GPR_U32(ctx, 31, 0x3B6650u);
    ctx->pc = 0x3B664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6648u;
    // 0x3b664c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3B6648u, 0x3B6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6650u;
label_3b6650:
    // 0x3b6650: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6654: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B6654u;
    {
        const bool branch_taken_0x3b6654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6654u;
        // 0x3b6658: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6654) {
            ctx->pc = 0x3B66C0u;
            goto label_3b66c0;
        }
    }
    ctx->pc = 0x3B665Cu;
    // 0x3b665c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b665cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6660: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b6660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6664: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3b6664u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b666c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3b666cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3b6670: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3B6670u;
    SET_GPR_U32(ctx, 31, 0x3B6678u);
    ctx->pc = 0x3B6674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6670u;
    // 0x3b6674: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3B6670u, 0x3B6678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6678u;
label_3b6678:
    // 0x3b6678: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x3b6678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3b667c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b667cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b6680: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3b6680u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6688: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3b6688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b668c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6690: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3b6690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b6694: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3b6694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6698: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3B6698u;
    SET_GPR_U32(ctx, 31, 0x3B66A0u);
    ctx->pc = 0x3B669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6698u;
    // 0x3b669c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3B6698u, 0x3B66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66A0u;
label_3b66a0:
    // 0x3b66a0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3b66a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3b66a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b66a8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3b66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3b66ac: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3b66acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3b66b0: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x3b66b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b66b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B66B4u;
    {
        const bool branch_taken_0x3b66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66B4u;
        // 0x3b66b8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66b4) {
            ctx->pc = 0x3B66C8u;
            goto label_3b66c8;
        }
    }
    ctx->pc = 0x3B66BCu;
    // 0x3b66bc: 0x0  nop
    ctx->pc = 0x3b66bcu;
    // NOP
label_3b66c0:
    // 0x3b66c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b66c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b66c4: 0x0  nop
    ctx->pc = 0x3b66c4u;
    // NOP
label_3b66c8:
    // 0x3b66c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3b66c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b66cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b66ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b66d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b66d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b66d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b66d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b66d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b66d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b66dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b66dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b66e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b66e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b66e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B66E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B66E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66E4u;
        // 0x3b66e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B66E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B66ECu;
}
