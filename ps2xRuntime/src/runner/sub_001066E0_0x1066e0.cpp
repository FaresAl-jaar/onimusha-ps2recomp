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

// Function: sub_001066E0
// Address: 0x1066e0 - 0x106930
void sub_001066E0_0x1066e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001066E0_0x1066e0");
#endif

    switch (ctx->pc) {
        case 0x106760u: goto label_106760;
        case 0x1067b4u: goto label_1067b4;
        case 0x1067ccu: goto label_1067cc;
        case 0x1067e8u: goto label_1067e8;
        case 0x10680cu: goto label_10680c;
        default: break;
    }

    ctx->pc = 0x1066e0u;

    // 0x1066e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1066e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1066e4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1066e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1066e8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1066e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1066ec: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1066ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1066f0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1066f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1066f4: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1066f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1066f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1066f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1066fc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1066fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106700: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x106700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x106704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106708: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x106708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10670c: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x10670cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x106710: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x106710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x106714: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x106714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x106718: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x106718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10671c: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x10671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x106720: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x106720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x106724: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x106724u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x106728: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x106728u;
    {
        const bool branch_taken_0x106728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106728) {
            ctx->pc = 0x10672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106728u;
            // 0x10672c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x106730u;
            goto label_106730;
        }
    }
    ctx->pc = 0x106730u;
label_106730:
    // 0x106730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106734: 0x1810  mfhi        $v1
    ctx->pc = 0x106734u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x106738: 0xb812  mflo        $s7
    ctx->pc = 0x106738u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x10673c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x10673cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106740: 0x173100  sll         $a2, $s7, 4
    ctx->pc = 0x106740u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x106744: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x106744u;
    {
        const bool branch_taken_0x106744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106744u;
        // 0x106748: 0x162900  sll         $a1, $s6, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106744) {
            ctx->pc = 0x106790u;
            goto label_106790;
        }
    }
    ctx->pc = 0x10674Cu;
    // 0x10674c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x10674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106750: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x106750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x106754: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x106754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x106758: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x106758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x10675c: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x10675cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
label_106760:
    // 0x106760: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106764: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x106764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x106768: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106768u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x10676c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x10676cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x106770: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x106770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x106774: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x106774u;
    {
        const bool branch_taken_0x106774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x106774) {
            ctx->pc = 0x106760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106760;
        }
    }
    ctx->pc = 0x10677Cu;
    // 0x10677c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106780: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x106780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x106784: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x106784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x106788: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x106788u;
    {
        const bool branch_taken_0x106788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106788u;
        // 0x10678c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106788) {
            ctx->pc = 0x106824u;
            goto label_106824;
        }
    }
    ctx->pc = 0x106790u;
label_106790:
    // 0x106790: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x106790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x106794: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x106794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x106798: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106798u;
    {
        const bool branch_taken_0x106798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106798u;
        // 0x10679c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106798) {
            ctx->pc = 0x1067C4u;
            goto label_1067c4;
        }
    }
    ctx->pc = 0x1067A0u;
    // 0x1067a0: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x1067a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x1067a4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1067a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067a8: 0x24a51e78  addiu       $a1, $a1, 0x1E78
    ctx->pc = 0x1067a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7800));
    // 0x1067ac: 0xc04354c  jal         func_10D530
    ctx->pc = 0x1067ACu;
    SET_GPR_U32(ctx, 31, 0x1067B4u);
    ctx->pc = 0x1067B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067ACu;
    // 0x1067b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x1067ACu, 0x1067B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067B4u;
label_1067b4:
    // 0x1067b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1067b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1067b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1067b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1067bc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1067BCu;
    {
        const bool branch_taken_0x1067bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1067C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1067BCu;
        // 0x1067c0: 0xae03012c  sw          $v1, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1067bc) {
            ctx->pc = 0x106900u;
            goto label_106900;
        }
    }
    ctx->pc = 0x1067C4u;
label_1067c4:
    // 0x1067c4: 0xc0417f6  jal         func_105FD8
    ctx->pc = 0x1067C4u;
    SET_GPR_U32(ctx, 31, 0x1067CCu);
    ctx->pc = 0x1067C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1067C4u;
    // 0x1067c8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FD8u, 0x1067C4u, 0x1067CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1067CCu;
label_1067cc:
    // 0x1067cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1067ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1067d0: 0x261106d8  addiu       $s1, $s0, 0x6D8
    ctx->pc = 0x1067d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1752));
    // 0x1067d4: 0x261206d4  addiu       $s2, $s0, 0x6D4
    ctx->pc = 0x1067d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1748));
    // 0x1067d8: 0x261306d0  addiu       $s3, $s0, 0x6D0
    ctx->pc = 0x1067d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1744));
    // 0x1067dc: 0x261406c8  addiu       $s4, $s0, 0x6C8
    ctx->pc = 0x1067dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1736));
    // 0x1067e0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x1067e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x1067e4: 0x0  nop
    ctx->pc = 0x1067e4u;
    // NOP
label_1067e8:
    // 0x1067e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1067e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x1067ec: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1067ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1067f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1067f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1067f4: 0x0  nop
    ctx->pc = 0x1067f4u;
    // NOP
    // 0x1067f8: 0x0  nop
    ctx->pc = 0x1067f8u;
    // NOP
    // 0x1067fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1067FCu;
    {
        const bool branch_taken_0x1067fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1067fc) {
            ctx->pc = 0x1067E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1067e8;
        }
    }
    ctx->pc = 0x106804u;
    // 0x106804: 0xc042262  jal         func_108988
    ctx->pc = 0x106804u;
    SET_GPR_U32(ctx, 31, 0x10680Cu);
    ctx->pc = 0x106808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106804u;
    // 0x106808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108988u, 0x106804u, 0x10680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10680Cu;
label_10680c:
    // 0x10680c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106810: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x106810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106814: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106818: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x106818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10681c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x10681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x106820: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x106820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_106824:
    // 0x106824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106828: 0x57c2000a  bnel        $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106828u;
    {
        const bool branch_taken_0x106828 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x106828) {
            ctx->pc = 0x10682Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106828u;
            // 0x10682c: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106854u;
            goto label_106854;
        }
    }
    ctx->pc = 0x106830u;
    // 0x106830: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x106830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x106834: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106834u;
    {
        const bool branch_taken_0x106834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106834u;
        // 0x106838: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106834) {
            ctx->pc = 0x106850u;
            goto label_106850;
        }
    }
    ctx->pc = 0x10683Cu;
    // 0x10683c: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x10683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106840: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106844: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x106844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x106848: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106848u;
    {
        const bool branch_taken_0x106848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106848u;
        // 0x10684c: 0xac5e0000  sw          $fp, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106848) {
            ctx->pc = 0x106864u;
            goto label_106864;
        }
    }
    ctx->pc = 0x106850u;
label_106850:
    // 0x106850: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_106854:
    // 0x106854: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x106854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x106858: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x106858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10685c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x10685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x106860: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x106860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_106864:
    // 0x106864: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x106864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106868: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x106868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x10686c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x10686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106870: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x106870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106874: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x106874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x106878: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x106878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x10687c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10687cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x106880: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x106880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x106884: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x106884u;
    {
        const bool branch_taken_0x106884 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x106888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106884u;
        // 0x106888: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106884) {
            ctx->pc = 0x1068C0u;
            goto label_1068c0;
        }
    }
    ctx->pc = 0x10688Cu;
    // 0x10688c: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x10688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x106890: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x106890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x106894: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x106894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x106898: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x106898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10689c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x10689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1068a0: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x1068a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1068a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1068a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1068a8: 0x2c22818  mult        $a1, $s6, $v0
    ctx->pc = 0x1068a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1068ac: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x1068acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x1068b0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1068b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1068b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1068b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1068b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1068B8u;
    {
        const bool branch_taken_0x1068b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1068BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1068B8u;
        // 0x1068bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1068b8) {
            ctx->pc = 0x1068FCu;
            goto label_1068fc;
        }
    }
    ctx->pc = 0x1068C0u;
label_1068c0:
    // 0x1068c0: 0x54820002  bnel        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1068C0u;
    {
        const bool branch_taken_0x1068c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1068c0) {
            ctx->pc = 0x1068C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1068C0u;
            // 0x1068c4: 0x8e0201e0  lw          $v0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1068CCu;
            goto label_1068cc;
        }
    }
    ctx->pc = 0x1068C8u;
    // 0x1068c8: 0x8e0201f0  lw          $v0, 0x1F0($s0)
    ctx->pc = 0x1068c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
label_1068cc:
    // 0x1068cc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1068ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1068d0: 0x24060180  addiu       $a2, $zero, 0x180
    ctx->pc = 0x1068d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1068d4: 0x8e040820  lw          $a0, 0x820($s0)
    ctx->pc = 0x1068d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1068d8: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1068d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1068dc: 0x2c33818  mult        $a3, $s6, $v1
    ctx->pc = 0x1068dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1068e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1068e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1068e4: 0xf71821  addu        $v1, $a3, $s7
    ctx->pc = 0x1068e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x1068e8: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x1068e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1068ec: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1068ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1068f0: 0xf42021  addu        $a0, $a3, $s4
    ctx->pc = 0x1068f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x1068f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1068f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1068f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1068fc:
    // 0x1068fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1068fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_106900:
    // 0x106900: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x106900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x106904: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x106904u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106908: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x106908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10690c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10690cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106910: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x106910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106914: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x106914u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106918: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x106918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10691c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10691cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106920: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x106920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x106924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106928: 0x3e00008  jr          $ra
    ctx->pc = 0x106928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106928u;
        // 0x10692c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106930u;
}
