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

// Function: sub_00150910
// Address: 0x150910 - 0x1512c0
void sub_00150910_0x150910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150910_0x150910");
#endif

    switch (ctx->pc) {
        case 0x150938u: goto label_150938;
        case 0x150940u: goto label_150940;
        case 0x150950u: goto label_150950;
        case 0x150960u: goto label_150960;
        case 0x150994u: goto label_150994;
        case 0x1509dcu: goto label_1509dc;
        case 0x150a0cu: goto label_150a0c;
        case 0x150a3cu: goto label_150a3c;
        case 0x150a4cu: goto label_150a4c;
        case 0x150afcu: goto label_150afc;
        case 0x150b1cu: goto label_150b1c;
        case 0x150b3cu: goto label_150b3c;
        case 0x150b5cu: goto label_150b5c;
        case 0x150b7cu: goto label_150b7c;
        case 0x150b9cu: goto label_150b9c;
        case 0x150bbcu: goto label_150bbc;
        case 0x150bdcu: goto label_150bdc;
        case 0x150bfcu: goto label_150bfc;
        case 0x150c00u: goto label_150c00;
        case 0x150c1cu: goto label_150c1c;
        case 0x150c3cu: goto label_150c3c;
        case 0x150c5cu: goto label_150c5c;
        case 0x150c7cu: goto label_150c7c;
        case 0x150c9cu: goto label_150c9c;
        case 0x150cbcu: goto label_150cbc;
        case 0x150cd0u: goto label_150cd0;
        case 0x150cdcu: goto label_150cdc;
        case 0x150d44u: goto label_150d44;
        case 0x150d6cu: goto label_150d6c;
        case 0x150f20u: goto label_150f20;
        case 0x150f30u: goto label_150f30;
        case 0x150f40u: goto label_150f40;
        case 0x150f50u: goto label_150f50;
        case 0x150f60u: goto label_150f60;
        case 0x150f70u: goto label_150f70;
        case 0x150f80u: goto label_150f80;
        case 0x150f90u: goto label_150f90;
        case 0x150fa0u: goto label_150fa0;
        case 0x150fb0u: goto label_150fb0;
        case 0x150fc0u: goto label_150fc0;
        case 0x150fd0u: goto label_150fd0;
        case 0x150fe0u: goto label_150fe0;
        case 0x150ff0u: goto label_150ff0;
        case 0x151000u: goto label_151000;
        case 0x151010u: goto label_151010;
        case 0x151020u: goto label_151020;
        case 0x151030u: goto label_151030;
        case 0x151040u: goto label_151040;
        case 0x151050u: goto label_151050;
        case 0x151060u: goto label_151060;
        case 0x151070u: goto label_151070;
        case 0x151080u: goto label_151080;
        case 0x151090u: goto label_151090;
        case 0x1510a0u: goto label_1510a0;
        case 0x1510b0u: goto label_1510b0;
        case 0x1510c0u: goto label_1510c0;
        case 0x1510d0u: goto label_1510d0;
        case 0x1510e0u: goto label_1510e0;
        case 0x1510f0u: goto label_1510f0;
        case 0x151100u: goto label_151100;
        case 0x151110u: goto label_151110;
        case 0x151120u: goto label_151120;
        case 0x151130u: goto label_151130;
        case 0x151140u: goto label_151140;
        case 0x151150u: goto label_151150;
        case 0x151160u: goto label_151160;
        case 0x151170u: goto label_151170;
        case 0x151180u: goto label_151180;
        case 0x151190u: goto label_151190;
        case 0x1511a0u: goto label_1511a0;
        case 0x1511e0u: goto label_1511e0;
        default: break;
    }

    ctx->pc = 0x150910u;

    // 0x150910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x150914: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150918: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15091c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x15091cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x150920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150924: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x150924u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x150928: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x150928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x15092c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x15092cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x150930: 0xc0544b0  jal         func_1512C0
    ctx->pc = 0x150930u;
    SET_GPR_U32(ctx, 31, 0x150938u);
    ctx->pc = 0x150934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150930u;
    // 0x150934: 0xa480000c  sh          $zero, 0xC($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1512C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1512C0u, 0x150930u, 0x150938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150938u;
label_150938:
    // 0x150938: 0xc0d8e48  jal         func_363920
    ctx->pc = 0x150938u;
    SET_GPR_U32(ctx, 31, 0x150940u);
    ctx->pc = 0x15093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150938u;
    // 0x15093c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363920u, 0x150938u, 0x150940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150940u;
label_150940:
    // 0x150940: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x150940u;
    {
        const bool branch_taken_0x150940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150940u;
        // 0x150944: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150940) {
            ctx->pc = 0x150A40u;
            goto label_150a40;
        }
    }
    ctx->pc = 0x150948u;
    // 0x150948: 0xc054568  jal         func_1515A0
    ctx->pc = 0x150948u;
    SET_GPR_U32(ctx, 31, 0x150950u);
    ctx->pc = 0x15094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150948u;
    // 0x15094c: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x150948u, 0x150950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150950u;
label_150950:
    // 0x150950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150950u;
    {
        const bool branch_taken_0x150950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150950) {
            ctx->pc = 0x150978u;
            goto label_150978;
        }
    }
    ctx->pc = 0x150958u;
    // 0x150958: 0xc0d2838  jal         func_34A0E0
    ctx->pc = 0x150958u;
    SET_GPR_U32(ctx, 31, 0x150960u);
    ctx->pc = 0x34A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A0E0u, 0x150958u, 0x150960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150960u;
label_150960:
    // 0x150960: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150964: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x150968: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x150968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x15096c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x15096cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150970: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x150970u;
    {
        const bool branch_taken_0x150970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150970u;
        // 0x150974: 0xac2295a8  sw          $v0, -0x6A58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150970) {
            ctx->pc = 0x1509B0u;
            goto label_1509b0;
        }
    }
    ctx->pc = 0x150978u;
label_150978:
    // 0x150978: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x15097c: 0x8c2295a8  lw          $v0, -0x6A58($at)
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8095A8u));
    // 0x150980: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x150980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x150984: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x150984u;
    {
        const bool branch_taken_0x150984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150984) {
            ctx->pc = 0x1509B0u;
            goto label_1509b0;
        }
    }
    ctx->pc = 0x15098Cu;
    // 0x15098c: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x15098Cu;
    SET_GPR_U32(ctx, 31, 0x150994u);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x15098Cu, 0x150994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150994u;
label_150994:
    // 0x150994: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x150998: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x150998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x15099c: 0x8c2395a8  lw          $v1, -0x6A58($at)
    ctx->pc = 0x15099cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8095A8u));
    // 0x1509a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1509a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1509a4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1509a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1509a8: 0xac2295a8  sw          $v0, -0x6A58($at)
    ctx->pc = 0x1509a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8095A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8095A8u, _value); } while (0);
    // 0x1509ac: 0x0  nop
    ctx->pc = 0x1509acu;
    // NOP
label_1509b0:
    // 0x1509b0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1509b4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1509b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1509b8: 0x24020181  addiu       $v0, $zero, 0x181
    ctx->pc = 0x1509b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x1509bc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1509BCu;
    {
        const bool branch_taken_0x1509bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1509C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509BCu;
        // 0x1509c0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509bc) {
            ctx->pc = 0x1509E0u;
            goto label_1509e0;
        }
    }
    ctx->pc = 0x1509C4u;
    // 0x1509c4: 0x24020ff1  addiu       $v0, $zero, 0xFF1
    ctx->pc = 0x1509c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4081));
    // 0x1509c8: 0x94236ac6  lhu         $v1, 0x6AC6($at)
    ctx->pc = 0x1509c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27334)));
    // 0x1509cc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1509CCu;
    {
        const bool branch_taken_0x1509cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1509cc) {
            ctx->pc = 0x1509E0u;
            goto label_1509e0;
        }
    }
    ctx->pc = 0x1509D4u;
    // 0x1509d4: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x1509D4u;
    SET_GPR_U32(ctx, 31, 0x1509DCu);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x1509D4u, 0x1509DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509DCu;
label_1509dc:
    // 0x1509dc: 0x0  nop
    ctx->pc = 0x1509dcu;
    // NOP
label_1509e0:
    // 0x1509e0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1509e4: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x1509e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1509e8: 0x24020241  addiu       $v0, $zero, 0x241
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x1509ec: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1509ECu;
    {
        const bool branch_taken_0x1509ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1509F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509ECu;
        // 0x1509f0: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509ec) {
            ctx->pc = 0x150A10u;
            goto label_150a10;
        }
    }
    ctx->pc = 0x1509F4u;
    // 0x1509f4: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x1509f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    // 0x1509f8: 0x94236ac6  lhu         $v1, 0x6AC6($at)
    ctx->pc = 0x1509f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27334)));
    // 0x1509fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1509FCu;
    {
        const bool branch_taken_0x1509fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1509fc) {
            ctx->pc = 0x150A10u;
            goto label_150a10;
        }
    }
    ctx->pc = 0x150A04u;
    // 0x150a04: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x150A04u;
    SET_GPR_U32(ctx, 31, 0x150A0Cu);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x150A04u, 0x150A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A0Cu;
label_150a0c:
    // 0x150a0c: 0x0  nop
    ctx->pc = 0x150a0cu;
    // NOP
label_150a10:
    // 0x150a10: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150a14: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x150a14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x150a18: 0x24020640  addiu       $v0, $zero, 0x640
    ctx->pc = 0x150a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x150a1c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x150A1Cu;
    {
        const bool branch_taken_0x150a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A1Cu;
        // 0x150a20: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a1c) {
            ctx->pc = 0x150A40u;
            goto label_150a40;
        }
    }
    ctx->pc = 0x150A24u;
    // 0x150a24: 0x24020ff7  addiu       $v0, $zero, 0xFF7
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4087));
    // 0x150a28: 0x94236ac6  lhu         $v1, 0x6AC6($at)
    ctx->pc = 0x150a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27334)));
    // 0x150a2c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150A2Cu;
    {
        const bool branch_taken_0x150a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150a2c) {
            ctx->pc = 0x150A40u;
            goto label_150a40;
        }
    }
    ctx->pc = 0x150A34u;
    // 0x150a34: 0xc0d2818  jal         func_34A060
    ctx->pc = 0x150A34u;
    SET_GPR_U32(ctx, 31, 0x150A3Cu);
    ctx->pc = 0x34A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34A060u, 0x150A34u, 0x150A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A3Cu;
label_150a3c:
    // 0x150a3c: 0x0  nop
    ctx->pc = 0x150a3cu;
    // NOP
label_150a40:
    // 0x150a40: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150a44: 0xc063990  jal         func_18E640
    ctx->pc = 0x150A44u;
    SET_GPR_U32(ctx, 31, 0x150A4Cu);
    ctx->pc = 0x150A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150A44u;
    // 0x150a48: 0x248424a0  addiu       $a0, $a0, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E640u, 0x150A44u, 0x150A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A4Cu;
label_150a4c:
    // 0x150a4c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x150a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150a50: 0x24020249  addiu       $v0, $zero, 0x249
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 585));
    // 0x150a54: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x150A54u;
    {
        const bool branch_taken_0x150a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A54u;
        // 0x150a58: 0x24020248  addiu       $v0, $zero, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a54) {
            ctx->pc = 0x150C88u;
            goto label_150c88;
        }
    }
    ctx->pc = 0x150A5Cu;
    // 0x150a5c: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x150A5Cu;
    {
        const bool branch_taken_0x150a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150a5c) {
            ctx->pc = 0x150C68u;
            goto label_150c68;
        }
    }
    ctx->pc = 0x150A64u;
    // 0x150a64: 0x24020289  addiu       $v0, $zero, 0x289
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 649));
    // 0x150a68: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x150A68u;
    {
        const bool branch_taken_0x150a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A68u;
        // 0x150a6c: 0x24020f30  addiu       $v0, $zero, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a68) {
            ctx->pc = 0x150C48u;
            goto label_150c48;
        }
    }
    ctx->pc = 0x150A70u;
    // 0x150a70: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x150A70u;
    {
        const bool branch_taken_0x150a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150a70) {
            ctx->pc = 0x150C28u;
            goto label_150c28;
        }
    }
    ctx->pc = 0x150A78u;
    // 0x150a78: 0x24020480  addiu       $v0, $zero, 0x480
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x150a7c: 0x10620062  beq         $v1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x150A7Cu;
    {
        const bool branch_taken_0x150a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A7Cu;
        // 0x150a80: 0x2402028a  addiu       $v0, $zero, 0x28A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a7c) {
            ctx->pc = 0x150C08u;
            goto label_150c08;
        }
    }
    ctx->pc = 0x150A84u;
    // 0x150a84: 0x10620058  beq         $v1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x150A84u;
    {
        const bool branch_taken_0x150a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150a84) {
            ctx->pc = 0x150BE8u;
            goto label_150be8;
        }
    }
    ctx->pc = 0x150A8Cu;
    // 0x150a8c: 0x24020287  addiu       $v0, $zero, 0x287
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 647));
    // 0x150a90: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x150A90u;
    {
        const bool branch_taken_0x150a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A90u;
        // 0x150a94: 0x24020285  addiu       $v0, $zero, 0x285 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 645));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a90) {
            ctx->pc = 0x150BC8u;
            goto label_150bc8;
        }
    }
    ctx->pc = 0x150A98u;
    // 0x150a98: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x150A98u;
    {
        const bool branch_taken_0x150a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150a98) {
            ctx->pc = 0x150BA8u;
            goto label_150ba8;
        }
    }
    ctx->pc = 0x150AA0u;
    // 0x150aa0: 0x24020281  addiu       $v0, $zero, 0x281
    ctx->pc = 0x150aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 641));
    // 0x150aa4: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x150AA4u;
    {
        const bool branch_taken_0x150aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AA4u;
        // 0x150aa8: 0x24020247  addiu       $v0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150aa4) {
            ctx->pc = 0x150B88u;
            goto label_150b88;
        }
    }
    ctx->pc = 0x150AACu;
    // 0x150aac: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x150AACu;
    {
        const bool branch_taken_0x150aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150aac) {
            ctx->pc = 0x150B68u;
            goto label_150b68;
        }
    }
    ctx->pc = 0x150AB4u;
    // 0x150ab4: 0x24020245  addiu       $v0, $zero, 0x245
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    // 0x150ab8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x150AB8u;
    {
        const bool branch_taken_0x150ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AB8u;
        // 0x150abc: 0x24020244  addiu       $v0, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ab8) {
            ctx->pc = 0x150B48u;
            goto label_150b48;
        }
    }
    ctx->pc = 0x150AC0u;
    // 0x150ac0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x150AC0u;
    {
        const bool branch_taken_0x150ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150ac0) {
            ctx->pc = 0x150B28u;
            goto label_150b28;
        }
    }
    ctx->pc = 0x150AC8u;
    // 0x150ac8: 0x24020242  addiu       $v0, $zero, 0x242
    ctx->pc = 0x150ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 578));
    // 0x150acc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x150ACCu;
    {
        const bool branch_taken_0x150acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ACCu;
        // 0x150ad0: 0x24020241  addiu       $v0, $zero, 0x241 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150acc) {
            ctx->pc = 0x150B08u;
            goto label_150b08;
        }
    }
    ctx->pc = 0x150AD4u;
    // 0x150ad4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150AD4u;
    {
        const bool branch_taken_0x150ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x150ad4) {
            ctx->pc = 0x150AE8u;
            goto label_150ae8;
        }
    }
    ctx->pc = 0x150ADCu;
    // 0x150adc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x150ADCu;
    {
        const bool branch_taken_0x150adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150adc) {
            ctx->pc = 0x150CA8u;
            goto label_150ca8;
        }
    }
    ctx->pc = 0x150AE4u;
    // 0x150ae4: 0x0  nop
    ctx->pc = 0x150ae4u;
    // NOP
label_150ae8:
    // 0x150ae8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150aec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150af0: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150af4: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150AF4u;
    SET_GPR_U32(ctx, 31, 0x150AFCu);
    ctx->pc = 0x150AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150AF4u;
    // 0x150af8: 0x24a54b08  addiu       $a1, $a1, 0x4B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150AF4u, 0x150AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AFCu;
label_150afc:
    // 0x150afc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x150AFCu;
    {
        const bool branch_taken_0x150afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150afc) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150B04u;
    // 0x150b04: 0x0  nop
    ctx->pc = 0x150b04u;
    // NOP
label_150b08:
    // 0x150b08: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150b0c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150b10: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150b14: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150B14u;
    SET_GPR_U32(ctx, 31, 0x150B1Cu);
    ctx->pc = 0x150B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B14u;
    // 0x150b18: 0x24a54ad8  addiu       $a1, $a1, 0x4AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150B14u, 0x150B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B1Cu;
label_150b1c:
    // 0x150b1c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x150B1Cu;
    {
        const bool branch_taken_0x150b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b1c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150B24u;
    // 0x150b24: 0x0  nop
    ctx->pc = 0x150b24u;
    // NOP
label_150b28:
    // 0x150b28: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150b2c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150b30: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150b34: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150B34u;
    SET_GPR_U32(ctx, 31, 0x150B3Cu);
    ctx->pc = 0x150B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B34u;
    // 0x150b38: 0x24a54a90  addiu       $a1, $a1, 0x4A90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150B34u, 0x150B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B3Cu;
label_150b3c:
    // 0x150b3c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x150B3Cu;
    {
        const bool branch_taken_0x150b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b3c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150B44u;
    // 0x150b44: 0x0  nop
    ctx->pc = 0x150b44u;
    // NOP
label_150b48:
    // 0x150b48: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150b4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150b50: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150b54: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150B54u;
    SET_GPR_U32(ctx, 31, 0x150B5Cu);
    ctx->pc = 0x150B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B54u;
    // 0x150b58: 0x24a54aa8  addiu       $a1, $a1, 0x4AA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150B54u, 0x150B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B5Cu;
label_150b5c:
    // 0x150b5c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x150B5Cu;
    {
        const bool branch_taken_0x150b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b5c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150B64u;
    // 0x150b64: 0x0  nop
    ctx->pc = 0x150b64u;
    // NOP
label_150b68:
    // 0x150b68: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150b6c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150b70: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150b74: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150B74u;
    SET_GPR_U32(ctx, 31, 0x150B7Cu);
    ctx->pc = 0x150B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B74u;
    // 0x150b78: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150B74u, 0x150B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B7Cu;
label_150b7c:
    // 0x150b7c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x150B7Cu;
    {
        const bool branch_taken_0x150b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b7c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150B84u;
    // 0x150b84: 0x0  nop
    ctx->pc = 0x150b84u;
    // NOP
label_150b88:
    // 0x150b88: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150b8c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150b90: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150b94: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150B94u;
    SET_GPR_U32(ctx, 31, 0x150B9Cu);
    ctx->pc = 0x150B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B94u;
    // 0x150b98: 0x24a54a78  addiu       $a1, $a1, 0x4A78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150B94u, 0x150B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B9Cu;
label_150b9c:
    // 0x150b9c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x150B9Cu;
    {
        const bool branch_taken_0x150b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b9c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150BA4u;
    // 0x150ba4: 0x0  nop
    ctx->pc = 0x150ba4u;
    // NOP
label_150ba8:
    // 0x150ba8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150bac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150bb0: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150bb4: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150BB4u;
    SET_GPR_U32(ctx, 31, 0x150BBCu);
    ctx->pc = 0x150BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BB4u;
    // 0x150bb8: 0x24a54af0  addiu       $a1, $a1, 0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150BB4u, 0x150BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BBCu;
label_150bbc:
    // 0x150bbc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x150BBCu;
    {
        const bool branch_taken_0x150bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bbc) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150BC4u;
    // 0x150bc4: 0x0  nop
    ctx->pc = 0x150bc4u;
    // NOP
label_150bc8:
    // 0x150bc8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150bcc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150bd0: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150bd4: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150BD4u;
    SET_GPR_U32(ctx, 31, 0x150BDCu);
    ctx->pc = 0x150BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BD4u;
    // 0x150bd8: 0x24a54b20  addiu       $a1, $a1, 0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150BD4u, 0x150BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BDCu;
label_150bdc:
    // 0x150bdc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x150BDCu;
    {
        const bool branch_taken_0x150bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bdc) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150BE4u;
    // 0x150be4: 0x0  nop
    ctx->pc = 0x150be4u;
    // NOP
label_150be8:
    // 0x150be8: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150bec: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150becu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150bf0: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150bf4: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150BF4u;
    SET_GPR_U32(ctx, 31, 0x150BFCu);
    ctx->pc = 0x150BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150BF4u;
    // 0x150bf8: 0x24a54b38  addiu       $a1, $a1, 0x4B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150BF4u, 0x150BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BFCu;
label_150bfc:
    // 0x150bfc: 0x10000034  b           . + 4 + (0x34 << 2)
label_150c00:
    if (ctx->pc == 0x150C00u) {
        ctx->pc = 0x150C04u;
        goto label_fallthrough_0x150bfc;
    }
    ctx->pc = 0x150BFCu;
    {
        const bool branch_taken_0x150bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bfc) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
label_fallthrough_0x150bfc:
    ctx->pc = 0x150C04u;
    // 0x150c04: 0x0  nop
    ctx->pc = 0x150c04u;
    // NOP
label_150c08:
    // 0x150c08: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150c0c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150c10: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150c14: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150C14u;
    SET_GPR_U32(ctx, 31, 0x150C1Cu);
    ctx->pc = 0x150C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C14u;
    // 0x150c18: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150C14u, 0x150C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C1Cu;
label_150c1c:
    // 0x150c1c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x150C1Cu;
    {
        const bool branch_taken_0x150c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c1c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150C24u;
    // 0x150c24: 0x0  nop
    ctx->pc = 0x150c24u;
    // NOP
label_150c28:
    // 0x150c28: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150c2c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150c30: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150c34: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150C34u;
    SET_GPR_U32(ctx, 31, 0x150C3Cu);
    ctx->pc = 0x150C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C34u;
    // 0x150c38: 0x24a54b50  addiu       $a1, $a1, 0x4B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150C34u, 0x150C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C3Cu;
label_150c3c:
    // 0x150c3c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x150C3Cu;
    {
        const bool branch_taken_0x150c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c3c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150C44u;
    // 0x150c44: 0x0  nop
    ctx->pc = 0x150c44u;
    // NOP
label_150c48:
    // 0x150c48: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150c4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150c50: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150c54: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150C54u;
    SET_GPR_U32(ctx, 31, 0x150C5Cu);
    ctx->pc = 0x150C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C54u;
    // 0x150c58: 0x24a54b68  addiu       $a1, $a1, 0x4B68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150C54u, 0x150C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C5Cu;
label_150c5c:
    // 0x150c5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x150C5Cu;
    {
        const bool branch_taken_0x150c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c5c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150C64u;
    // 0x150c64: 0x0  nop
    ctx->pc = 0x150c64u;
    // NOP
label_150c68:
    // 0x150c68: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150c6c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150c70: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150c74: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150C74u;
    SET_GPR_U32(ctx, 31, 0x150C7Cu);
    ctx->pc = 0x150C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C74u;
    // 0x150c78: 0x24a54b98  addiu       $a1, $a1, 0x4B98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150C74u, 0x150C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C7Cu;
label_150c7c:
    // 0x150c7c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x150C7Cu;
    {
        const bool branch_taken_0x150c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c7c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150C84u;
    // 0x150c84: 0x0  nop
    ctx->pc = 0x150c84u;
    // NOP
label_150c88:
    // 0x150c88: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x150c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x150c8c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x150c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x150c90: 0x248424a0  addiu       $a0, $a0, 0x24A0
    ctx->pc = 0x150c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    // 0x150c94: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150C94u;
    SET_GPR_U32(ctx, 31, 0x150C9Cu);
    ctx->pc = 0x150C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150C94u;
    // 0x150c98: 0x24a54b80  addiu       $a1, $a1, 0x4B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150C94u, 0x150C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C9Cu;
label_150c9c:
    // 0x150c9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x150C9Cu;
    {
        const bool branch_taken_0x150c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150c9c) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150CA4u;
    // 0x150ca4: 0x0  nop
    ctx->pc = 0x150ca4u;
    // NOP
label_150ca8:
    // 0x150ca8: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x150cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cb4: 0xc0a2a8c  jal         func_28AA30
    ctx->pc = 0x150CB4u;
    SET_GPR_U32(ctx, 31, 0x150CBCu);
    ctx->pc = 0x150CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CB4u;
    // 0x150cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA30u, 0x150CB4u, 0x150CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CBCu;
label_150cbc:
    // 0x150cbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150CBCu;
    {
        const bool branch_taken_0x150cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CBCu;
        // 0x150cc0: 0x3c040084  lui         $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cbc) {
            ctx->pc = 0x150CD0u;
            goto label_150cd0;
        }
    }
    ctx->pc = 0x150CC4u;
    // 0x150cc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cc8: 0xc0639b8  jal         func_18E6E0
    ctx->pc = 0x150CC8u;
    SET_GPR_U32(ctx, 31, 0x150CD0u);
    ctx->pc = 0x150CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CC8u;
    // 0x150ccc: 0x248424a0  addiu       $a0, $a0, 0x24A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6E0u, 0x150CC8u, 0x150CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CD0u;
label_150cd0:
    // 0x150cd0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x150cd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150cd4: 0xc0d8ea0  jal         func_363A80
    ctx->pc = 0x150CD4u;
    SET_GPR_U32(ctx, 31, 0x150CDCu);
    ctx->pc = 0x150CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150CD4u;
    // 0x150cd8: 0x82050008  lb          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A80u, 0x150CD4u, 0x150CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CDCu;
label_150cdc:
    // 0x150cdc: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x150cdcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150ce0: 0x24030c83  addiu       $v1, $zero, 0xC83
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3203));
    // 0x150ce4: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x150CE4u;
    {
        const bool branch_taken_0x150ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CE4u;
        // 0x150ce8: 0x24030c82  addiu       $v1, $zero, 0xC82 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ce4) {
            ctx->pc = 0x150D50u;
            goto label_150d50;
        }
    }
    ctx->pc = 0x150CECu;
    // 0x150cec: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x150CECu;
    {
        const bool branch_taken_0x150cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150cec) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150CF4u;
    // 0x150cf4: 0x24030c81  addiu       $v1, $zero, 0xC81
    ctx->pc = 0x150cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3201));
    // 0x150cf8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x150CF8u;
    {
        const bool branch_taken_0x150cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150CF8u;
        // 0x150cfc: 0x24030f33  addiu       $v1, $zero, 0xF33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3891));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150cf8) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150D00u;
    // 0x150d00: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150D00u;
    {
        const bool branch_taken_0x150d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150d00) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150D08u;
    // 0x150d08: 0x24030f32  addiu       $v1, $zero, 0xF32
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3890));
    // 0x150d0c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150D0Cu;
    {
        const bool branch_taken_0x150d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D0Cu;
        // 0x150d10: 0x24030f31  addiu       $v1, $zero, 0xF31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3889));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d0c) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150D14u;
    // 0x150d14: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150D14u;
    {
        const bool branch_taken_0x150d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x150d14) {
            ctx->pc = 0x150D28u;
            goto label_150d28;
        }
    }
    ctx->pc = 0x150D1Cu;
    // 0x150d1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x150D1Cu;
    {
        const bool branch_taken_0x150d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d1c) {
            ctx->pc = 0x150D70u;
            goto label_150d70;
        }
    }
    ctx->pc = 0x150D24u;
    // 0x150d24: 0x0  nop
    ctx->pc = 0x150d24u;
    // NOP
label_150d28:
    // 0x150d28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x150d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150d2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x150d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150d30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150d34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d3c: 0xc0a9a08  jal         func_2A6820
    ctx->pc = 0x150D3Cu;
    SET_GPR_U32(ctx, 31, 0x150D44u);
    ctx->pc = 0x150D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D3Cu;
    // 0x150d40: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6820u, 0x150D3Cu, 0x150D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D44u;
label_150d44:
    // 0x150d44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x150D44u;
    {
        const bool branch_taken_0x150d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d44) {
            ctx->pc = 0x150D70u;
            goto label_150d70;
        }
    }
    ctx->pc = 0x150D4Cu;
    // 0x150d4c: 0x0  nop
    ctx->pc = 0x150d4cu;
    // NOP
label_150d50:
    // 0x150d50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x150d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150d54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150d58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x150d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x150d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150d64: 0xc0a9a08  jal         func_2A6820
    ctx->pc = 0x150D64u;
    SET_GPR_U32(ctx, 31, 0x150D6Cu);
    ctx->pc = 0x150D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150D64u;
    // 0x150d68: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6820u, 0x150D64u, 0x150D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D6Cu;
label_150d6c:
    // 0x150d6c: 0x0  nop
    ctx->pc = 0x150d6cu;
    // NOP
label_150d70:
    // 0x150d70: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x150d70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150d74: 0x24040e97  addiu       $a0, $zero, 0xE97
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3735));
    // 0x150d78: 0x10640107  beq         $v1, $a0, . + 4 + (0x107 << 2)
    ctx->pc = 0x150D78u;
    {
        const bool branch_taken_0x150d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D78u;
        // 0x150d7c: 0x24040e96  addiu       $a0, $zero, 0xE96 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3734));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d78) {
            ctx->pc = 0x151198u;
            goto label_151198;
        }
    }
    ctx->pc = 0x150D80u;
    // 0x150d80: 0x10640101  beq         $v1, $a0, . + 4 + (0x101 << 2)
    ctx->pc = 0x150D80u;
    {
        const bool branch_taken_0x150d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150d80) {
            ctx->pc = 0x151188u;
            goto label_151188;
        }
    }
    ctx->pc = 0x150D88u;
    // 0x150d88: 0x24040e95  addiu       $a0, $zero, 0xE95
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3733));
    // 0x150d8c: 0x106400fa  beq         $v1, $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x150D8Cu;
    {
        const bool branch_taken_0x150d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D8Cu;
        // 0x150d90: 0x24040e94  addiu       $a0, $zero, 0xE94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d8c) {
            ctx->pc = 0x151178u;
            goto label_151178;
        }
    }
    ctx->pc = 0x150D94u;
    // 0x150d94: 0x106400f4  beq         $v1, $a0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x150D94u;
    {
        const bool branch_taken_0x150d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150d94) {
            ctx->pc = 0x151168u;
            goto label_151168;
        }
    }
    ctx->pc = 0x150D9Cu;
    // 0x150d9c: 0x24040e84  addiu       $a0, $zero, 0xE84
    ctx->pc = 0x150d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3716));
    // 0x150da0: 0x106400ed  beq         $v1, $a0, . + 4 + (0xED << 2)
    ctx->pc = 0x150DA0u;
    {
        const bool branch_taken_0x150da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DA0u;
        // 0x150da4: 0x24040a41  addiu       $a0, $zero, 0xA41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2625));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150da0) {
            ctx->pc = 0x151158u;
            goto label_151158;
        }
    }
    ctx->pc = 0x150DA8u;
    // 0x150da8: 0x106400e7  beq         $v1, $a0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x150DA8u;
    {
        const bool branch_taken_0x150da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150da8) {
            ctx->pc = 0x151148u;
            goto label_151148;
        }
    }
    ctx->pc = 0x150DB0u;
    // 0x150db0: 0x240408cc  addiu       $a0, $zero, 0x8CC
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2252));
    // 0x150db4: 0x106400e0  beq         $v1, $a0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x150DB4u;
    {
        const bool branch_taken_0x150db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DB4u;
        // 0x150db8: 0x240408cb  addiu       $a0, $zero, 0x8CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150db4) {
            ctx->pc = 0x151138u;
            goto label_151138;
        }
    }
    ctx->pc = 0x150DBCu;
    // 0x150dbc: 0x106400da  beq         $v1, $a0, . + 4 + (0xDA << 2)
    ctx->pc = 0x150DBCu;
    {
        const bool branch_taken_0x150dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150dbc) {
            ctx->pc = 0x151128u;
            goto label_151128;
        }
    }
    ctx->pc = 0x150DC4u;
    // 0x150dc4: 0x240408ca  addiu       $a0, $zero, 0x8CA
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2250));
    // 0x150dc8: 0x106400d3  beq         $v1, $a0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x150DC8u;
    {
        const bool branch_taken_0x150dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DC8u;
        // 0x150dcc: 0x240408c9  addiu       $a0, $zero, 0x8C9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2249));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dc8) {
            ctx->pc = 0x151118u;
            goto label_151118;
        }
    }
    ctx->pc = 0x150DD0u;
    // 0x150dd0: 0x106400cd  beq         $v1, $a0, . + 4 + (0xCD << 2)
    ctx->pc = 0x150DD0u;
    {
        const bool branch_taken_0x150dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150dd0) {
            ctx->pc = 0x151108u;
            goto label_151108;
        }
    }
    ctx->pc = 0x150DD8u;
    // 0x150dd8: 0x24040649  addiu       $a0, $zero, 0x649
    ctx->pc = 0x150dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1609));
    // 0x150ddc: 0x106400c6  beq         $v1, $a0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x150DDCu;
    {
        const bool branch_taken_0x150ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DDCu;
        // 0x150de0: 0x2404056a  addiu       $a0, $zero, 0x56A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ddc) {
            ctx->pc = 0x1510F8u;
            goto label_1510f8;
        }
    }
    ctx->pc = 0x150DE4u;
    // 0x150de4: 0x106400c0  beq         $v1, $a0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x150DE4u;
    {
        const bool branch_taken_0x150de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150de4) {
            ctx->pc = 0x1510E8u;
            goto label_1510e8;
        }
    }
    ctx->pc = 0x150DECu;
    // 0x150dec: 0x24040544  addiu       $a0, $zero, 0x544
    ctx->pc = 0x150decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1348));
    // 0x150df0: 0x106400b9  beq         $v1, $a0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x150DF0u;
    {
        const bool branch_taken_0x150df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DF0u;
        // 0x150df4: 0x24040542  addiu       $a0, $zero, 0x542 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1346));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150df0) {
            ctx->pc = 0x1510D8u;
            goto label_1510d8;
        }
    }
    ctx->pc = 0x150DF8u;
    // 0x150df8: 0x106400b3  beq         $v1, $a0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x150DF8u;
    {
        const bool branch_taken_0x150df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150df8) {
            ctx->pc = 0x1510C8u;
            goto label_1510c8;
        }
    }
    ctx->pc = 0x150E00u;
    // 0x150e00: 0x240404d2  addiu       $a0, $zero, 0x4D2
    ctx->pc = 0x150e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1234));
    // 0x150e04: 0x106400ac  beq         $v1, $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x150E04u;
    {
        const bool branch_taken_0x150e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E04u;
        // 0x150e08: 0x240404d0  addiu       $a0, $zero, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e04) {
            ctx->pc = 0x1510B8u;
            goto label_1510b8;
        }
    }
    ctx->pc = 0x150E0Cu;
    // 0x150e0c: 0x106400a6  beq         $v1, $a0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x150E0Cu;
    {
        const bool branch_taken_0x150e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e0c) {
            ctx->pc = 0x1510A8u;
            goto label_1510a8;
        }
    }
    ctx->pc = 0x150E14u;
    // 0x150e14: 0x240404c2  addiu       $a0, $zero, 0x4C2
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1218));
    // 0x150e18: 0x1064009f  beq         $v1, $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x150E18u;
    {
        const bool branch_taken_0x150e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E18u;
        // 0x150e1c: 0x240404c1  addiu       $a0, $zero, 0x4C1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1217));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e18) {
            ctx->pc = 0x151098u;
            goto label_151098;
        }
    }
    ctx->pc = 0x150E20u;
    // 0x150e20: 0x10640099  beq         $v1, $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x150E20u;
    {
        const bool branch_taken_0x150e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e20) {
            ctx->pc = 0x151088u;
            goto label_151088;
        }
    }
    ctx->pc = 0x150E28u;
    // 0x150e28: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x150e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x150e2c: 0x10640092  beq         $v1, $a0, . + 4 + (0x92 << 2)
    ctx->pc = 0x150E2Cu;
    {
        const bool branch_taken_0x150e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E2Cu;
        // 0x150e30: 0x24040497  addiu       $a0, $zero, 0x497 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e2c) {
            ctx->pc = 0x151078u;
            goto label_151078;
        }
    }
    ctx->pc = 0x150E34u;
    // 0x150e34: 0x1064008c  beq         $v1, $a0, . + 4 + (0x8C << 2)
    ctx->pc = 0x150E34u;
    {
        const bool branch_taken_0x150e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e34) {
            ctx->pc = 0x151068u;
            goto label_151068;
        }
    }
    ctx->pc = 0x150E3Cu;
    // 0x150e3c: 0x24040496  addiu       $a0, $zero, 0x496
    ctx->pc = 0x150e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1174));
    // 0x150e40: 0x10640085  beq         $v1, $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x150E40u;
    {
        const bool branch_taken_0x150e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E40u;
        // 0x150e44: 0x24040495  addiu       $a0, $zero, 0x495 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1173));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e40) {
            ctx->pc = 0x151058u;
            goto label_151058;
        }
    }
    ctx->pc = 0x150E48u;
    // 0x150e48: 0x1064007f  beq         $v1, $a0, . + 4 + (0x7F << 2)
    ctx->pc = 0x150E48u;
    {
        const bool branch_taken_0x150e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e48) {
            ctx->pc = 0x151048u;
            goto label_151048;
        }
    }
    ctx->pc = 0x150E50u;
    // 0x150e50: 0x24040494  addiu       $a0, $zero, 0x494
    ctx->pc = 0x150e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
    // 0x150e54: 0x10640078  beq         $v1, $a0, . + 4 + (0x78 << 2)
    ctx->pc = 0x150E54u;
    {
        const bool branch_taken_0x150e54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E54u;
        // 0x150e58: 0x24040486  addiu       $a0, $zero, 0x486 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e54) {
            ctx->pc = 0x151038u;
            goto label_151038;
        }
    }
    ctx->pc = 0x150E5Cu;
    // 0x150e5c: 0x10640072  beq         $v1, $a0, . + 4 + (0x72 << 2)
    ctx->pc = 0x150E5Cu;
    {
        const bool branch_taken_0x150e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e5c) {
            ctx->pc = 0x151028u;
            goto label_151028;
        }
    }
    ctx->pc = 0x150E64u;
    // 0x150e64: 0x24040485  addiu       $a0, $zero, 0x485
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1157));
    // 0x150e68: 0x1064006b  beq         $v1, $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x150E68u;
    {
        const bool branch_taken_0x150e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E68u;
        // 0x150e6c: 0x24040483  addiu       $a0, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e68) {
            ctx->pc = 0x151018u;
            goto label_151018;
        }
    }
    ctx->pc = 0x150E70u;
    // 0x150e70: 0x10640065  beq         $v1, $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x150E70u;
    {
        const bool branch_taken_0x150e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e70) {
            ctx->pc = 0x151008u;
            goto label_151008;
        }
    }
    ctx->pc = 0x150E78u;
    // 0x150e78: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x150e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    // 0x150e7c: 0x1064005e  beq         $v1, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x150E7Cu;
    {
        const bool branch_taken_0x150e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E7Cu;
        // 0x150e80: 0x240403d7  addiu       $a0, $zero, 0x3D7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e7c) {
            ctx->pc = 0x150FF8u;
            goto label_150ff8;
        }
    }
    ctx->pc = 0x150E84u;
    // 0x150e84: 0x10640058  beq         $v1, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x150E84u;
    {
        const bool branch_taken_0x150e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e84) {
            ctx->pc = 0x150FE8u;
            goto label_150fe8;
        }
    }
    ctx->pc = 0x150E8Cu;
    // 0x150e8c: 0x240403d4  addiu       $a0, $zero, 0x3D4
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 980));
    // 0x150e90: 0x10640051  beq         $v1, $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x150E90u;
    {
        const bool branch_taken_0x150e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E90u;
        // 0x150e94: 0x240403c7  addiu       $a0, $zero, 0x3C7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 967));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e90) {
            ctx->pc = 0x150FD8u;
            goto label_150fd8;
        }
    }
    ctx->pc = 0x150E98u;
    // 0x150e98: 0x1064004b  beq         $v1, $a0, . + 4 + (0x4B << 2)
    ctx->pc = 0x150E98u;
    {
        const bool branch_taken_0x150e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150e98) {
            ctx->pc = 0x150FC8u;
            goto label_150fc8;
        }
    }
    ctx->pc = 0x150EA0u;
    // 0x150ea0: 0x240403c4  addiu       $a0, $zero, 0x3C4
    ctx->pc = 0x150ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x150ea4: 0x10640044  beq         $v1, $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x150EA4u;
    {
        const bool branch_taken_0x150ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EA4u;
        // 0x150ea8: 0x24040277  addiu       $a0, $zero, 0x277 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ea4) {
            ctx->pc = 0x150FB8u;
            goto label_150fb8;
        }
    }
    ctx->pc = 0x150EACu;
    // 0x150eac: 0x1064003e  beq         $v1, $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x150EACu;
    {
        const bool branch_taken_0x150eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150eac) {
            ctx->pc = 0x150FA8u;
            goto label_150fa8;
        }
    }
    ctx->pc = 0x150EB4u;
    // 0x150eb4: 0x24040275  addiu       $a0, $zero, 0x275
    ctx->pc = 0x150eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x150eb8: 0x10640037  beq         $v1, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x150EB8u;
    {
        const bool branch_taken_0x150eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EB8u;
        // 0x150ebc: 0x24040274  addiu       $a0, $zero, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150eb8) {
            ctx->pc = 0x150F98u;
            goto label_150f98;
        }
    }
    ctx->pc = 0x150EC0u;
    // 0x150ec0: 0x10640031  beq         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x150EC0u;
    {
        const bool branch_taken_0x150ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150ec0) {
            ctx->pc = 0x150F88u;
            goto label_150f88;
        }
    }
    ctx->pc = 0x150EC8u;
    // 0x150ec8: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
    // 0x150ecc: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x150ECCu;
    {
        const bool branch_taken_0x150ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150ECCu;
        // 0x150ed0: 0x24040247  addiu       $a0, $zero, 0x247 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ecc) {
            ctx->pc = 0x150F78u;
            goto label_150f78;
        }
    }
    ctx->pc = 0x150ED4u;
    // 0x150ed4: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x150ED4u;
    {
        const bool branch_taken_0x150ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150ed4) {
            ctx->pc = 0x150F68u;
            goto label_150f68;
        }
    }
    ctx->pc = 0x150EDCu;
    // 0x150edc: 0x24040245  addiu       $a0, $zero, 0x245
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    // 0x150ee0: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x150EE0u;
    {
        const bool branch_taken_0x150ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EE0u;
        // 0x150ee4: 0x24040244  addiu       $a0, $zero, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 580));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ee0) {
            ctx->pc = 0x150F58u;
            goto label_150f58;
        }
    }
    ctx->pc = 0x150EE8u;
    // 0x150ee8: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150EE8u;
    {
        const bool branch_taken_0x150ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150ee8) {
            ctx->pc = 0x150F48u;
            goto label_150f48;
        }
    }
    ctx->pc = 0x150EF0u;
    // 0x150ef0: 0x24040241  addiu       $a0, $zero, 0x241
    ctx->pc = 0x150ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    // 0x150ef4: 0x10640010  beq         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x150EF4u;
    {
        const bool branch_taken_0x150ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x150EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EF4u;
        // 0x150ef8: 0x24040182  addiu       $a0, $zero, 0x182 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ef4) {
            ctx->pc = 0x150F38u;
            goto label_150f38;
        }
    }
    ctx->pc = 0x150EFCu;
    // 0x150efc: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x150EFCu;
    {
        const bool branch_taken_0x150efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150efc) {
            ctx->pc = 0x150F28u;
            goto label_150f28;
        }
    }
    ctx->pc = 0x150F04u;
    // 0x150f04: 0x24040181  addiu       $a0, $zero, 0x181
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 385));
    // 0x150f08: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150F08u;
    {
        const bool branch_taken_0x150f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x150f08) {
            ctx->pc = 0x150F18u;
            goto label_150f18;
        }
    }
    ctx->pc = 0x150F10u;
    // 0x150f10: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x150F10u;
    {
        const bool branch_taken_0x150f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f10) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F18u;
label_150f18:
    // 0x150f18: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F18u;
    SET_GPR_U32(ctx, 31, 0x150F20u);
    ctx->pc = 0x150F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F18u;
    // 0x150f1c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F18u, 0x150F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F20u;
label_150f20:
    // 0x150f20: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x150F20u;
    {
        const bool branch_taken_0x150f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f20) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F28u;
label_150f28:
    // 0x150f28: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F28u;
    SET_GPR_U32(ctx, 31, 0x150F30u);
    ctx->pc = 0x150F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F28u;
    // 0x150f2c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F28u, 0x150F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F30u;
label_150f30:
    // 0x150f30: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x150F30u;
    {
        const bool branch_taken_0x150f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f30) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F38u;
label_150f38:
    // 0x150f38: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F38u;
    SET_GPR_U32(ctx, 31, 0x150F40u);
    ctx->pc = 0x150F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F38u;
    // 0x150f3c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F38u, 0x150F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F40u;
label_150f40:
    // 0x150f40: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x150F40u;
    {
        const bool branch_taken_0x150f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f40) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F48u;
label_150f48:
    // 0x150f48: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F48u;
    SET_GPR_U32(ctx, 31, 0x150F50u);
    ctx->pc = 0x150F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F48u;
    // 0x150f4c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F48u, 0x150F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F50u;
label_150f50:
    // 0x150f50: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x150F50u;
    {
        const bool branch_taken_0x150f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f50) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F58u;
label_150f58:
    // 0x150f58: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F58u;
    SET_GPR_U32(ctx, 31, 0x150F60u);
    ctx->pc = 0x150F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F58u;
    // 0x150f5c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F58u, 0x150F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F60u;
label_150f60:
    // 0x150f60: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x150F60u;
    {
        const bool branch_taken_0x150f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f60) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F68u;
label_150f68:
    // 0x150f68: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F68u;
    SET_GPR_U32(ctx, 31, 0x150F70u);
    ctx->pc = 0x150F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F68u;
    // 0x150f6c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F68u, 0x150F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F70u;
label_150f70:
    // 0x150f70: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x150F70u;
    {
        const bool branch_taken_0x150f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f70) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F78u;
label_150f78:
    // 0x150f78: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F78u;
    SET_GPR_U32(ctx, 31, 0x150F80u);
    ctx->pc = 0x150F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F78u;
    // 0x150f7c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F78u, 0x150F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x150F80u;
    {
        const bool branch_taken_0x150f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f80) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F88u;
label_150f88:
    // 0x150f88: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F88u;
    SET_GPR_U32(ctx, 31, 0x150F90u);
    ctx->pc = 0x150F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F88u;
    // 0x150f8c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F88u, 0x150F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F90u;
label_150f90:
    // 0x150f90: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x150F90u;
    {
        const bool branch_taken_0x150f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150f90) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150F98u;
label_150f98:
    // 0x150f98: 0xc053898  jal         func_14E260
    ctx->pc = 0x150F98u;
    SET_GPR_U32(ctx, 31, 0x150FA0u);
    ctx->pc = 0x150F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150F98u;
    // 0x150f9c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150F98u, 0x150FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FA0u;
label_150fa0:
    // 0x150fa0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x150FA0u;
    {
        const bool branch_taken_0x150fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fa0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FA8u;
label_150fa8:
    // 0x150fa8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FA8u;
    SET_GPR_U32(ctx, 31, 0x150FB0u);
    ctx->pc = 0x150FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FA8u;
    // 0x150fac: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FA8u, 0x150FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FB0u;
label_150fb0:
    // 0x150fb0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x150FB0u;
    {
        const bool branch_taken_0x150fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fb0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FB8u;
label_150fb8:
    // 0x150fb8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FB8u;
    SET_GPR_U32(ctx, 31, 0x150FC0u);
    ctx->pc = 0x150FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FB8u;
    // 0x150fbc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FB8u, 0x150FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FC0u;
label_150fc0:
    // 0x150fc0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x150FC0u;
    {
        const bool branch_taken_0x150fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fc0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FC8u;
label_150fc8:
    // 0x150fc8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FC8u;
    SET_GPR_U32(ctx, 31, 0x150FD0u);
    ctx->pc = 0x150FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FC8u;
    // 0x150fcc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FC8u, 0x150FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FD0u;
label_150fd0:
    // 0x150fd0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x150FD0u;
    {
        const bool branch_taken_0x150fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fd0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FD8u;
label_150fd8:
    // 0x150fd8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FD8u;
    SET_GPR_U32(ctx, 31, 0x150FE0u);
    ctx->pc = 0x150FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FD8u;
    // 0x150fdc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FD8u, 0x150FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FE0u;
label_150fe0:
    // 0x150fe0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x150FE0u;
    {
        const bool branch_taken_0x150fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150fe0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FE8u;
label_150fe8:
    // 0x150fe8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FE8u;
    SET_GPR_U32(ctx, 31, 0x150FF0u);
    ctx->pc = 0x150FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FE8u;
    // 0x150fec: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FE8u, 0x150FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150FF0u;
label_150ff0:
    // 0x150ff0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x150FF0u;
    {
        const bool branch_taken_0x150ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150ff0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x150FF8u;
label_150ff8:
    // 0x150ff8: 0xc053898  jal         func_14E260
    ctx->pc = 0x150FF8u;
    SET_GPR_U32(ctx, 31, 0x151000u);
    ctx->pc = 0x150FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150FF8u;
    // 0x150ffc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x150FF8u, 0x151000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151000u;
label_151000:
    // 0x151000: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x151000u;
    {
        const bool branch_taken_0x151000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151000) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151008u;
label_151008:
    // 0x151008: 0xc053898  jal         func_14E260
    ctx->pc = 0x151008u;
    SET_GPR_U32(ctx, 31, 0x151010u);
    ctx->pc = 0x15100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151008u;
    // 0x15100c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151008u, 0x151010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151010u;
label_151010:
    // 0x151010: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x151010u;
    {
        const bool branch_taken_0x151010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151010) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151018u;
label_151018:
    // 0x151018: 0xc053898  jal         func_14E260
    ctx->pc = 0x151018u;
    SET_GPR_U32(ctx, 31, 0x151020u);
    ctx->pc = 0x15101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151018u;
    // 0x15101c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151018u, 0x151020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151020u;
label_151020:
    // 0x151020: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x151020u;
    {
        const bool branch_taken_0x151020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151020) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151028u;
label_151028:
    // 0x151028: 0xc053898  jal         func_14E260
    ctx->pc = 0x151028u;
    SET_GPR_U32(ctx, 31, 0x151030u);
    ctx->pc = 0x15102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151028u;
    // 0x15102c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151028u, 0x151030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151030u;
label_151030:
    // 0x151030: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x151030u;
    {
        const bool branch_taken_0x151030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151030) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151038u;
label_151038:
    // 0x151038: 0xc053898  jal         func_14E260
    ctx->pc = 0x151038u;
    SET_GPR_U32(ctx, 31, 0x151040u);
    ctx->pc = 0x15103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151038u;
    // 0x15103c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151038u, 0x151040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151040u;
label_151040:
    // 0x151040: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x151040u;
    {
        const bool branch_taken_0x151040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151040) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151048u;
label_151048:
    // 0x151048: 0xc053898  jal         func_14E260
    ctx->pc = 0x151048u;
    SET_GPR_U32(ctx, 31, 0x151050u);
    ctx->pc = 0x15104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151048u;
    // 0x15104c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151048u, 0x151050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151050u;
label_151050:
    // 0x151050: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151050) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151058u;
label_151058:
    // 0x151058: 0xc053898  jal         func_14E260
    ctx->pc = 0x151058u;
    SET_GPR_U32(ctx, 31, 0x151060u);
    ctx->pc = 0x15105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151058u;
    // 0x15105c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151058u, 0x151060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151060u;
label_151060:
    // 0x151060: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x151060u;
    {
        const bool branch_taken_0x151060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151060) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151068u;
label_151068:
    // 0x151068: 0xc053898  jal         func_14E260
    ctx->pc = 0x151068u;
    SET_GPR_U32(ctx, 31, 0x151070u);
    ctx->pc = 0x15106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151068u;
    // 0x15106c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151068u, 0x151070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151070u;
label_151070:
    // 0x151070: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x151070u;
    {
        const bool branch_taken_0x151070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151070) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151078u;
label_151078:
    // 0x151078: 0xc053898  jal         func_14E260
    ctx->pc = 0x151078u;
    SET_GPR_U32(ctx, 31, 0x151080u);
    ctx->pc = 0x15107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151078u;
    // 0x15107c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151078u, 0x151080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151080u;
label_151080:
    // 0x151080: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x151080u;
    {
        const bool branch_taken_0x151080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151080) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151088u;
label_151088:
    // 0x151088: 0xc053898  jal         func_14E260
    ctx->pc = 0x151088u;
    SET_GPR_U32(ctx, 31, 0x151090u);
    ctx->pc = 0x15108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151088u;
    // 0x15108c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151088u, 0x151090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151090u;
label_151090:
    // 0x151090: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x151090u;
    {
        const bool branch_taken_0x151090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151090) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151098u;
label_151098:
    // 0x151098: 0xc053898  jal         func_14E260
    ctx->pc = 0x151098u;
    SET_GPR_U32(ctx, 31, 0x1510A0u);
    ctx->pc = 0x15109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151098u;
    // 0x15109c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151098u, 0x1510A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510A0u;
label_1510a0:
    // 0x1510a0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510A8u;
label_1510a8:
    // 0x1510a8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510A8u;
    SET_GPR_U32(ctx, 31, 0x1510B0u);
    ctx->pc = 0x1510ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510A8u;
    // 0x1510ac: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510A8u, 0x1510B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510B0u;
label_1510b0:
    // 0x1510b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510B8u;
label_1510b8:
    // 0x1510b8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510B8u;
    SET_GPR_U32(ctx, 31, 0x1510C0u);
    ctx->pc = 0x1510BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510B8u;
    // 0x1510bc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510B8u, 0x1510C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510C0u;
label_1510c0:
    // 0x1510c0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1510C0u;
    {
        const bool branch_taken_0x1510c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510c0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510C8u;
label_1510c8:
    // 0x1510c8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510C8u;
    SET_GPR_U32(ctx, 31, 0x1510D0u);
    ctx->pc = 0x1510CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510C8u;
    // 0x1510cc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510C8u, 0x1510D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510D0u;
label_1510d0:
    // 0x1510d0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1510D0u;
    {
        const bool branch_taken_0x1510d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510d0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510D8u;
label_1510d8:
    // 0x1510d8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510D8u;
    SET_GPR_U32(ctx, 31, 0x1510E0u);
    ctx->pc = 0x1510DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510D8u;
    // 0x1510dc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510D8u, 0x1510E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510E0u;
label_1510e0:
    // 0x1510e0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1510E0u;
    {
        const bool branch_taken_0x1510e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510e0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510E8u;
label_1510e8:
    // 0x1510e8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510E8u;
    SET_GPR_U32(ctx, 31, 0x1510F0u);
    ctx->pc = 0x1510ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510E8u;
    // 0x1510ec: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510E8u, 0x1510F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1510F0u;
label_1510f0:
    // 0x1510f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1510F0u;
    {
        const bool branch_taken_0x1510f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1510f0) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x1510F8u;
label_1510f8:
    // 0x1510f8: 0xc053898  jal         func_14E260
    ctx->pc = 0x1510F8u;
    SET_GPR_U32(ctx, 31, 0x151100u);
    ctx->pc = 0x1510FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1510F8u;
    // 0x1510fc: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x1510F8u, 0x151100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151100u;
label_151100:
    // 0x151100: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x151100u;
    {
        const bool branch_taken_0x151100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151100) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151108u;
label_151108:
    // 0x151108: 0xc053898  jal         func_14E260
    ctx->pc = 0x151108u;
    SET_GPR_U32(ctx, 31, 0x151110u);
    ctx->pc = 0x15110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151108u;
    // 0x15110c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151108u, 0x151110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151110u;
label_151110:
    // 0x151110: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x151110u;
    {
        const bool branch_taken_0x151110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151110) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151118u;
label_151118:
    // 0x151118: 0xc053898  jal         func_14E260
    ctx->pc = 0x151118u;
    SET_GPR_U32(ctx, 31, 0x151120u);
    ctx->pc = 0x15111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151118u;
    // 0x15111c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151118u, 0x151120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151120u;
label_151120:
    // 0x151120: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151120) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151128u;
label_151128:
    // 0x151128: 0xc053898  jal         func_14E260
    ctx->pc = 0x151128u;
    SET_GPR_U32(ctx, 31, 0x151130u);
    ctx->pc = 0x15112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151128u;
    // 0x15112c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151128u, 0x151130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151130u;
label_151130:
    // 0x151130: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x151130u;
    {
        const bool branch_taken_0x151130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151130) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151138u;
label_151138:
    // 0x151138: 0xc053898  jal         func_14E260
    ctx->pc = 0x151138u;
    SET_GPR_U32(ctx, 31, 0x151140u);
    ctx->pc = 0x15113Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151138u;
    // 0x15113c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151138u, 0x151140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151140u;
label_151140:
    // 0x151140: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x151140u;
    {
        const bool branch_taken_0x151140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151140) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151148u;
label_151148:
    // 0x151148: 0xc053898  jal         func_14E260
    ctx->pc = 0x151148u;
    SET_GPR_U32(ctx, 31, 0x151150u);
    ctx->pc = 0x15114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151148u;
    // 0x15114c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151148u, 0x151150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151150u;
label_151150:
    // 0x151150: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x151150u;
    {
        const bool branch_taken_0x151150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151150) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151158u;
label_151158:
    // 0x151158: 0xc053898  jal         func_14E260
    ctx->pc = 0x151158u;
    SET_GPR_U32(ctx, 31, 0x151160u);
    ctx->pc = 0x15115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151158u;
    // 0x15115c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151158u, 0x151160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151160u;
label_151160:
    // 0x151160: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151160u;
    {
        const bool branch_taken_0x151160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151160) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151168u;
label_151168:
    // 0x151168: 0xc053898  jal         func_14E260
    ctx->pc = 0x151168u;
    SET_GPR_U32(ctx, 31, 0x151170u);
    ctx->pc = 0x15116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151168u;
    // 0x15116c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151168u, 0x151170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151170u;
label_151170:
    // 0x151170: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x151170u;
    {
        const bool branch_taken_0x151170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151170) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151178u;
label_151178:
    // 0x151178: 0xc053898  jal         func_14E260
    ctx->pc = 0x151178u;
    SET_GPR_U32(ctx, 31, 0x151180u);
    ctx->pc = 0x15117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151178u;
    // 0x15117c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151178u, 0x151180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151180u;
label_151180:
    // 0x151180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151180u;
    {
        const bool branch_taken_0x151180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151180) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151188u;
label_151188:
    // 0x151188: 0xc053898  jal         func_14E260
    ctx->pc = 0x151188u;
    SET_GPR_U32(ctx, 31, 0x151190u);
    ctx->pc = 0x15118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151188u;
    // 0x15118c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151188u, 0x151190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151190u;
label_151190:
    // 0x151190: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151190u;
    {
        const bool branch_taken_0x151190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151190) {
            ctx->pc = 0x1511A0u;
            goto label_1511a0;
        }
    }
    ctx->pc = 0x151198u;
label_151198:
    // 0x151198: 0xc053898  jal         func_14E260
    ctx->pc = 0x151198u;
    SET_GPR_U32(ctx, 31, 0x1511A0u);
    ctx->pc = 0x15119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151198u;
    // 0x15119c: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E260u, 0x151198u, 0x1511A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511A0u;
label_1511a0:
    // 0x1511a0: 0xa780887c  sh          $zero, -0x7784($gp)
    ctx->pc = 0x1511a0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936700), (uint16_t)GPR_U32(ctx, 0));
    // 0x1511a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1511a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1511a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1511a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1511ac: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x1511acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1511b0: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x1511b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
    // 0x1511b4: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x1511b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1511b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1511b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1511bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1511bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1511c0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1511c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1511c4: 0xa2040011  sb          $a0, 0x11($s0)
    ctx->pc = 0x1511c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x1511c8: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1511c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1511cc: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x1511ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1511d0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1511d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1511d4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1511D4u;
    {
        const bool branch_taken_0x1511d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1511D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1511D4u;
        // 0x1511d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1511d4) {
            ctx->pc = 0x151208u;
            goto label_151208;
        }
    }
    ctx->pc = 0x1511DCu;
    // 0x1511dc: 0x0  nop
    ctx->pc = 0x1511dcu;
    // NOP
label_1511e0:
    // 0x1511e0: 0x96040012  lhu         $a0, 0x12($s0)
    ctx->pc = 0x1511e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1511e4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1511e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1511e8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1511e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1511ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1511ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1511f0: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1511f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1511f4: 0x92030011  lbu         $v1, 0x11($s0)
    ctx->pc = 0x1511f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x1511f8: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1511f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1511fc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1511FCu;
    {
        const bool branch_taken_0x1511fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1511fc) {
            ctx->pc = 0x1511E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1511e0;
        }
    }
    ctx->pc = 0x151204u;
    // 0x151204: 0x0  nop
    ctx->pc = 0x151204u;
    // NOP
label_151208:
    // 0x151208: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x151208u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15120c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15120cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151210: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x151210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x151214: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x151214u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x151218: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x151218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15121c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15121Cu;
    {
        const bool branch_taken_0x15121c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15121Cu;
        // 0x151220: 0x3c033f19  lui         $v1, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15121c) {
            ctx->pc = 0x151230u;
            goto label_151230;
        }
    }
    ctx->pc = 0x151224u;
    // 0x151224: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x151228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151228u;
    {
        const bool branch_taken_0x151228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151228u;
        // 0x15122c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151228) {
            ctx->pc = 0x151238u;
            goto label_151238;
        }
    }
    ctx->pc = 0x151230u;
label_151230:
    // 0x151230: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x151234: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x151234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_151238:
    // 0x151238: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x151238u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15123c: 0x24030b00  addiu       $v1, $zero, 0xB00
    ctx->pc = 0x15123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x151240: 0x30840f00  andi        $a0, $a0, 0xF00
    ctx->pc = 0x151240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x151244: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x151244u;
    {
        const bool branch_taken_0x151244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x151248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151244u;
        // 0x151248: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151244) {
            ctx->pc = 0x151298u;
            goto label_151298;
        }
    }
    ctx->pc = 0x15124Cu;
    // 0x15124c: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x151250: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x151254: 0x24630f94  addiu       $v1, $v1, 0xF94
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3988));
    // 0x151258: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x15125c: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x15125cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x151260: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x151264: 0xac24cebc  sw          $a0, -0x3144($at)
    ctx->pc = 0x151264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x151268: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x151268u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15126c: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x15126cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x151270: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x151270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x151274: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x151274u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x151278: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x151278u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x15127c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x151280: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x151280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x151284: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x151284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151288: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x151288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15128c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15128Cu;
    {
        const bool branch_taken_0x15128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15128Cu;
        // 0x151290: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15128c) {
            ctx->pc = 0x1512B0u;
            goto label_1512b0;
        }
    }
    ctx->pc = 0x151294u;
    // 0x151294: 0x0  nop
    ctx->pc = 0x151294u;
    // NOP
label_151298:
    // 0x151298: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x151298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15129c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x15129cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x1512a0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1512a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1512a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1512a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1512a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1512ac: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x1512acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
label_1512b0:
    // 0x1512b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1512b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1512b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1512b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1512b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1512B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1512BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B8u;
        // 0x1512bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1512B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1512C0u;
}
