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

// Function: sub_001EF740
// Address: 0x1ef740 - 0x1ef894
void sub_001EF740_0x1ef740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF740_0x1ef740");
#endif

    switch (ctx->pc) {
        case 0x1ef778u: goto label_1ef778;
        case 0x1ef788u: goto label_1ef788;
        case 0x1ef7f4u: goto label_1ef7f4;
        case 0x1ef844u: goto label_1ef844;
        default: break;
    }

    ctx->pc = 0x1ef740u;

    // 0x1ef740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef744: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ef744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ef748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef74c: 0x9083004f  lbu         $v1, 0x4F($a0)
    ctx->pc = 0x1ef74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x1ef750: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ef750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ef754: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EF754u;
    {
        const bool branch_taken_0x1ef754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF754u;
        // 0x1ef758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef754) {
            ctx->pc = 0x1EF7B0u;
            goto label_1ef7b0;
        }
    }
    ctx->pc = 0x1EF75Cu;
    // 0x1ef75c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1ef75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ef760: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF760u;
    {
        const bool branch_taken_0x1ef760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF760u;
        // 0x1ef764: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef760) {
            ctx->pc = 0x1EF7B0u;
            goto label_1ef7b0;
        }
    }
    ctx->pc = 0x1EF768u;
    // 0x1ef768: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1ef76c: 0x902540a4  lbu         $a1, 0x40A4($at)
    ctx->pc = 0x1ef76cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16548)));
    // 0x1ef770: 0xc0ce31c  jal         func_338C70
    ctx->pc = 0x1EF770u;
    SET_GPR_U32(ctx, 31, 0x1EF778u);
    ctx->pc = 0x1EF774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF770u;
    // 0x1ef774: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x1EF770u, 0x1EF778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF778u;
label_1ef778:
    // 0x1ef778: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF778u;
    {
        const bool branch_taken_0x1ef778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF778u;
        // 0x1ef77c: 0x3c040091  lui         $a0, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef778) {
            ctx->pc = 0x1EF7B0u;
            goto label_1ef7b0;
        }
    }
    ctx->pc = 0x1EF780u;
    // 0x1ef780: 0xc0ce684  jal         func_339A10
    ctx->pc = 0x1EF780u;
    SET_GPR_U32(ctx, 31, 0x1EF788u);
    ctx->pc = 0x1EF784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF780u;
    // 0x1ef784: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339A10u, 0x1EF780u, 0x1EF788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF788u;
label_1ef788:
    // 0x1ef788: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1ef78c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ef78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ef790: 0x8c23cc34  lw          $v1, -0x33CC($at)
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x82CC34u));
    // 0x1ef794: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ef794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ef798: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x1ef798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x1ef79c: 0xac22cc34  sw          $v0, -0x33CC($at)
    ctx->pc = 0x1ef79cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x82CC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x82CC34u, _value); } while (0);
    // 0x1ef7a0: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1ef7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef7a4: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x1ef7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x1ef7a8: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x1ef7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef7ac: 0x0  nop
    ctx->pc = 0x1ef7acu;
    // NOP
label_1ef7b0:
    // 0x1ef7b0: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1ef7b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef7b4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ef7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ef7b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF7B8u;
    {
        const bool branch_taken_0x1ef7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B8u;
        // 0x1ef7bc: 0x306200fe  andi        $v0, $v1, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7b8) {
            ctx->pc = 0x1EF7C8u;
            goto label_1ef7c8;
        }
    }
    ctx->pc = 0x1EF7C0u;
    // 0x1ef7c0: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x1ef7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef7c4: 0x0  nop
    ctx->pc = 0x1ef7c4u;
    // NOP
label_1ef7c8:
    // 0x1ef7c8: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1ef7c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef7cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ef7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1ef7d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EF7D0u;
    {
        const bool branch_taken_0x1ef7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D0u;
        // 0x1ef7d4: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7d0) {
            ctx->pc = 0x1EF808u;
            goto label_1ef808;
        }
    }
    ctx->pc = 0x1EF7D8u;
    // 0x1ef7d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF7D8u;
    {
        const bool branch_taken_0x1ef7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D8u;
        // 0x1ef7dc: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7d8) {
            ctx->pc = 0x1EF808u;
            goto label_1ef808;
        }
    }
    ctx->pc = 0x1EF7E0u;
    // 0x1ef7e0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1ef7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1ef7e4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ef7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ef7e8: 0x8c25a3c0  lw          $a1, -0x5C40($at)
    ctx->pc = 0x1ef7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
    // 0x1ef7ec: 0xc0cea38  jal         func_33A8E0
    ctx->pc = 0x1EF7ECu;
    SET_GPR_U32(ctx, 31, 0x1EF7F4u);
    ctx->pc = 0x1EF7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7ECu;
    // 0x1ef7f0: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A8E0u, 0x1EF7ECu, 0x1EF7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7F4u;
label_1ef7f4:
    // 0x1ef7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF7F4u;
    {
        const bool branch_taken_0x1ef7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7f4) {
            ctx->pc = 0x1EF808u;
            goto label_1ef808;
        }
    }
    ctx->pc = 0x1EF7FCu;
    // 0x1ef7fc: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1ef7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef800: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x1ef800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x1ef804: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x1ef804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
label_1ef808:
    // 0x1ef808: 0x9203004f  lbu         $v1, 0x4F($s0)
    ctx->pc = 0x1ef808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef80c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1ef80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1ef810: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF810u;
    {
        const bool branch_taken_0x1ef810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF810u;
        // 0x1ef814: 0x306200fb  andi        $v0, $v1, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef810) {
            ctx->pc = 0x1EF820u;
            goto label_1ef820;
        }
    }
    ctx->pc = 0x1EF818u;
    // 0x1ef818: 0xa202004f  sb          $v0, 0x4F($s0)
    ctx->pc = 0x1ef818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef81c: 0x0  nop
    ctx->pc = 0x1ef81cu;
    // NOP
label_1ef820:
    // 0x1ef820: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1ef820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef824: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1ef824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1ef828: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF828u;
    {
        const bool branch_taken_0x1ef828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF828u;
        // 0x1ef82c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef828) {
            ctx->pc = 0x1EF880u;
            goto label_1ef880;
        }
    }
    ctx->pc = 0x1EF830u;
    // 0x1ef830: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x1ef830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x1ef834: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1ef834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1ef838: 0x8c25a3c0  lw          $a1, -0x5C40($at)
    ctx->pc = 0x1ef838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
    // 0x1ef83c: 0xc0cea38  jal         func_33A8E0
    ctx->pc = 0x1EF83Cu;
    SET_GPR_U32(ctx, 31, 0x1EF844u);
    ctx->pc = 0x1EF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF83Cu;
    // 0x1ef840: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A8E0u, 0x1EF83Cu, 0x1EF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF844u;
label_1ef844:
    // 0x1ef844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF844u;
    {
        const bool branch_taken_0x1ef844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef844) {
            ctx->pc = 0x1EF860u;
            goto label_1ef860;
        }
    }
    ctx->pc = 0x1EF84Cu;
    // 0x1ef84c: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1ef84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef850: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x1ef850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x1ef854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EF854u;
    {
        const bool branch_taken_0x1ef854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF854u;
        // 0x1ef858: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef854) {
            ctx->pc = 0x1EF880u;
            goto label_1ef880;
        }
    }
    ctx->pc = 0x1EF85Cu;
    // 0x1ef85c: 0x0  nop
    ctx->pc = 0x1ef85cu;
    // NOP
label_1ef860:
    // 0x1ef860: 0x97838830  lhu         $v1, -0x77D0($gp)
    ctx->pc = 0x1ef860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936624)));
    // 0x1ef864: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF864u;
    {
        const bool branch_taken_0x1ef864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef864) {
            ctx->pc = 0x1EF880u;
            goto label_1ef880;
        }
    }
    ctx->pc = 0x1EF86Cu;
    // 0x1ef86c: 0x8f828834  lw          $v0, -0x77CC($gp)
    ctx->pc = 0x1ef86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936628)));
    // 0x1ef870: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF870u;
    {
        const bool branch_taken_0x1ef870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1EF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF870u;
        // 0x1ef874: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef870) {
            ctx->pc = 0x1EF880u;
            goto label_1ef880;
        }
    }
    ctx->pc = 0x1EF878u;
    // 0x1ef878: 0xa7828830  sh          $v0, -0x77D0($gp)
    ctx->pc = 0x1ef878u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936624), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ef87c: 0x0  nop
    ctx->pc = 0x1ef87cu;
    // NOP
label_1ef880:
    // 0x1ef880: 0x9202004f  lbu         $v0, 0x4F($s0)
    ctx->pc = 0x1ef880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 79)));
    // 0x1ef884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ef884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF88Cu;
        // 0x1ef890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF894u;
}
