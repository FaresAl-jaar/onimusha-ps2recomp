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

// Function: sub_002F60B0
// Address: 0x2f60b0 - 0x2f618c
void sub_002F60B0_0x2f60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F60B0_0x2f60b0");
#endif

    switch (ctx->pc) {
        case 0x2f60d4u: goto label_2f60d4;
        case 0x2f6148u: goto label_2f6148;
        case 0x2f6150u: goto label_2f6150;
        case 0x2f6164u: goto label_2f6164;
        case 0x2f6178u: goto label_2f6178;
        default: break;
    }

    ctx->pc = 0x2f60b0u;

    // 0x2f60b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f60b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f60b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f60b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f60b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f60b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f60bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f60bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f60c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f60c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f60c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f60c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f60c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f60cc: 0xc095130  jal         func_2544C0
    ctx->pc = 0x2F60CCu;
    SET_GPR_U32(ctx, 31, 0x2F60D4u);
    ctx->pc = 0x2F60D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F60CCu;
    // 0x2f60d0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x2F60CCu, 0x2F60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F60D4u;
label_2f60d4:
    // 0x2f60d4: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f60d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f60d8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F60D8u;
    {
        const bool branch_taken_0x2f60d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f60d8) {
            ctx->pc = 0x2F6148u;
            goto label_2f6148;
        }
    }
    ctx->pc = 0x2F60E0u;
    // 0x2f60e0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2f60e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f60e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f60e8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2F60E8u;
    {
        const bool branch_taken_0x2f60e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F60E8u;
        // 0x2f60ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f60e8) {
            ctx->pc = 0x2F6120u;
            goto label_2f6120;
        }
    }
    ctx->pc = 0x2F60F0u;
    // 0x2f60f0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F60F0u;
    {
        const bool branch_taken_0x2f60f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f60f0) {
            ctx->pc = 0x2F6118u;
            goto label_2f6118;
        }
    }
    ctx->pc = 0x2F60F8u;
    // 0x2f60f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f60fc: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F60FCu;
    {
        const bool branch_taken_0x2f60fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f60fc) {
            ctx->pc = 0x2F6110u;
            goto label_2f6110;
        }
    }
    ctx->pc = 0x2F6104u;
    // 0x2f6104: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6104u;
    {
        const bool branch_taken_0x2f6104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6104) {
            ctx->pc = 0x2F6128u;
            goto label_2f6128;
        }
    }
    ctx->pc = 0x2F610Cu;
    // 0x2f610c: 0x0  nop
    ctx->pc = 0x2f610cu;
    // NOP
label_2f6110:
    // 0x2f6110: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6110u;
    {
        const bool branch_taken_0x2f6110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6110u;
        // 0x2f6114: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6110) {
            ctx->pc = 0x2F6130u;
            goto label_2f6130;
        }
    }
    ctx->pc = 0x2F6118u;
label_2f6118:
    // 0x2f6118: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6118u;
    {
        const bool branch_taken_0x2f6118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6118u;
        // 0x2f611c: 0x64020008  daddiu      $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6118) {
            ctx->pc = 0x2F6130u;
            goto label_2f6130;
        }
    }
    ctx->pc = 0x2F6120u;
label_2f6120:
    // 0x2f6120: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6120u;
    {
        const bool branch_taken_0x2f6120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6120u;
        // 0x2f6124: 0x64020010  daddiu      $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6120) {
            ctx->pc = 0x2F6130u;
            goto label_2f6130;
        }
    }
    ctx->pc = 0x2F6128u;
label_2f6128:
    // 0x2f6128: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f6128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f612c: 0x0  nop
    ctx->pc = 0x2f612cu;
    // NOP
label_2f6130:
    // 0x2f6130: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f6130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f6134: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f6134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f6138: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2f6138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f613c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6140: 0xc0dc8f0  jal         func_3723C0
    ctx->pc = 0x2F6140u;
    SET_GPR_U32(ctx, 31, 0x2F6148u);
    ctx->pc = 0x2F6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6140u;
    // 0x2f6144: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3723C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723C0u, 0x2F6140u, 0x2F6148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6148u;
label_2f6148:
    // 0x2f6148: 0xc0dc8f8  jal         func_3723E0
    ctx->pc = 0x2F6148u;
    SET_GPR_U32(ctx, 31, 0x2F6150u);
    ctx->pc = 0x3723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723E0u, 0x2F6148u, 0x2F6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6150u;
label_2f6150:
    // 0x2f6150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6154: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6154u;
    {
        const bool branch_taken_0x2f6154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6154u;
        // 0x2f6158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6154) {
            ctx->pc = 0x2F6178u;
            goto label_2f6178;
        }
    }
    ctx->pc = 0x2F615Cu;
    // 0x2f615c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F615Cu;
    SET_GPR_U32(ctx, 31, 0x2F6164u);
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F615Cu, 0x2F6164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6164u;
label_2f6164:
    // 0x2f6164: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2f6164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2f6168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f616c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2f616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2f6170: 0xc095130  jal         func_2544C0
    ctx->pc = 0x2F6170u;
    SET_GPR_U32(ctx, 31, 0x2F6178u);
    ctx->pc = 0x2F6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6170u;
    // 0x2f6174: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x2F6170u, 0x2F6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6178u;
label_2f6178:
    // 0x2f6178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f617c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f617cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6180: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6184: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6184u;
        // 0x2f6188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F618Cu;
}
