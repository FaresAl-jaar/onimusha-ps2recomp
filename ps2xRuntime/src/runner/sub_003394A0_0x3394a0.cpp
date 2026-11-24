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

// Function: sub_003394A0
// Address: 0x3394a0 - 0x3395cc
void sub_003394A0_0x3394a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003394A0_0x3394a0");
#endif

    switch (ctx->pc) {
        case 0x3394d4u: goto label_3394d4;
        case 0x3394f0u: goto label_3394f0;
        case 0x339508u: goto label_339508;
        case 0x339520u: goto label_339520;
        case 0x33953cu: goto label_33953c;
        case 0x339554u: goto label_339554;
        case 0x339568u: goto label_339568;
        case 0x33957cu: goto label_33957c;
        case 0x3395b0u: goto label_3395b0;
        default: break;
    }

    ctx->pc = 0x3394a0u;

    // 0x3394a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3394a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3394a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x3394a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x3394a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3394a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3394ac: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3394acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x3394b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3394b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3394b4: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x3394b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    // 0x3394b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3394b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3394bc: 0x344659e4  ori         $a2, $v0, 0x59E4
    ctx->pc = 0x3394bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23012);
    // 0x3394c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3394c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3394c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3394c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3394c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3394c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394cc: 0xc08e442  jal         func_239108
    ctx->pc = 0x3394CCu;
    SET_GPR_U32(ctx, 31, 0x3394D4u);
    ctx->pc = 0x3394D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394CCu;
    // 0x3394d0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239108u, 0x3394CCu, 0x3394D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394D4u;
label_3394d4:
    // 0x3394d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3394d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3394d8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x3394d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x3394dc: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3394dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x3394e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3394e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3394e4: 0x24a5fd80  addiu       $a1, $a1, -0x280
    ctx->pc = 0x3394e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
    // 0x3394e8: 0xc08e442  jal         func_239108
    ctx->pc = 0x3394E8u;
    SET_GPR_U32(ctx, 31, 0x3394F0u);
    ctx->pc = 0x3394ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394E8u;
    // 0x3394ec: 0x344659e4  ori         $a2, $v0, 0x59E4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23012);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239108u, 0x3394E8u, 0x3394F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394F0u;
label_3394f0:
    // 0x3394f0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3394f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3394f4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3394f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x3394f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3394fc: 0x24845780  addiu       $a0, $a0, 0x5780
    ctx->pc = 0x3394fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22400));
    // 0x339500: 0xc08e51e  jal         func_239478
    ctx->pc = 0x339500u;
    SET_GPR_U32(ctx, 31, 0x339508u);
    ctx->pc = 0x339504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339500u;
    // 0x339504: 0x3445fde4  ori         $a1, $v0, 0xFDE4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64996);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239478u, 0x339500u, 0x339508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339508u;
label_339508:
    // 0x339508: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x339508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x33950c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x33950cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x339510: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x339510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x339514: 0x24845580  addiu       $a0, $a0, 0x5580
    ctx->pc = 0x339514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21888));
    // 0x339518: 0xc08e51e  jal         func_239478
    ctx->pc = 0x339518u;
    SET_GPR_U32(ctx, 31, 0x339520u);
    ctx->pc = 0x33951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339518u;
    // 0x33951c: 0x3445fde4  ori         $a1, $v0, 0xFDE4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64996);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239478u, 0x339518u, 0x339520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339520u;
label_339520:
    // 0x339520: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x339520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x339524: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x339524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x339528: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x339528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33952c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339530: 0x24a55380  addiu       $a1, $a1, 0x5380
    ctx->pc = 0x339530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21376));
    // 0x339534: 0xc08e442  jal         func_239108
    ctx->pc = 0x339534u;
    SET_GPR_U32(ctx, 31, 0x33953Cu);
    ctx->pc = 0x339538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339534u;
    // 0x339538: 0x3446b924  ori         $a2, $v0, 0xB924 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47396);
    ctx->in_delay_slot = false;
    ctx->pc = 0x239108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239108u, 0x339534u, 0x33953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33953Cu;
label_33953c:
    // 0x33953c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x33953cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x339540: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x339540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x339544: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x339544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x339548: 0x24a50cc0  addiu       $a1, $a1, 0xCC0
    ctx->pc = 0x339548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    // 0x33954c: 0xc090142  jal         func_240508
    ctx->pc = 0x33954Cu;
    SET_GPR_U32(ctx, 31, 0x339554u);
    ctx->pc = 0x339550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33954Cu;
    // 0x339550: 0x24063000  addiu       $a2, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240508u, 0x33954Cu, 0x339554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339554u;
label_339554:
    // 0x339554: 0x3c12004f  lui         $s2, 0x4F
    ctx->pc = 0x339554u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)79 << 16));
    // 0x339558: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33955c: 0x2652a380  addiu       $s2, $s2, -0x5C80
    ctx->pc = 0x33955cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943616));
    // 0x339560: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x339560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339564: 0x0  nop
    ctx->pc = 0x339564u;
    // NOP
label_339568:
    // 0x339568: 0x3c010013  lui         $at, 0x13
    ctx->pc = 0x339568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19 << 16));
    // 0x33956c: 0x2410821  addu        $at, $s2, $at
    ctx->pc = 0x33956cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 1)));
    // 0x339570: 0x90259944  lbu         $a1, -0x66BC($at)
    ctx->pc = 0x339570u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294940996)));
    // 0x339574: 0xc08ebe2  jal         func_23AF88
    ctx->pc = 0x339574u;
    SET_GPR_U32(ctx, 31, 0x33957Cu);
    ctx->pc = 0x339578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339574u;
    // 0x339578: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF88u, 0x339574u, 0x33957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33957Cu;
label_33957c:
    // 0x33957c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x33957cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x339580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339584: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x339584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x339588: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x339588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33958c: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x33958cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x339590: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x339590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x339594: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x339594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x339598: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x339598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x33959c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x33959cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3395a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3395A0u;
    {
        const bool branch_taken_0x3395a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3395A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395A0u;
        // 0x3395a4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395a0) {
            ctx->pc = 0x339568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339568;
        }
    }
    ctx->pc = 0x3395A8u;
    // 0x3395a8: 0xc08e238  jal         func_2388E0
    ctx->pc = 0x3395A8u;
    SET_GPR_U32(ctx, 31, 0x3395B0u);
    ctx->pc = 0x3395ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395A8u;
    // 0x3395ac: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E0u, 0x3395A8u, 0x3395B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395B0u;
label_3395b0:
    // 0x3395b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3395b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3395b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3395b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3395b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3395b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3395bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3395bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3395c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3395c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3395c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3395C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3395C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3395C4u;
        // 0x3395c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3395C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3395CCu;
}
