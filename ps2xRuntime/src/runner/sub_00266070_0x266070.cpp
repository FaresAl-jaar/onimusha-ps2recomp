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

// Function: sub_00266070
// Address: 0x266070 - 0x26616c
void sub_00266070_0x266070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266070_0x266070");
#endif

    switch (ctx->pc) {
        case 0x266088u: goto label_266088;
        case 0x2660c4u: goto label_2660c4;
        case 0x2660ccu: goto label_2660cc;
        case 0x2660d4u: goto label_2660d4;
        case 0x2660e8u: goto label_2660e8;
        case 0x266108u: goto label_266108;
        default: break;
    }

    ctx->pc = 0x266070u;

    // 0x266070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266074: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x266074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x266078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26607c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266080: 0xa7808868  sh          $zero, -0x7798($gp)
    ctx->pc = 0x266080u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936680), (uint16_t)GPR_U32(ctx, 0));
    // 0x266084: 0x24630430  addiu       $v1, $v1, 0x430
    ctx->pc = 0x266084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1072));
label_266088:
    // 0x266088: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x266088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x26608c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26608cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x266090: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x266090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x266094: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x266094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x266098: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x266098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x26609c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x26609cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2660a0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2660a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2660a4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2660a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2660a8: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2660a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2660ac: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2660acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2660b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2660B0u;
    {
        const bool branch_taken_0x2660b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2660B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2660B0u;
        // 0x2660b4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660b0) {
            ctx->pc = 0x266088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266088;
        }
    }
    ctx->pc = 0x2660B8u;
    // 0x2660b8: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2660b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2660bc: 0xc07cba4  jal         func_1F2E90
    ctx->pc = 0x2660BCu;
    SET_GPR_U32(ctx, 31, 0x2660C4u);
    ctx->pc = 0x2660C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660BCu;
    // 0x2660c0: 0x2484f820  addiu       $a0, $a0, -0x7E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2E90u, 0x2660BCu, 0x2660C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660C4u;
label_2660c4:
    // 0x2660c4: 0xc0998c4  jal         func_266310
    ctx->pc = 0x2660C4u;
    SET_GPR_U32(ctx, 31, 0x2660CCu);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x2660C4u, 0x2660CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660CCu;
label_2660cc:
    // 0x2660cc: 0xc0a43d4  jal         func_290F50
    ctx->pc = 0x2660CCu;
    SET_GPR_U32(ctx, 31, 0x2660D4u);
    ctx->pc = 0x290F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F50u, 0x2660CCu, 0x2660D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660D4u;
label_2660d4:
    // 0x2660d4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2660d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2660d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2660d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660dc: 0x2484f8b0  addiu       $a0, $a0, -0x750
    ctx->pc = 0x2660dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965424));
    // 0x2660e0: 0xc049590  jal         func_125640
    ctx->pc = 0x2660E0u;
    SET_GPR_U32(ctx, 31, 0x2660E8u);
    ctx->pc = 0x2660E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2660E0u;
    // 0x2660e4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2660E0u, 0x2660E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2660E8u;
label_2660e8:
    // 0x2660e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2660e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2660ec: 0x3c06008c  lui         $a2, 0x8C
    ctx->pc = 0x2660ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)140 << 16));
    // 0x2660f0: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x2660f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x2660f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2660f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660f8: 0xaf838870  sw          $v1, -0x7790($gp)
    ctx->pc = 0x2660f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 3));
    // 0x2660fc: 0x24c6f8f0  addiu       $a2, $a2, -0x710
    ctx->pc = 0x2660fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965488));
    // 0x266100: 0x24a503f0  addiu       $a1, $a1, 0x3F0
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1008));
    // 0x266104: 0x0  nop
    ctx->pc = 0x266104u;
    // NOP
label_266108:
    // 0x266108: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x266108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x26610c: 0x24c300b0  addiu       $v1, $a2, 0xB0
    ctx->pc = 0x26610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x266110: 0x24c40160  addiu       $a0, $a2, 0x160
    ctx->pc = 0x266110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x266114: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x266114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x266118: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x266118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x26611c: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x26611cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x266120: 0x24c30210  addiu       $v1, $a2, 0x210
    ctx->pc = 0x266120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 528));
    // 0x266124: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x266124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x266128: 0x24c402c0  addiu       $a0, $a2, 0x2C0
    ctx->pc = 0x266128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
    // 0x26612c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x26612cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x266130: 0x24c30370  addiu       $v1, $a2, 0x370
    ctx->pc = 0x266130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 880));
    // 0x266134: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x266134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x266138: 0x24c40420  addiu       $a0, $a2, 0x420
    ctx->pc = 0x266138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1056));
    // 0x26613c: 0x24c304d0  addiu       $v1, $a2, 0x4D0
    ctx->pc = 0x26613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1232));
    // 0x266140: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x266140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x266144: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x266144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x266148: 0x24c60580  addiu       $a2, $a2, 0x580
    ctx->pc = 0x266148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1408));
    // 0x26614c: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x26614cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x266150: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x266150u;
    {
        const bool branch_taken_0x266150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x266154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266150u;
        // 0x266154: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266150) {
            ctx->pc = 0x266108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_266108;
        }
    }
    ctx->pc = 0x266158u;
    // 0x266158: 0xa3808874  sb          $zero, -0x778C($gp)
    ctx->pc = 0x266158u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936692), (uint8_t)GPR_U32(ctx, 0));
    // 0x26615c: 0xa380886c  sb          $zero, -0x7794($gp)
    ctx->pc = 0x26615cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936684), (uint8_t)GPR_U32(ctx, 0));
    // 0x266160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266164: 0x3e00008  jr          $ra
    ctx->pc = 0x266164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266164u;
        // 0x266168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26616Cu;
}
