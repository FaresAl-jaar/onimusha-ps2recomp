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

// Function: sub_003926A0
// Address: 0x3926a0 - 0x3927c4
void sub_003926A0_0x3926a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003926A0_0x3926a0");
#endif

    switch (ctx->pc) {
        case 0x3926e8u: goto label_3926e8;
        case 0x392708u: goto label_392708;
        case 0x39271cu: goto label_39271c;
        case 0x39272cu: goto label_39272c;
        case 0x392740u: goto label_392740;
        default: break;
    }

    ctx->pc = 0x3926a0u;

    // 0x3926a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3926a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3926a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3926a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3926a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3926a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3926ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3926acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3926b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3926b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3926b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3926b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3926b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3926b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3926bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3926bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3926c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3926c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3926c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3926c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3926c8: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x3926c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x3926cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3926ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3926d0: 0x26528f90  addiu       $s2, $s2, -0x7070
    ctx->pc = 0x3926d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938512));
    // 0x3926d4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3926d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3926d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3926d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3926dc: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x3926DCu;
    {
        const bool branch_taken_0x3926dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3926E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3926DCu;
        // 0x3926e0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3926dc) {
            ctx->pc = 0x3927A0u;
            goto label_3927a0;
        }
    }
    ctx->pc = 0x3926E4u;
    // 0x3926e4: 0x0  nop
    ctx->pc = 0x3926e4u;
    // NOP
label_3926e8:
    // 0x3926e8: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x3926e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x3926ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3926ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3926f0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3926F0u;
    {
        const bool branch_taken_0x3926f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3926f0) {
            ctx->pc = 0x392780u;
            goto label_392780;
        }
    }
    ctx->pc = 0x3926F8u;
    // 0x3926f8: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x3926f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x3926fc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x3926fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x392700: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x392700u;
    {
        const bool branch_taken_0x392700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x392704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392700u;
        // 0x392704: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392700) {
            ctx->pc = 0x392780u;
            goto label_392780;
        }
    }
    ctx->pc = 0x392708u;
label_392708:
    // 0x392708: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x392708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x39270c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x39270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x392710: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392714: 0xc0bcbdc  jal         func_2F2F70
    ctx->pc = 0x392714u;
    SET_GPR_U32(ctx, 31, 0x39271Cu);
    ctx->pc = 0x392718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392714u;
    // 0x392718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2F70u, 0x392714u, 0x39271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39271Cu;
label_39271c:
    // 0x39271c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39271Cu;
    {
        const bool branch_taken_0x39271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x392720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39271Cu;
        // 0x392720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39271c) {
            ctx->pc = 0x392768u;
            goto label_392768;
        }
    }
    ctx->pc = 0x392724u;
    // 0x392724: 0xc0e47b0  jal         func_391EC0
    ctx->pc = 0x392724u;
    SET_GPR_U32(ctx, 31, 0x39272Cu);
    ctx->pc = 0x391EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391EC0u, 0x392724u, 0x39272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39272Cu;
label_39272c:
    // 0x39272c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x39272Cu;
    {
        const bool branch_taken_0x39272c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x392730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39272Cu;
        // 0x392730: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39272c) {
            ctx->pc = 0x392768u;
            goto label_392768;
        }
    }
    ctx->pc = 0x392734u;
    // 0x392734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x392734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392738: 0xc0bd294  jal         func_2F4A50
    ctx->pc = 0x392738u;
    SET_GPR_U32(ctx, 31, 0x392740u);
    ctx->pc = 0x39273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392738u;
    // 0x39273c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A50u, 0x392738u, 0x392740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392740u;
label_392740:
    // 0x392740: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x392740u;
    {
        const bool branch_taken_0x392740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x392740) {
            ctx->pc = 0x392758u;
            goto label_392758;
        }
    }
    ctx->pc = 0x392748u;
    // 0x392748: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x392748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x39274c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39274cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392750: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x392750u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x392754: 0x0  nop
    ctx->pc = 0x392754u;
    // NOP
label_392758:
    // 0x392758: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x392758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39275c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392760: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x392760u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x392764: 0x0  nop
    ctx->pc = 0x392764u;
    // NOP
label_392768:
    // 0x392768: 0x96430006  lhu         $v1, 0x6($s2)
    ctx->pc = 0x392768u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x39276c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x39276cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x392770: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x392770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x392774: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x392774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x392778: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x392778u;
    {
        const bool branch_taken_0x392778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392778u;
        // 0x39277c: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392778) {
            ctx->pc = 0x392708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_392708;
        }
    }
    ctx->pc = 0x392780u;
label_392780:
    // 0x392780: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x392780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x392784: 0x152042  srl         $a0, $s5, 1
    ctx->pc = 0x392784u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x392788: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x392788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x39278c: 0x24630100  addiu       $v1, $v1, 0x100
    ctx->pc = 0x39278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x392790: 0x3095ffff  andi        $s5, $a0, 0xFFFF
    ctx->pc = 0x392790u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x392794: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x392794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x392798: 0x16a0ffd3  bnez        $s5, . + 4 + (-0x2D << 2)
    ctx->pc = 0x392798u;
    {
        const bool branch_taken_0x392798 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x39279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392798u;
        // 0x39279c: 0x3071ffff  andi        $s1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392798) {
            ctx->pc = 0x3926E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3926e8;
        }
    }
    ctx->pc = 0x3927A0u;
label_3927a0:
    // 0x3927a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3927a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3927a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3927a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3927a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3927a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3927ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3927acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3927b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3927b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3927b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3927b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3927b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3927b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3927bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3927BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3927C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3927BCu;
        // 0x3927c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3927BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3927C4u;
}
