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

// Function: sub_00372CC0
// Address: 0x372cc0 - 0x372ee0
void sub_00372CC0_0x372cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372CC0_0x372cc0");
#endif

    switch (ctx->pc) {
        case 0x372d30u: goto label_372d30;
        case 0x372d3cu: goto label_372d3c;
        case 0x372dc0u: goto label_372dc0;
        case 0x372dd0u: goto label_372dd0;
        case 0x372df8u: goto label_372df8;
        case 0x372e08u: goto label_372e08;
        case 0x372e50u: goto label_372e50;
        case 0x372e60u: goto label_372e60;
        case 0x372e6cu: goto label_372e6c;
        case 0x372e80u: goto label_372e80;
        case 0x372eb0u: goto label_372eb0;
        case 0x372ec0u: goto label_372ec0;
        case 0x372ed0u: goto label_372ed0;
        default: break;
    }

    ctx->pc = 0x372cc0u;

    // 0x372cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x372cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x372cc4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x372cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x372cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x372ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x372cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cd4: 0x90840020  lbu         $a0, 0x20($a0)
    ctx->pc = 0x372cd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x372cd8: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x372CD8u;
    {
        const bool branch_taken_0x372cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x372CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372CD8u;
        // 0x372cdc: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372cd8) {
            ctx->pc = 0x372DC8u;
            goto label_372dc8;
        }
    }
    ctx->pc = 0x372CE0u;
    // 0x372ce0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x372CE0u;
    {
        const bool branch_taken_0x372ce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x372ce0) {
            ctx->pc = 0x372D48u;
            goto label_372d48;
        }
    }
    ctx->pc = 0x372CE8u;
    // 0x372ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372cec: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x372CECu;
    {
        const bool branch_taken_0x372cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x372cec) {
            ctx->pc = 0x372D30u;
            goto label_372d30;
        }
    }
    ctx->pc = 0x372CF4u;
    // 0x372cf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372CF4u;
    {
        const bool branch_taken_0x372cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372cf4) {
            ctx->pc = 0x372D08u;
            goto label_372d08;
        }
    }
    ctx->pc = 0x372CFCu;
    // 0x372cfc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x372CFCu;
    {
        const bool branch_taken_0x372cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372cfc) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372D04u;
    // 0x372d04: 0x0  nop
    ctx->pc = 0x372d04u;
    // NOP
label_372d08:
    // 0x372d08: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x372d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x372d0c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x372d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x372d10: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x372d10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x372d14: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x372d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x372d18: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x372d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x372d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x372d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x372d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x372d24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d28: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x372D28u;
    SET_GPR_U32(ctx, 31, 0x372D30u);
    ctx->pc = 0x372D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D28u;
    // 0x372d2c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x372D28u, 0x372D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D30u;
label_372d30:
    // 0x372d30: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x372d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x372d34: 0xc063d48  jal         func_18F520
    ctx->pc = 0x372D34u;
    SET_GPR_U32(ctx, 31, 0x372D3Cu);
    ctx->pc = 0x372D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D34u;
    // 0x372d38: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x372D34u, 0x372D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D3Cu;
label_372d3c:
    // 0x372d3c: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x372D3Cu;
    {
        const bool branch_taken_0x372d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372d3c) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372D44u;
    // 0x372d44: 0x0  nop
    ctx->pc = 0x372d44u;
    // NOP
label_372d48:
    // 0x372d48: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x372d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x372d4c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x372d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x372d50: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x372d50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x372d54: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x372d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x372d58: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x372d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x372d5c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x372d5cu;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372d60: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x372d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x372d64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x372d64u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372d68: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x372d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x372d6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372d6cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372d70: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x372d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x372d74: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x372d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x372d78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x372d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x372d7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x372d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372d80: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x372d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372d84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x372d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372d88: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x372d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x372d8c: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x372d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x372d90: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x372d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x372d94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x372d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x372d98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x372d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x372d9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x372d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372da0: 0xe602009c  swc1        $f2, 0x9C($s0)
    ctx->pc = 0x372da0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x372da4: 0xe60100a0  swc1        $f1, 0xA0($s0)
    ctx->pc = 0x372da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x372da8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x372da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x372dac: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x372dacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x372db0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x372db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x372db4: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x372db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x372db8: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x372DB8u;
    SET_GPR_U32(ctx, 31, 0x372DC0u);
    ctx->pc = 0x372DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DB8u;
    // 0x372dbc: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x372DB8u, 0x372DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DC0u;
label_372dc0:
    // 0x372dc0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x372DC0u;
    {
        const bool branch_taken_0x372dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372dc0) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372DC8u;
label_372dc8:
    // 0x372dc8: 0xc05551c  jal         func_155470
    ctx->pc = 0x372DC8u;
    SET_GPR_U32(ctx, 31, 0x372DD0u);
    ctx->pc = 0x372DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DC8u;
    // 0x372dcc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x372DC8u, 0x372DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DD0u;
label_372dd0:
    // 0x372dd0: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x372DD0u;
    {
        const bool branch_taken_0x372dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DD0u;
        // 0x372dd4: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372dd0) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372DD8u;
    // 0x372dd8: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x372dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x372ddc: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x372ddcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x372de0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x372de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x372de4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x372de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x372de8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x372DE8u;
    {
        const bool branch_taken_0x372de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DE8u;
        // 0x372dec: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372de8) {
            ctx->pc = 0x372ED0u;
            goto label_372ed0;
        }
    }
    ctx->pc = 0x372DF0u;
    // 0x372df0: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x372DF0u;
    SET_GPR_U32(ctx, 31, 0x372DF8u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x372DF0u, 0x372DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DF8u;
label_372df8:
    // 0x372df8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x372df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x372dfc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372e00: 0xc05e390  jal         func_178E40
    ctx->pc = 0x372E00u;
    SET_GPR_U32(ctx, 31, 0x372E08u);
    ctx->pc = 0x372E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E00u;
    // 0x372e04: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x372E00u, 0x372E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E08u;
label_372e08:
    // 0x372e08: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372e0c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x372e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x372e10: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x372e10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x372e14: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x372e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372e18: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x372e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x372e1c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372e20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372e24: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x372e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x372e28: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x372e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x372e2c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x372e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x372e30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372e34: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x372e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x372e38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372e3c: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x372e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x372e40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372e44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x372e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x372e48: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x372E48u;
    SET_GPR_U32(ctx, 31, 0x372E50u);
    ctx->pc = 0x372E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E48u;
    // 0x372e4c: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x372E48u, 0x372E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E50u;
label_372e50:
    // 0x372e50: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x372e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x372e54: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x372e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x372e58: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x372E58u;
    SET_GPR_U32(ctx, 31, 0x372E60u);
    ctx->pc = 0x372E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E58u;
    // 0x372e5c: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x372E58u, 0x372E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E60u;
label_372e60:
    // 0x372e60: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x372e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x372e64: 0xc095128  jal         func_2544A0
    ctx->pc = 0x372E64u;
    SET_GPR_U32(ctx, 31, 0x372E6Cu);
    ctx->pc = 0x372E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E64u;
    // 0x372e68: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x372E64u, 0x372E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E6Cu;
label_372e6c:
    // 0x372e6c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x372e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x372e70: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372e74: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x372e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x372e78: 0xc095130  jal         func_2544C0
    ctx->pc = 0x372E78u;
    SET_GPR_U32(ctx, 31, 0x372E80u);
    ctx->pc = 0x372E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372E78u;
    // 0x372e7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x372E78u, 0x372E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372E80u;
label_372e80:
    // 0x372e80: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x372e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x372e84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x372e88: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x372e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x372e8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x372e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x372e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372e94: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x372e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x372e98: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x372e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x372e9c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x372e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x372ea0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x372EA0u;
    {
        const bool branch_taken_0x372ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372ea0) {
            ctx->pc = 0x372EB8u;
            goto label_372eb8;
        }
    }
    ctx->pc = 0x372EA8u;
    // 0x372ea8: 0xc09c438  jal         func_2710E0
    ctx->pc = 0x372EA8u;
    SET_GPR_U32(ctx, 31, 0x372EB0u);
    ctx->pc = 0x2710E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2710E0u, 0x372EA8u, 0x372EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EB0u;
label_372eb0:
    // 0x372eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x372EB0u;
    {
        const bool branch_taken_0x372eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372eb0) {
            ctx->pc = 0x372EC0u;
            goto label_372ec0;
        }
    }
    ctx->pc = 0x372EB8u;
label_372eb8:
    // 0x372eb8: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x372EB8u;
    SET_GPR_U32(ctx, 31, 0x372EC0u);
    ctx->pc = 0x270FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FD0u, 0x372EB8u, 0x372EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EC0u;
label_372ec0:
    // 0x372ec0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x372ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x372ec4: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x372ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x372ec8: 0xc0c2e84  jal         func_30BA10
    ctx->pc = 0x372EC8u;
    SET_GPR_U32(ctx, 31, 0x372ED0u);
    ctx->pc = 0x372ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EC8u;
    // 0x372ecc: 0xa200001f  sb          $zero, 0x1F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA10u, 0x372EC8u, 0x372ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372ED0u;
label_372ed0:
    // 0x372ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x372ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372ED8u;
        // 0x372edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372EE0u;
}
