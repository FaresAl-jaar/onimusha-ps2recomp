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

// Function: sub_00248418
// Address: 0x248418 - 0x2485bc
void sub_00248418_0x248418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248418_0x248418");
#endif

    switch (ctx->pc) {
        case 0x248478u: goto label_248478;
        case 0x2484a8u: goto label_2484a8;
        case 0x248508u: goto label_248508;
        case 0x248528u: goto label_248528;
        case 0x248538u: goto label_248538;
        case 0x248558u: goto label_248558;
        case 0x248560u: goto label_248560;
        case 0x248568u: goto label_248568;
        case 0x248570u: goto label_248570;
        case 0x248578u: goto label_248578;
        default: break;
    }

    ctx->pc = 0x248418u;

    // 0x248418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24841c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248428: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x248428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24842c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248430: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x248434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x248438: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248438u;
    {
        const bool branch_taken_0x248438 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248438u;
        // 0x24843c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248438) {
            ctx->pc = 0x248450u;
            goto label_248450;
        }
    }
    ctx->pc = 0x248440u;
    // 0x248440: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x248440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x248444: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x248444u;
    {
        const bool branch_taken_0x248444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248444u;
        // 0x248448: 0x24a5cfd8  addiu       $a1, $a1, -0x3028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248444) {
            ctx->pc = 0x248470u;
            goto label_248470;
        }
    }
    ctx->pc = 0x24844Cu;
    // 0x24844c: 0x0  nop
    ctx->pc = 0x24844cu;
    // NOP
label_248450:
    // 0x248450: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x248450u;
    {
        const bool branch_taken_0x248450 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x248454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248450u;
        // 0x248454: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248450) {
            ctx->pc = 0x248460u;
            goto label_248460;
        }
    }
    ctx->pc = 0x248458u;
    // 0x248458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x248458u;
    {
        const bool branch_taken_0x248458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248458u;
        // 0x24845c: 0x24a5cff0  addiu       $a1, $a1, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248458) {
            ctx->pc = 0x248470u;
            goto label_248470;
        }
    }
    ctx->pc = 0x248460u;
label_248460:
    // 0x248460: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x248460u;
    {
        const bool branch_taken_0x248460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x248460) {
            ctx->pc = 0x248464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248460u;
            // 0x248464: 0x82030002  lb          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248480u;
            goto label_248480;
        }
    }
    ctx->pc = 0x248468u;
    // 0x248468: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x248468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24846c: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x24846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
label_248470:
    // 0x248470: 0xc091f4c  jal         func_247D30
    ctx->pc = 0x248470u;
    SET_GPR_U32(ctx, 31, 0x248478u);
    ctx->pc = 0x247D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247D30u, 0x248470u, 0x248478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248478u;
label_248478:
    // 0x248478: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x248478u;
    {
        const bool branch_taken_0x248478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248478u;
        // 0x24847c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248478) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x248480u;
label_248480:
    // 0x248480: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x248480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x248484: 0x10730046  beq         $v1, $s3, . + 4 + (0x46 << 2)
    ctx->pc = 0x248484u;
    {
        const bool branch_taken_0x248484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x248488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248484u;
        // 0x248488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248484) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x24848Cu;
    // 0x24848c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24848Cu;
    {
        const bool branch_taken_0x24848c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x248490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24848Cu;
        // 0x248490: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24848c) {
            ctx->pc = 0x2484A0u;
            goto label_2484a0;
        }
    }
    ctx->pc = 0x248494u;
    // 0x248494: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x248494u;
    {
        const bool branch_taken_0x248494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248494u;
        // 0x248498: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248494) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x24849Cu;
    // 0x24849c: 0x0  nop
    ctx->pc = 0x24849cu;
    // NOP
label_2484a0:
    // 0x2484a0: 0xc091644  jal         func_245910
    ctx->pc = 0x2484A0u;
    SET_GPR_U32(ctx, 31, 0x2484A8u);
    ctx->pc = 0x245910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245910u, 0x2484A0u, 0x2484A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2484a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484ac: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2484ACu;
    {
        const bool branch_taken_0x2484ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ACu;
        // 0x2484b0: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484ac) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x2484B4u;
    // 0x2484b4: 0x3c06004d  lui         $a2, 0x4D
    ctx->pc = 0x2484b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)77 << 16));
    // 0x2484b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2484b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2484bc: 0x24c60b50  addiu       $a2, $a2, 0xB50
    ctx->pc = 0x2484bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2896));
    // 0x2484c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2484c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2484c4: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x2484c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x4D0B50u));
    // 0x2484c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2484c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2484ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2484d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2484d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484d4: 0xa2050044  sb          $a1, 0x44($s0)
    ctx->pc = 0x2484d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 5));
    // 0x2484d8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2484d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2484dc: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x2484dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x2484e0: 0x90c80001  lbu         $t0, 0x1($a2)
    ctx->pc = 0x2484e0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2484e4: 0x72ac0  sll         $a1, $a3, 11
    ctx->pc = 0x2484e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
    // 0x2484e8: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2484e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2484ec: 0xa2080045  sb          $t0, 0x45($s0)
    ctx->pc = 0x2484ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 8));
    // 0x2484f0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2484f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2484f4: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2484f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2484f8: 0xae070010  sw          $a3, 0x10($s0)
    ctx->pc = 0x2484f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    // 0x2484fc: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x2484fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x248500: 0xc043a86  jal         func_10EA18
    ctx->pc = 0x248500u;
    SET_GPR_U32(ctx, 31, 0x248508u);
    ctx->pc = 0x248504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248500u;
    // 0x248504: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA18u, 0x248500u, 0x248508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248508u;
label_248508:
    // 0x248508: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x248508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24850c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24850cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248510: 0x26080044  addiu       $t0, $s0, 0x44
    ctx->pc = 0x248510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x248514: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x248514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x248518: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x248518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24851c: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x24851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x248520: 0xc09168e  jal         func_245A38
    ctx->pc = 0x248520u;
    SET_GPR_U32(ctx, 31, 0x248528u);
    ctx->pc = 0x248524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248520u;
    // 0x248524: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245A38u, 0x248520u, 0x248528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248528u;
label_248528:
    // 0x248528: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x248528u;
    {
        const bool branch_taken_0x248528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248528) {
            ctx->pc = 0x24852Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248528u;
            // 0x24852c: 0x3c02004d  lui         $v0, 0x4D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248530u;
    // 0x248530: 0xc091666  jal         func_245998
    ctx->pc = 0x248530u;
    SET_GPR_U32(ctx, 31, 0x248538u);
    ctx->pc = 0x248534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248530u;
    // 0x248534: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245998u, 0x248530u, 0x248538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248538u;
label_248538:
    // 0x248538: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x248538u;
    {
        const bool branch_taken_0x248538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248538u;
        // 0x24853c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248538) {
            ctx->pc = 0x2485A0u;
            goto label_2485a0;
        }
    }
    ctx->pc = 0x248540u;
label_248540:
    // 0x248540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248544: 0x8c510b54  lw          $s1, 0xB54($v0)
    ctx->pc = 0x248544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2900)));
    // 0x248548: 0x56230013  bnel        $s1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x248548u;
    {
        const bool branch_taken_0x248548 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x248548) {
            ctx->pc = 0x24854Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248548u;
            // 0x24854c: 0xa2130002  sb          $s3, 0x2($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248598u;
            goto label_248598;
        }
    }
    ctx->pc = 0x248550u;
    // 0x248550: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x248550u;
    SET_GPR_U32(ctx, 31, 0x248558u);
    ctx->pc = 0x248554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248550u;
    // 0x248554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x248550u, 0x248558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248558u;
label_248558:
    // 0x248558: 0xc091966  jal         func_246598
    ctx->pc = 0x248558u;
    SET_GPR_U32(ctx, 31, 0x248560u);
    ctx->pc = 0x246598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246598u, 0x248558u, 0x248560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248560u;
label_248560:
    // 0x248560: 0xc09191c  jal         func_246470
    ctx->pc = 0x248560u;
    SET_GPR_U32(ctx, 31, 0x248568u);
    ctx->pc = 0x246470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246470u, 0x248560u, 0x248568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248568u;
label_248568:
    // 0x248568: 0xc09176c  jal         func_245DB0
    ctx->pc = 0x248568u;
    SET_GPR_U32(ctx, 31, 0x248570u);
    ctx->pc = 0x24856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248568u;
    // 0x24856c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245DB0u, 0x248568u, 0x248570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248570u;
label_248570:
    // 0x248570: 0xc091666  jal         func_245998
    ctx->pc = 0x248570u;
    SET_GPR_U32(ctx, 31, 0x248578u);
    ctx->pc = 0x248574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248570u;
    // 0x248574: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245998u, 0x248570u, 0x248578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248578u;
label_248578:
    // 0x248578: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x248578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x24857c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x248580: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x248584: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x248584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x248588: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24858c: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x24858cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x248590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x248590u;
    {
        const bool branch_taken_0x248590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248590u;
        // 0x248594: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248590) {
            ctx->pc = 0x24859Cu;
            goto label_24859c;
        }
    }
    ctx->pc = 0x248598u;
label_248598:
    // 0x248598: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x248598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24859c:
    // 0x24859c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24859cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2485a0:
    // 0x2485a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2485a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2485a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2485a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2485a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2485a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2485ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2485acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2485b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2485b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2485b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2485B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2485B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485B4u;
        // 0x2485b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485BCu;
}
