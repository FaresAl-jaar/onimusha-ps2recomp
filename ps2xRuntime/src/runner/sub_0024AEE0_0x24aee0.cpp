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

// Function: sub_0024AEE0
// Address: 0x24aee0 - 0x24b038
void sub_0024AEE0_0x24aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AEE0_0x24aee0");
#endif

    switch (ctx->pc) {
        case 0x24af24u: goto label_24af24;
        case 0x24af3cu: goto label_24af3c;
        case 0x24af44u: goto label_24af44;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af94u: goto label_24af94;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afc8u: goto label_24afc8;
        case 0x24affcu: goto label_24affc;
        case 0x24b008u: goto label_24b008;
        default: break;
    }

    ctx->pc = 0x24aee0u;

    // 0x24aee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24aee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24aee4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x24aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x24aee8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24aeec: 0x24547480  addiu       $s4, $v0, 0x7480
    ctx->pc = 0x24aeecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 29824));
    // 0x24aef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24aef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24aef4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24aef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24aefc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24aefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24af00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24af04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24af04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af08: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x24af08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x24af0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x24af0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24af10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24af18: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x24af18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x24af1c: 0xc049590  jal         func_125640
    ctx->pc = 0x24AF1Cu;
    SET_GPR_U32(ctx, 31, 0x24AF24u);
    ctx->pc = 0x24AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF1Cu;
    // 0x24af20: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24AF1Cu, 0x24AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF24u;
label_24af24:
    // 0x24af24: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24af24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x24af28: 0x8c621100  lw          $v0, 0x1100($v1)
    ctx->pc = 0x24af28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D1100u));
    // 0x24af2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AF2Cu;
    {
        const bool branch_taken_0x24af2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24af2c) {
            ctx->pc = 0x24AF3Cu;
            goto label_24af3c;
        }
    }
    ctx->pc = 0x24AF34u;
    // 0x24af34: 0xc092b9a  jal         func_24AE68
    ctx->pc = 0x24AF34u;
    SET_GPR_U32(ctx, 31, 0x24AF3Cu);
    ctx->pc = 0x24AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AE68u, 0x24AF34u, 0x24AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF3Cu;
label_24af3c:
    // 0x24af3c: 0xc092b1c  jal         func_24AC70
    ctx->pc = 0x24AF3Cu;
    SET_GPR_U32(ctx, 31, 0x24AF44u);
    ctx->pc = 0x24AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AC70u, 0x24AF3Cu, 0x24AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF44u;
label_24af44:
    // 0x24af44: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
    ctx->pc = 0x24AF44u;
    {
        const bool branch_taken_0x24af44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF44u;
        // 0x24af48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af44) {
            ctx->pc = 0x24B018u;
            goto label_24b018;
        }
    }
    ctx->pc = 0x24AF4Cu;
    // 0x24af4c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x24AF4Cu;
    {
        const bool branch_taken_0x24af4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF4Cu;
        // 0x24af50: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af4c) {
            ctx->pc = 0x24AF60u;
            goto label_24af60;
        }
    }
    ctx->pc = 0x24AF54u;
    // 0x24af54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24af54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AF58u;
    {
        const bool branch_taken_0x24af58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF58u;
        // 0x24af5c: 0x2484d678  addiu       $a0, $a0, -0x2988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af58) {
            ctx->pc = 0x24AF74u;
            goto label_24af74;
        }
    }
    ctx->pc = 0x24AF60u;
label_24af60:
    // 0x24af60: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24AF60u;
    {
        const bool branch_taken_0x24af60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF60u;
        // 0x24af64: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af60) {
            ctx->pc = 0x24AF88u;
            goto label_24af88;
        }
    }
    ctx->pc = 0x24AF68u;
    // 0x24af68: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24af68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24af6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24af6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af70: 0x2484d6a8  addiu       $a0, $a0, -0x2958
    ctx->pc = 0x24af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956712));
label_24af74:
    // 0x24af74: 0xc08d460  jal         func_235180
    ctx->pc = 0x24AF74u;
    SET_GPR_U32(ctx, 31, 0x24AF7Cu);
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24AF74u, 0x24AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF7Cu;
label_24af7c:
    // 0x24af7c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24AF7Cu;
    {
        const bool branch_taken_0x24af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF7Cu;
        // 0x24af80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af7c) {
            ctx->pc = 0x24B018u;
            goto label_24b018;
        }
    }
    ctx->pc = 0x24AF84u;
    // 0x24af84: 0x0  nop
    ctx->pc = 0x24af84u;
    // NOP
label_24af88:
    // 0x24af88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24af88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af8c: 0xc049590  jal         func_125640
    ctx->pc = 0x24AF8Cu;
    SET_GPR_U32(ctx, 31, 0x24AF94u);
    ctx->pc = 0x24AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF8Cu;
    // 0x24af90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x24AF8Cu, 0x24AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF94u;
label_24af94:
    // 0x24af94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af98: 0xc092a56  jal         func_24A958
    ctx->pc = 0x24AF98u;
    SET_GPR_U32(ctx, 31, 0x24AFA0u);
    ctx->pc = 0x24AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF98u;
    // 0x24af9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A958u, 0x24AF98u, 0x24AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFA0u;
label_24afa0:
    // 0x24afa0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x24AFA0u;
    {
        const bool branch_taken_0x24afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24afa0) {
            ctx->pc = 0x24AFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AFA0u;
            // 0x24afa4: 0x26500009  addiu       $s0, $s2, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AFD0u;
            goto label_24afd0;
        }
    }
    ctx->pc = 0x24AFA8u;
    // 0x24afa8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24afac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24afacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afb0: 0xc08d460  jal         func_235180
    ctx->pc = 0x24AFB0u;
    SET_GPR_U32(ctx, 31, 0x24AFB8u);
    ctx->pc = 0x24AFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFB0u;
    // 0x24afb4: 0x2484d6d8  addiu       $a0, $a0, -0x2928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24AFB0u, 0x24AFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFB8u;
label_24afb8:
    // 0x24afb8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24afbc: 0x24a5d700  addiu       $a1, $a1, -0x2900
    ctx->pc = 0x24afbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956800));
    // 0x24afc0: 0xc0925d4  jal         func_249750
    ctx->pc = 0x24AFC0u;
    SET_GPR_U32(ctx, 31, 0x24AFC8u);
    ctx->pc = 0x24AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFC0u;
    // 0x24afc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249750u, 0x24AFC0u, 0x24AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFC8u;
label_24afc8:
    // 0x24afc8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x24AFC8u;
    {
        const bool branch_taken_0x24afc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFC8u;
        // 0x24afcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afc8) {
            ctx->pc = 0x24B018u;
            goto label_24b018;
        }
    }
    ctx->pc = 0x24AFD0u;
label_24afd0:
    // 0x24afd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x24afd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afd4: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x24afd4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x24afd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24afd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24afdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24afe0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24AFE0u;
    {
        const bool branch_taken_0x24afe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24afe0) {
            ctx->pc = 0x24AFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AFE0u;
            // 0x24afe4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24AFE8u;
            goto label_24afe8;
        }
    }
    ctx->pc = 0x24AFE8u;
label_24afe8:
    // 0x24afe8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24afe8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24afec: 0x8812  mflo        $s1
    ctx->pc = 0x24afecu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x24aff0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x24aff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24aff4: 0xc0929ee  jal         func_24A7B8
    ctx->pc = 0x24AFF4u;
    SET_GPR_U32(ctx, 31, 0x24AFFCu);
    ctx->pc = 0x24AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFF4u;
    // 0x24aff8: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A7B8u, 0x24AFF4u, 0x24AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFFCu;
label_24affc:
    // 0x24affc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24affcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b000: 0xc092aae  jal         func_24AAB8
    ctx->pc = 0x24B000u;
    SET_GPR_U32(ctx, 31, 0x24B008u);
    ctx->pc = 0x24B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B000u;
    // 0x24b004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AAB8u, 0x24B000u, 0x24B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B008u;
label_24b008:
    // 0x24b008: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24B008u;
    {
        const bool branch_taken_0x24b008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b008) {
            ctx->pc = 0x24B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B008u;
            // 0x24b00c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B010u;
            goto label_24b010;
        }
    }
    ctx->pc = 0x24B010u;
label_24b010:
    // 0x24b010: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x24b010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x24b014: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24b018:
    // 0x24b018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b01c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b020: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24b020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b024: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24b024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24b028: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24b028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b02c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x24b02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24b030: 0x3e00008  jr          $ra
    ctx->pc = 0x24B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B030u;
        // 0x24b034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B038u;
}
