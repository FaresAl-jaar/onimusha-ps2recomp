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

// Function: sub_001795F0
// Address: 0x1795f0 - 0x17978c
void sub_001795F0_0x1795f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001795F0_0x1795f0");
#endif

    switch (ctx->pc) {
        case 0x179618u: goto label_179618;
        case 0x179620u: goto label_179620;
        case 0x179628u: goto label_179628;
        case 0x179630u: goto label_179630;
        case 0x179644u: goto label_179644;
        case 0x179648u: goto label_179648;
        case 0x179650u: goto label_179650;
        case 0x17967cu: goto label_17967c;
        case 0x1796bcu: goto label_1796bc;
        case 0x1796f8u: goto label_1796f8;
        case 0x179700u: goto label_179700;
        case 0x179720u: goto label_179720;
        case 0x179728u: goto label_179728;
        case 0x179730u: goto label_179730;
        case 0x179740u: goto label_179740;
        case 0x179750u: goto label_179750;
        case 0x179764u: goto label_179764;
        case 0x17976cu: goto label_17976c;
        case 0x179774u: goto label_179774;
        default: break;
    }

    ctx->pc = 0x1795f0u;

    // 0x1795f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1795f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1795f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1795f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1795f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1795f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1795fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1795fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x179604: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179608: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17960c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179610: 0xc040d2e  jal         func_1034B8
    ctx->pc = 0x179610u;
    SET_GPR_U32(ctx, 31, 0x179618u);
    ctx->pc = 0x179614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179610u;
    // 0x179614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1034B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1034B8u, 0x179610u, 0x179618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179618u;
label_179618:
    // 0x179618: 0xc040ece  jal         func_103B38
    ctx->pc = 0x179618u;
    SET_GPR_U32(ctx, 31, 0x179620u);
    ctx->pc = 0x17961Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179618u;
    // 0x17961c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B38u, 0x179618u, 0x179620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179620u;
label_179620:
    // 0x179620: 0xc043ab0  jal         func_10EAC0
    ctx->pc = 0x179620u;
    SET_GPR_U32(ctx, 31, 0x179628u);
    ctx->pc = 0x179624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179620u;
    // 0x179624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAC0u, 0x179620u, 0x179628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179628u;
label_179628:
    // 0x179628: 0xc040d08  jal         func_103420
    ctx->pc = 0x179628u;
    SET_GPR_U32(ctx, 31, 0x179630u);
    ctx->pc = 0x17962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179628u;
    // 0x17962c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x179628u, 0x179630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179630u;
label_179630:
    // 0x179630: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179638: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17963c: 0xc05e5e4  jal         func_179790
    ctx->pc = 0x17963Cu;
    SET_GPR_U32(ctx, 31, 0x179644u);
    ctx->pc = 0x179640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17963Cu;
    // 0x179640: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179790u, 0x17963Cu, 0x179644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179644u;
label_179644:
    // 0x179644: 0x0  nop
    ctx->pc = 0x179644u;
    // NOP
label_179648:
    // 0x179648: 0xc040d08  jal         func_103420
    ctx->pc = 0x179648u;
    SET_GPR_U32(ctx, 31, 0x179650u);
    ctx->pc = 0x17964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179648u;
    // 0x17964c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x179648u, 0x179650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179650u;
label_179650:
    // 0x179650: 0x0  nop
    ctx->pc = 0x179650u;
    // NOP
    // 0x179654: 0x0  nop
    ctx->pc = 0x179654u;
    // NOP
    // 0x179658: 0x0  nop
    ctx->pc = 0x179658u;
    // NOP
    // 0x17965c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17965Cu;
    {
        const bool branch_taken_0x17965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17965c) {
            ctx->pc = 0x179648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179648;
        }
    }
    ctx->pc = 0x179664u;
    // 0x179664: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179664u;
    {
        const bool branch_taken_0x179664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179664u;
        // 0x179668: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179664) {
            ctx->pc = 0x1796A8u;
            goto label_1796a8;
        }
    }
    ctx->pc = 0x17966Cu;
    // 0x17966c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179670: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x179670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179674: 0xc0409ae  jal         func_1026B8
    ctx->pc = 0x179674u;
    SET_GPR_U32(ctx, 31, 0x17967Cu);
    ctx->pc = 0x179678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179674u;
    // 0x179678: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026B8u, 0x179674u, 0x17967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17967Cu;
label_17967c:
    // 0x17967c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x179680: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x179680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x179684: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x179684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x179688: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x17968c: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x17968cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x179690: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x179694: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x179694u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x179698: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x179698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x17969c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x17969cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1796a0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1796A0u;
    {
        const bool branch_taken_0x1796a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796A0u;
        // 0x1796a4: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796a0) {
            ctx->pc = 0x1796F0u;
            goto label_1796f0;
        }
    }
    ctx->pc = 0x1796A8u;
label_1796a8:
    // 0x1796a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1796a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1796acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1796b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1796b4: 0xc0409ae  jal         func_1026B8
    ctx->pc = 0x1796B4u;
    SET_GPR_U32(ctx, 31, 0x1796BCu);
    ctx->pc = 0x1796B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796B4u;
    // 0x1796b8: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1026B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1026B8u, 0x1796B4u, 0x1796BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796BCu;
label_1796bc:
    // 0x1796bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1796bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1796c0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x1796c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x1796c4: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1796c8: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x1796c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1796cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1796ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1796d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1796d4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x1796d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x1796d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1796d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1796dc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1796dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1796e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1796e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1796e4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1796e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1796e8: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x1796e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x1796ec: 0x0  nop
    ctx->pc = 0x1796ecu;
    // NOP
label_1796f0:
    // 0x1796f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1796f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796f4: 0x0  nop
    ctx->pc = 0x1796f4u;
    // NOP
label_1796f8:
    // 0x1796f8: 0xc040d08  jal         func_103420
    ctx->pc = 0x1796F8u;
    SET_GPR_U32(ctx, 31, 0x179700u);
    ctx->pc = 0x1796FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1796F8u;
    // 0x1796fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x1796F8u, 0x179700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179700u;
label_179700:
    // 0x179700: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x179700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x179704: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x179704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x179708: 0x0  nop
    ctx->pc = 0x179708u;
    // NOP
    // 0x17970c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17970Cu;
    {
        const bool branch_taken_0x17970c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17970c) {
            ctx->pc = 0x1796F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1796f8;
        }
    }
    ctx->pc = 0x179714u;
    // 0x179714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179718: 0xc05dc2c  jal         func_1770B0
    ctx->pc = 0x179718u;
    SET_GPR_U32(ctx, 31, 0x179720u);
    ctx->pc = 0x17971Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179718u;
    // 0x17971c: 0xa2302def  sb          $s0, 0x2DEF($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 11759), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770B0u, 0x179718u, 0x179720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179720u;
label_179720:
    // 0x179720: 0xc05e3b8  jal         func_178EE0
    ctx->pc = 0x179720u;
    SET_GPR_U32(ctx, 31, 0x179728u);
    ctx->pc = 0x179724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179720u;
    // 0x179724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178EE0u, 0x179720u, 0x179728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179728u;
label_179728:
    // 0x179728: 0xc05e324  jal         func_178C90
    ctx->pc = 0x179728u;
    SET_GPR_U32(ctx, 31, 0x179730u);
    ctx->pc = 0x17972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179728u;
    // 0x17972c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178C90u, 0x179728u, 0x179730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179730u;
label_179730:
    // 0x179730: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x179734: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x179734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
    // 0x179738: 0xc041038  jal         func_1040E0
    ctx->pc = 0x179738u;
    SET_GPR_U32(ctx, 31, 0x179740u);
    ctx->pc = 0x17973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179738u;
    // 0x17973c: 0xfc221000  sd          $v0, 0x1000($at) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 1), 4096), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040E0u, 0x179738u, 0x179740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179740u;
label_179740:
    // 0x179740: 0x2403fcff  addiu       $v1, $zero, -0x301
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x179744: 0x70031b89  pcpyld      $v1, $zero, $v1
    ctx->pc = 0x179744u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x179748: 0xc040ef6  jal         func_103BD8
    ctx->pc = 0x179748u;
    SET_GPR_U32(ctx, 31, 0x179750u);
    ctx->pc = 0x17974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179748u;
    // 0x17974c: 0x432024  and         $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103BD8u, 0x179748u, 0x179750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179750u;
label_179750:
    // 0x179750: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x179750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x179754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179758: 0x24a5fbc0  addiu       $a1, $a1, -0x440
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966208));
    // 0x17975c: 0xc043730  jal         func_10DCC0
    ctx->pc = 0x17975Cu;
    SET_GPR_U32(ctx, 31, 0x179764u);
    ctx->pc = 0x179760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17975Cu;
    // 0x179760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCC0u, 0x17975Cu, 0x179764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179764u;
label_179764:
    // 0x179764: 0xc043aca  jal         func_10EB28
    ctx->pc = 0x179764u;
    SET_GPR_U32(ctx, 31, 0x17976Cu);
    ctx->pc = 0x179768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179764u;
    // 0x179768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EB28u, 0x179764u, 0x17976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17976Cu;
label_17976c:
    // 0x17976c: 0xc05e454  jal         func_179150
    ctx->pc = 0x17976Cu;
    SET_GPR_U32(ctx, 31, 0x179774u);
    ctx->pc = 0x179770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17976Cu;
    // 0x179770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179150u, 0x17976Cu, 0x179774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179774u;
label_179774:
    // 0x179774: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17977c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17977cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179784: 0x3e00008  jr          $ra
    ctx->pc = 0x179784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179784u;
        // 0x179788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17978Cu;
}
