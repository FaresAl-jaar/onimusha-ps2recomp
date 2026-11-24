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

// Function: sub_00114A78
// Address: 0x114a78 - 0x114ba4
void sub_00114A78_0x114a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114A78_0x114a78");
#endif

    switch (ctx->pc) {
        case 0x114aa4u: goto label_114aa4;
        case 0x114abcu: goto label_114abc;
        case 0x114ae0u: goto label_114ae0;
        case 0x114b30u: goto label_114b30;
        case 0x114b40u: goto label_114b40;
        case 0x114b48u: goto label_114b48;
        case 0x114b5cu: goto label_114b5c;
        case 0x114b6cu: goto label_114b6c;
        case 0x114b7cu: goto label_114b7c;
        case 0x114b84u: goto label_114b84;
        default: break;
    }

    ctx->pc = 0x114a78u;

    // 0x114a78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x114a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x114a7c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x114a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x114a80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x114a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114a84: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x114a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x114a88: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x114a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x114a8c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x114a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x114a90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x114a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x114a94: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x114a94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x114a98: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x114a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x114a9c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x114A9Cu;
    SET_GPR_U32(ctx, 31, 0x114AA4u);
    ctx->pc = 0x114AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114A9Cu;
    // 0x114aa0: 0x2670ec80  addiu       $s0, $s3, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x114A9Cu, 0x114AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AA4u;
label_114aa4:
    // 0x114aa4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x114aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x114aa8: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x114aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x114aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114AACu;
    {
        const bool branch_taken_0x114aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114AACu;
        // 0x114ab0: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114aac) {
            ctx->pc = 0x114AC0u;
            goto label_114ac0;
        }
    }
    ctx->pc = 0x114AB4u;
    // 0x114ab4: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x114AB4u;
    SET_GPR_U32(ctx, 31, 0x114ABCu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x114AB4u, 0x114ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114ABCu;
label_114abc:
    // 0x114abc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x114abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_114ac0:
    // 0x114ac0: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x114ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x114ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x114ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114ac8: 0x24422810  addiu       $v0, $v0, 0x2810
    ctx->pc = 0x114ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10256));
    // 0x114acc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x114accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x114ad0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x114ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x114ad4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x114ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x114ad8: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x114AD8u;
    SET_GPR_U32(ctx, 31, 0x114AE0u);
    ctx->pc = 0x114ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114AD8u;
    // 0x114adc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x114AD8u, 0x114AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114AE0u;
label_114ae0:
    // 0x114ae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x114ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ae4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x114ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x114ae8: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x114ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x114aec: 0xae71ec80  sw          $s1, -0x1380($s3)
    ctx->pc = 0x114aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962304), GPR_U32(ctx, 17));
    // 0x114af0: 0x2452f8c0  addiu       $s2, $v0, -0x740
    ctx->pc = 0x114af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x114af4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x114af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x114af8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114afc: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x114afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x114b00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x114b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x114b04: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x114b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x114b08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x114b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x114b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x114b10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x114b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x114b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x114b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x114b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x114b1c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x114b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x114b20: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x114b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b24: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x114b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114b28: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x114B28u;
    SET_GPR_U32(ctx, 31, 0x114B30u);
    ctx->pc = 0x114B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B28u;
    // 0x114b2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x114B28u, 0x114B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B30u;
label_114b30:
    // 0x114b30: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114B30u;
    {
        const bool branch_taken_0x114b30 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x114B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B30u;
        // 0x114b34: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b30) {
            ctx->pc = 0x114B50u;
            goto label_114b50;
        }
    }
    ctx->pc = 0x114B38u;
    // 0x114b38: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114B38u;
    SET_GPR_U32(ctx, 31, 0x114B40u);
    ctx->pc = 0x114B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B38u;
    // 0x114b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114B38u, 0x114B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B40u;
label_114b40:
    // 0x114b40: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114B40u;
    SET_GPR_U32(ctx, 31, 0x114B48u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114B40u, 0x114B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B48u;
label_114b48:
    // 0x114b48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x114B48u;
    {
        const bool branch_taken_0x114b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B48u;
        // 0x114b4c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b48) {
            ctx->pc = 0x114B88u;
            goto label_114b88;
        }
    }
    ctx->pc = 0x114B50u;
label_114b50:
    // 0x114b50: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x114b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x114b54: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x114B54u;
    SET_GPR_U32(ctx, 31, 0x114B5Cu);
    ctx->pc = 0x114B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B54u;
    // 0x114b58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x114B54u, 0x114B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B5Cu;
label_114b5c:
    // 0x114b5c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114B5Cu;
    {
        const bool branch_taken_0x114b5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x114b5c) {
            ctx->pc = 0x114B74u;
            goto label_114b74;
        }
    }
    ctx->pc = 0x114B64u;
    // 0x114b64: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114B64u;
    SET_GPR_U32(ctx, 31, 0x114B6Cu);
    ctx->pc = 0x114B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B64u;
    // 0x114b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114B64u, 0x114B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B6Cu;
label_114b6c:
    // 0x114b6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x114B6Cu;
    {
        const bool branch_taken_0x114b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B6Cu;
        // 0x114b70: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b6c) {
            ctx->pc = 0x114B88u;
            goto label_114b88;
        }
    }
    ctx->pc = 0x114B74u;
label_114b74:
    // 0x114b74: 0xc043808  jal         func_10E020
    ctx->pc = 0x114B74u;
    SET_GPR_U32(ctx, 31, 0x114B7Cu);
    ctx->pc = 0x114B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B74u;
    // 0x114b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x114B74u, 0x114B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B7Cu;
label_114b7c:
    // 0x114b7c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x114B7Cu;
    SET_GPR_U32(ctx, 31, 0x114B84u);
    ctx->pc = 0x114B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B7Cu;
    // 0x114b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x114B7Cu, 0x114B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114B84u;
label_114b84:
    // 0x114b84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x114b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_114b88:
    // 0x114b88: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x114b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114b8c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x114b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x114b90: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x114b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114b94: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x114b94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114b98: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x114b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x114B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B9Cu;
        // 0x114ba0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114BA4u;
}
