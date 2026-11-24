#include <cstdio>
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

// Function: sub_001556C0
// Address: 0x1556c0 - 0x155948
void sub_001556C0_0x1556c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001556C0_0x1556c0");
#endif
    { static uint32_t n=0; ++n; if (n<=5 || (n%600)==0) fprintf(stderr,"[probe e1556c0] call %u a0=0x%x ra=0x%x state=%u b86c638=0x%x w81f248=0x%x\n",n,GPR_U32(ctx,4),GPR_U32(ctx,31),(unsigned)READ8(0x8095a0u),(unsigned)READ8(0x86c638u),(unsigned)READ32(0x81f248u)); }

    switch (ctx->pc) {
        case 0x1556e0u: goto label_1556e0;
        case 0x155718u: goto label_155718;
        case 0x155724u: goto label_155724;
        case 0x155730u: goto label_155730;
        case 0x15573cu: goto label_15573c;
        case 0x155758u: goto label_155758;
        case 0x155764u: goto label_155764;
        case 0x155770u: goto label_155770;
        case 0x1557b4u: goto label_1557b4;
        case 0x1557d8u: goto label_1557d8;
        case 0x1557e4u: goto label_1557e4;
        case 0x1557f0u: goto label_1557f0;
        case 0x1557fcu: goto label_1557fc;
        case 0x155808u: goto label_155808;
        case 0x155814u: goto label_155814;
        case 0x155820u: goto label_155820;
        case 0x15582cu: goto label_15582c;
        case 0x155830u: goto label_155830;
        case 0x1558f8u: goto label_1558f8;
        case 0x15590cu: goto label_15590c;
        case 0x155940u: goto label_155940;
        default: break;
    }

    ctx->pc = 0x1556c0u;

    // 0x1556c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1556c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1556c4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1556c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1556c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1556c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1556cc: 0xa02095a0  sb          $zero, -0x6A60($at)
    ctx->pc = 0x1556ccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8095A0u, _value); } while (0);
    // 0x1556d0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1556d4: 0xa42095a2  sh          $zero, -0x6A5E($at)
    ctx->pc = 0x1556d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A2u, _value); } while (0);
    // 0x1556d8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1556d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1556dc: 0xa42095a4  sh          $zero, -0x6A5C($at)
    ctx->pc = 0x1556dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8095A4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8095A4u, _value); } while (0);
label_1556e0:
    // 0x1556e0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1556e4: 0xdf838608  ld          $v1, -0x79F8($gp)
    ctx->pc = 0x1556e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
    // 0x1556e8: 0x902295a0  lbu         $v0, -0x6A60($at)
    ctx->pc = 0x1556e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x8095A0u));
    // 0x1556ec: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x1556ecu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x1556f0: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1556f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1556f4: 0x1020004e  beqz        $at, . + 4 + (0x4E << 2)
    ctx->pc = 0x1556F4u;
    {
        const bool branch_taken_0x1556f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1556F4u;
        // 0x1556f8: 0xff838608  sd          $v1, -0x79F8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936072), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556f4) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1556FCu;
    // 0x1556fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x155700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155704: 0x24635080  addiu       $v1, $v1, 0x5080
    ctx->pc = 0x155704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20608));
    // 0x155708: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15570c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15570cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155710: 0x400008  jr          $v0
    ctx->pc = 0x155710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155718u: goto label_155718;
            case 0x155730u: goto label_155730;
            case 0x155758u: goto label_155758;
            case 0x1557D8u: goto label_1557d8;
            case 0x1557F0u: goto label_1557f0;
            case 0x155808u: goto label_155808;
            case 0x155820u: goto label_155820;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155710u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x155718u;
label_155718:
    // 0x155718: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x15571c: 0xc055654  jal         func_155950
    ctx->pc = 0x15571Cu;
    SET_GPR_U32(ctx, 31, 0x155724u);
    ctx->pc = 0x155720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15571Cu;
    // 0x155720: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155950u, 0x15571Cu, 0x155724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155724u;
label_155724:
    // 0x155724: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x155724u;
    {
        const bool branch_taken_0x155724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155724u;
        // 0x155728: 0xaf808600  sw          $zero, -0x7A00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155724) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x15572Cu;
    // 0x15572c: 0x0  nop
    ctx->pc = 0x15572cu;
    // NOP
label_155730:
    // 0x155730: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x155730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x155734: 0xc055964  jal         func_156590
    ctx->pc = 0x155734u;
    SET_GPR_U32(ctx, 31, 0x15573Cu);
    ctx->pc = 0x155738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155734u;
    // 0x155738: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156590u, 0x155734u, 0x15573Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15573Cu;
label_15573c:
    // 0x15573c: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x155740: 0x8c22cc34  lw          $v0, -0x33CC($at)
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x82CC34u));
    // 0x155744: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x155744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x155748: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x155748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x15574c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15574Cu;
    {
        const bool branch_taken_0x15574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15574Cu;
        // 0x155750: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15574c) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155754u;
    // 0x155754: 0x0  nop
    ctx->pc = 0x155754u;
    // NOP
label_155758:
    // 0x155758: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x15575c: 0xc055ec8  jal         func_157B20
    ctx->pc = 0x15575Cu;
    SET_GPR_U32(ctx, 31, 0x155764u);
    ctx->pc = 0x155760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15575Cu;
    // 0x155760: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B20u, 0x15575Cu, 0x155764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155764u;
label_155764:
    // 0x155764: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x155764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x155768: 0xc074104  jal         func_1D0410
    ctx->pc = 0x155768u;
    SET_GPR_U32(ctx, 31, 0x155770u);
    ctx->pc = 0x15576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155768u;
    // 0x15576c: 0x24849600  addiu       $a0, $a0, -0x6A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0410u, 0x155768u, 0x155770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155770u;
label_155770:
    // 0x155770: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x155774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x155774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155778: 0x902395a0  lbu         $v1, -0x6A60($at)
    ctx->pc = 0x155778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8095A0u));
    // 0x15577c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15577Cu;
    {
        const bool branch_taken_0x15577c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x155780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15577Cu;
        // 0x155780: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15577c) {
            ctx->pc = 0x155790u;
            goto label_155790;
        }
    }
    ctx->pc = 0x155784u;
    // 0x155784: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x155784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x155788: 0xa02295a0  sb          $v0, -0x6A60($at)
    ctx->pc = 0x155788u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8095A0u, _value); } while (0);
    // 0x15578c: 0x0  nop
    ctx->pc = 0x15578cu;
    // NOP
label_155790:
    // 0x155790: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x155794: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x155794u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x155798: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x15579c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1557a0: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x1557a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x1557a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1557a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1557a8: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1557a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1557ac: 0xc0ceafc  jal         func_33ABF0
    ctx->pc = 0x1557ACu;
    SET_GPR_U32(ctx, 31, 0x1557B4u);
    ctx->pc = 0x1557B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557ACu;
    // 0x1557b0: 0xac22cc34  sw          $v0, -0x33CC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954036), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABF0u, 0x1557ACu, 0x1557B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557B4u;
label_1557b4:
    // 0x1557b4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1557b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1557b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1557bc: 0x8c23fe84  lw          $v1, -0x17C($at)
    ctx->pc = 0x1557bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x92FE84u));
    // 0x1557c0: 0xa3828c88  sb          $v0, -0x7378($gp)
    ctx->pc = 0x1557c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937736), (uint8_t)GPR_U32(ctx, 2));
    // 0x1557c4: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x1557c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1557c8: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x1557c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x1557cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1557CCu;
    {
        const bool branch_taken_0x1557cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1557CCu;
        // 0x1557d0: 0xac22fe84  sw          $v0, -0x17C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557cc) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557D4u;
    // 0x1557d4: 0x0  nop
    ctx->pc = 0x1557d4u;
    // NOP
label_1557d8:
    // 0x1557d8: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1557dc: 0xc055ec8  jal         func_157B20
    ctx->pc = 0x1557DCu;
    SET_GPR_U32(ctx, 31, 0x1557E4u);
    ctx->pc = 0x1557E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557DCu;
    // 0x1557e0: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157B20u, 0x1557DCu, 0x1557E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557E4u;
label_1557e4:
    // 0x1557e4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1557E4u;
    {
        const bool branch_taken_0x1557e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557e4) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x1557ECu;
    // 0x1557ec: 0x0  nop
    ctx->pc = 0x1557ecu;
    // NOP
label_1557f0:
    // 0x1557f0: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x1557f4: 0xc056244  jal         func_158910
    ctx->pc = 0x1557F4u;
    SET_GPR_U32(ctx, 31, 0x1557FCu);
    ctx->pc = 0x1557F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1557F4u;
    // 0x1557f8: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158910u, 0x1557F4u, 0x1557FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557FCu;
label_1557fc:
    // 0x1557fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1557FCu;
    {
        const bool branch_taken_0x1557fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557fc) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x155804u;
    // 0x155804: 0x0  nop
    ctx->pc = 0x155804u;
    // NOP
label_155808:
    // 0x155808: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x155808u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x15580c: 0xc056288  jal         func_158A20
    ctx->pc = 0x15580Cu;
    SET_GPR_U32(ctx, 31, 0x155814u);
    ctx->pc = 0x155810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15580Cu;
    // 0x155810: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A20u, 0x15580Cu, 0x155814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155814u;
label_155814:
    // 0x155814: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155814u;
    {
        const bool branch_taken_0x155814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155814) {
            ctx->pc = 0x155830u;
            goto label_155830;
        }
    }
    ctx->pc = 0x15581Cu;
    // 0x15581c: 0x0  nop
    ctx->pc = 0x15581cu;
    // NOP
label_155820:
    // 0x155820: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x155820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x155824: 0xc056498  jal         func_159260
    ctx->pc = 0x155824u;
    SET_GPR_U32(ctx, 31, 0x15582Cu);
    ctx->pc = 0x155828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155824u;
    // 0x155828: 0x248495a0  addiu       $a0, $a0, -0x6A60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159260u, 0x155824u, 0x15582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15582Cu;
label_15582c:
    // 0x15582c: 0x0  nop
    ctx->pc = 0x15582cu;
    // NOP
label_155830:
    // 0x155830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x155830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x155834: 0x8c25cebc  lw          $a1, -0x3144($at)
    ctx->pc = 0x155834u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x155838: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x155838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x15583c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15583Cu;
    {
        const bool branch_taken_0x15583c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x155840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15583Cu;
        // 0x155840: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15583c) {
            ctx->pc = 0x155860u;
            goto label_155860;
        }
    }
    ctx->pc = 0x155844u;
    // 0x155844: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x155844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
    // 0x155848: 0x28610ff0  slti        $at, $v1, 0xFF0
    ctx->pc = 0x155848u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x15584c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15584Cu;
    {
        const bool branch_taken_0x15584c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15584Cu;
        // 0x155850: 0x24020ed0  addiu       $v0, $zero, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15584c) {
            ctx->pc = 0x155860u;
            goto label_155860;
        }
    }
    ctx->pc = 0x155854u;
    // 0x155854: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155854u;
    {
        const bool branch_taken_0x155854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x155854) {
            ctx->pc = 0x155868u;
            goto label_155868;
        }
    }
    ctx->pc = 0x15585Cu;
    // 0x15585c: 0x0  nop
    ctx->pc = 0x15585cu;
    // NOP
label_155860:
    // 0x155860: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x155860u;
    {
        const bool branch_taken_0x155860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155860u;
        // 0x155864: 0xaf808600  sw          $zero, -0x7A00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155860) {
            ctx->pc = 0x155930u;
            goto label_155930;
        }
    }
    ctx->pc = 0x155868u;
label_155868:
    // 0x155868: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x15586c: 0x8c235f08  lw          $v1, 0x5F08($at)
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x695F08u));
    // 0x155870: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x155870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x155874: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155874u;
        // 0x155878: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x155874) {
            ctx->pc = 0x155928u;
            goto label_155928;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x15587Cu;
    {
        const bool branch_taken_0x15587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15587c) {
            ctx->pc = 0x155928u;
            goto label_155928;
        }
    }
    ctx->pc = 0x155884u;
    // 0x155884: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x155884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x155888: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15588c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15588cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x155890: 0x8f848600  lw          $a0, -0x7A00($gp)
    ctx->pc = 0x155890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936064)));
    // 0x155894: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x155894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x155898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15589c: 0x0  nop
    ctx->pc = 0x15589cu;
    // NOP
    // 0x1558a0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1558a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1558a4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1558a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1558a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1558ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1558ACu;
    {
        const bool branch_taken_0x1558ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1558B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558ACu;
        // 0x1558b0: 0xaf828600  sw          $v0, -0x7A00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558ac) {
            ctx->pc = 0x1558C4u;
            goto label_1558c4;
        }
    }
    ctx->pc = 0x1558B4u;
    // 0x1558b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1558b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1558b8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1558b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1558bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1558BCu;
    {
        const bool branch_taken_0x1558bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558BCu;
        // 0x1558c0: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558bc) {
            ctx->pc = 0x1558E0u;
            goto label_1558e0;
        }
    }
    ctx->pc = 0x1558C4u;
label_1558c4:
    // 0x1558c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1558c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1558c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1558cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1558ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1558d0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1558d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1558d4: 0x0  nop
    ctx->pc = 0x1558d4u;
    // NOP
    // 0x1558d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1558d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1558dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x1558dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1558e0:
    // 0x1558e0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1558E0u;
    {
        const bool branch_taken_0x1558e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1558E0u;
        // 0x1558e4: 0x30a20040  andi        $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558e0) {
            ctx->pc = 0x155930u;
            goto label_155930;
        }
    }
    ctx->pc = 0x1558E8u;
    // 0x1558e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1558E8u;
    {
        const bool branch_taken_0x1558e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1558e8) {
            ctx->pc = 0x1558F8u;
            goto label_1558f8;
        }
    }
    ctx->pc = 0x1558F0u;
    // 0x1558f0: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x1558F0u;
    SET_GPR_U32(ctx, 31, 0x1558F8u);
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x1558F0u, 0x1558F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1558F8u;
label_1558f8:
    // 0x1558f8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1558f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1558fc: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x1558fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x155900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155904: 0xc0ce590  jal         func_339640
    ctx->pc = 0x155904u;
    SET_GPR_U32(ctx, 31, 0x15590Cu);
    ctx->pc = 0x155908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155904u;
    // 0x155908: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x155904u, 0x15590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15590Cu;
label_15590c:
    // 0x15590c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15590cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x155910: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x155914: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x155914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x155918: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x155918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15591c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15591Cu;
    {
        const bool branch_taken_0x15591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15591Cu;
        // 0x155920: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15591c) {
            ctx->pc = 0x155930u;
            goto label_155930;
        }
    }
    ctx->pc = 0x155924u;
    // 0x155924: 0x0  nop
    ctx->pc = 0x155924u;
    // NOP
label_155928:
    // 0x155928: 0xaf808600  sw          $zero, -0x7A00($gp)
    ctx->pc = 0x155928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936064), GPR_U32(ctx, 0));
    // 0x15592c: 0x0  nop
    ctx->pc = 0x15592cu;
    // NOP
label_155930:
    // 0x155930: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x155930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x155934: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x155934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x155938: 0xc04c918  jal         func_132460
    ctx->pc = 0x155938u;
    SET_GPR_U32(ctx, 31, 0x155940u);
    ctx->pc = 0x15593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155938u;
    // 0x15593c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x155938u, 0x155940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155940u;
label_155940:
    // 0x155940: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x155940u;
    {
        const bool branch_taken_0x155940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155940) {
            ctx->pc = 0x1556E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1556e0;
        }
    }
    ctx->pc = 0x155948u;
}
