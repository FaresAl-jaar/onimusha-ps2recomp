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

// Function: sub_00308BE0
// Address: 0x308be0 - 0x308d98
void sub_00308BE0_0x308be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308BE0_0x308be0");
#endif

    switch (ctx->pc) {
        case 0x308c44u: goto label_308c44;
        case 0x308c6cu: goto label_308c6c;
        case 0x308d50u: goto label_308d50;
        case 0x308d5cu: goto label_308d5c;
        default: break;
    }

    ctx->pc = 0x308be0u;

    // 0x308be0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x308be4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x308be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x308be8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x308be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x308bec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x308becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x308bf0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x308bf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x308bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x308bf8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x308bf8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308bfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x308c00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x308c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x308c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x308c08: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x308c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308c10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x308c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308c18: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x308C18u;
    {
        const bool branch_taken_0x308c18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C18u;
        // 0x308c1c: 0x120882d  daddu       $s1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c18) {
            ctx->pc = 0x308C28u;
            goto label_308c28;
        }
    }
    ctx->pc = 0x308C20u;
    // 0x308c20: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x308C20u;
    {
        const bool branch_taken_0x308c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C20u;
        // 0x308c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c20) {
            ctx->pc = 0x308D70u;
            goto label_308d70;
        }
    }
    ctx->pc = 0x308C28u;
label_308c28:
    // 0x308c28: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x308c28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x308c2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c38: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x308c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x308c3c: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x308C3Cu;
    SET_GPR_U32(ctx, 31, 0x308C44u);
    ctx->pc = 0x308C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C3Cu;
    // 0x308c40: 0x25088b80  addiu       $t0, $t0, -0x7480 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x308C3Cu, 0x308C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C44u;
label_308c44:
    // 0x308c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c48: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x308C48u;
    {
        const bool branch_taken_0x308c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C48u;
        // 0x308c4c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c48) {
            ctx->pc = 0x308D68u;
            goto label_308d68;
        }
    }
    ctx->pc = 0x308C50u;
    // 0x308c50: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x308c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c54: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x308c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c58: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x308c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308c60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x308c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x308c64: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x308C64u;
    SET_GPR_U32(ctx, 31, 0x308C6Cu);
    ctx->pc = 0x308C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C64u;
    // 0x308c68: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x308C64u, 0x308C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C6Cu;
label_308c6c:
    // 0x308c6c: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x308c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x308c70: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x308c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x308c74: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x308c74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x308c78: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x308c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x308c7c: 0xa6000526  sh          $zero, 0x526($s0)
    ctx->pc = 0x308c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 0));
    // 0x308c80: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x308c84: 0x2442c8f6  addiu       $v0, $v0, -0x370A
    ctx->pc = 0x308c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953206));
    // 0x308c88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308c8c: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x308c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x308c90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x308c94: 0xa2030520  sb          $v1, 0x520($s0)
    ctx->pc = 0x308c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 3));
    // 0x308c98: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
    // 0x308c9c: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x308c9cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308ca0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x308ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x308ca4: 0x2463c8f0  addiu       $v1, $v1, -0x3710
    ctx->pc = 0x308ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953200));
    // 0x308ca8: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x308ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x308cac: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x308cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x308cb0: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x308cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x308cb4: 0xa20805a8  sb          $t0, 0x5A8($s0)
    ctx->pc = 0x308cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1448), (uint8_t)GPR_U32(ctx, 8));
    // 0x308cb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x308cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x308cbc: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x308cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x308cc0: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x308cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x308cc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x308cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308cc8: 0xae080518  sw          $t0, 0x518($s0)
    ctx->pc = 0x308cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 8));
    // 0x308ccc: 0xa60005a4  sh          $zero, 0x5A4($s0)
    ctx->pc = 0x308cccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1444), (uint16_t)GPR_U32(ctx, 0));
    // 0x308cd0: 0xae07059c  sw          $a3, 0x59C($s0)
    ctx->pc = 0x308cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 7));
    // 0x308cd4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x308cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308cd8: 0xe60005a0  swc1        $f0, 0x5A0($s0)
    ctx->pc = 0x308cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1440), bits); }
    // 0x308cdc: 0xa60005a6  sh          $zero, 0x5A6($s0)
    ctx->pc = 0x308cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1446), (uint16_t)GPR_U32(ctx, 0));
    // 0x308ce0: 0xa21105a9  sb          $s1, 0x5A9($s0)
    ctx->pc = 0x308ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1449), (uint8_t)GPR_U32(ctx, 17));
    // 0x308ce4: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x308ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x308ce8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x308ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x308cec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x308cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x308cf0: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x308cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x308cf4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x308cf8: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x308cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x308cfc: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x308cfcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x308d00: 0x0  nop
    ctx->pc = 0x308d00u;
    // NOP
    // 0x308d04: 0x0  nop
    ctx->pc = 0x308d04u;
    // NOP
    // 0x308d08: 0x1010  mfhi        $v0
    ctx->pc = 0x308d08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x308d0c: 0xa20205aa  sb          $v0, 0x5AA($s0)
    ctx->pc = 0x308d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1450), (uint8_t)GPR_U32(ctx, 2));
    // 0x308d10: 0xae000598  sw          $zero, 0x598($s0)
    ctx->pc = 0x308d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 0));
    // 0x308d14: 0xa20005ab  sb          $zero, 0x5AB($s0)
    ctx->pc = 0x308d14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1451), (uint8_t)GPR_U32(ctx, 0));
    // 0x308d18: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x308d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x308d1c: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x308d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x308d20: 0xae000574  sw          $zero, 0x574($s0)
    ctx->pc = 0x308d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 0));
    // 0x308d24: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x308d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x308d28: 0xae000578  sw          $zero, 0x578($s0)
    ctx->pc = 0x308d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 0));
    // 0x308d2c: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x308d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x308d30: 0xae00057c  sw          $zero, 0x57C($s0)
    ctx->pc = 0x308d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 0));
    // 0x308d34: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x308d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x308d38: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x308d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x308d3c: 0xae000594  sw          $zero, 0x594($s0)
    ctx->pc = 0x308d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 0));
    // 0x308d40: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x308d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x308d44: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x308d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x308d48: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x308D48u;
    SET_GPR_U32(ctx, 31, 0x308D50u);
    ctx->pc = 0x308D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D48u;
    // 0x308d4c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x308D48u, 0x308D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D50u;
label_308d50:
    // 0x308d50: 0x26040560  addiu       $a0, $s0, 0x560
    ctx->pc = 0x308d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
    // 0x308d54: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x308D54u;
    SET_GPR_U32(ctx, 31, 0x308D5Cu);
    ctx->pc = 0x308D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D54u;
    // 0x308d58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x308D54u, 0x308D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308D5Cu;
label_308d5c:
    // 0x308d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x308D5Cu;
    {
        const bool branch_taken_0x308d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D5Cu;
        // 0x308d60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d5c) {
            ctx->pc = 0x308D70u;
            goto label_308d70;
        }
    }
    ctx->pc = 0x308D64u;
    // 0x308d64: 0x0  nop
    ctx->pc = 0x308d64u;
    // NOP
label_308d68:
    // 0x308d68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308d6c: 0x0  nop
    ctx->pc = 0x308d6cu;
    // NOP
label_308d70:
    // 0x308d70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x308d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x308d74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x308d74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x308d78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x308d78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x308d7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x308d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x308d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x308d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x308d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x308d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x308d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x308d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308d90: 0x3e00008  jr          $ra
    ctx->pc = 0x308D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D90u;
        // 0x308d94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308D98u;
}
