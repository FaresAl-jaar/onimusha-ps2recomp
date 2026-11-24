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

// Function: sub_00345D10
// Address: 0x345d10 - 0x3461ac
void sub_00345D10_0x345d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345D10_0x345d10");
#endif

    switch (ctx->pc) {
        case 0x345d7cu: goto label_345d7c;
        case 0x345db0u: goto label_345db0;
        case 0x345dc0u: goto label_345dc0;
        case 0x345e10u: goto label_345e10;
        case 0x345e28u: goto label_345e28;
        case 0x345e40u: goto label_345e40;
        case 0x345e58u: goto label_345e58;
        case 0x345e70u: goto label_345e70;
        case 0x345e88u: goto label_345e88;
        case 0x345ea0u: goto label_345ea0;
        case 0x345eb8u: goto label_345eb8;
        case 0x345ed0u: goto label_345ed0;
        case 0x345ee8u: goto label_345ee8;
        case 0x345f00u: goto label_345f00;
        case 0x345f18u: goto label_345f18;
        case 0x345f30u: goto label_345f30;
        case 0x345f48u: goto label_345f48;
        case 0x345f60u: goto label_345f60;
        case 0x345f78u: goto label_345f78;
        case 0x345f90u: goto label_345f90;
        case 0x345fa8u: goto label_345fa8;
        case 0x345fc0u: goto label_345fc0;
        case 0x345fd8u: goto label_345fd8;
        case 0x345ff0u: goto label_345ff0;
        case 0x346008u: goto label_346008;
        case 0x346020u: goto label_346020;
        case 0x346038u: goto label_346038;
        case 0x346050u: goto label_346050;
        case 0x346068u: goto label_346068;
        case 0x346080u: goto label_346080;
        case 0x346098u: goto label_346098;
        case 0x3460b0u: goto label_3460b0;
        case 0x3460c8u: goto label_3460c8;
        case 0x3460e0u: goto label_3460e0;
        case 0x3460f8u: goto label_3460f8;
        case 0x346110u: goto label_346110;
        case 0x346128u: goto label_346128;
        case 0x346140u: goto label_346140;
        case 0x346158u: goto label_346158;
        case 0x346170u: goto label_346170;
        case 0x346188u: goto label_346188;
        default: break;
    }

    ctx->pc = 0x345d10u;

    // 0x345d10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x345d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x345d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x345d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x345d18: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345d1c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x345d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x345d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x345d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x345d24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x345d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x345d28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345d2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x345d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x345d34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x345d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345d38: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x345d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345d3c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x345d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x345d40: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x345d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345d44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x345d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345d48: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x345d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345d4c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x345d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345d50: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x345d50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x345d54: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x345d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x345d58: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x345d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x345d5c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x345d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x345d60: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x345d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x345d64: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x345d64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x345d68: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x345d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x345d6c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x345d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x345d70: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x345d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x345d74: 0xc0996b8  jal         func_265AE0
    ctx->pc = 0x345D74u;
    SET_GPR_U32(ctx, 31, 0x345D7Cu);
    ctx->pc = 0x345D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345D74u;
    // 0x345d78: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265AE0u, 0x345D74u, 0x345D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345D7Cu;
label_345d7c:
    // 0x345d7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x345d7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d80: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x345d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x345d84: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x345d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x345d88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x345d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x345d8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345d90: 0x3c023bb6  lui         $v0, 0x3BB6
    ctx->pc = 0x345d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15286 << 16));
    // 0x345d94: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x345d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x345d98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x345d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345d9c: 0x0  nop
    ctx->pc = 0x345d9cu;
    // NOP
    // 0x345da0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x345da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345da8: 0xc099778  jal         func_265DE0
    ctx->pc = 0x345DA8u;
    SET_GPR_U32(ctx, 31, 0x345DB0u);
    ctx->pc = 0x345DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DA8u;
    // 0x345dac: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265DE0u, 0x345DA8u, 0x345DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DB0u;
label_345db0:
    // 0x345db0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x345db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345db4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x345db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x345db8: 0xc0997ac  jal         func_265EB0
    ctx->pc = 0x345DB8u;
    SET_GPR_U32(ctx, 31, 0x345DC0u);
    ctx->pc = 0x345DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DB8u;
    // 0x345dbc: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265EB0u, 0x345DB8u, 0x345DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DC0u;
label_345dc0:
    // 0x345dc0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x345dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345dc4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x345dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x345dc8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x345dc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345dcc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x345dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x345dd0: 0x2e410028  sltiu       $at, $s2, 0x28
    ctx->pc = 0x345dd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x345dd4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x345dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x345dd8: 0x70401628  paddub      $v0, $v0, $zero
    ctx->pc = 0x345dd8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x345ddc: 0x102000ec  beqz        $at, . + 4 + (0xEC << 2)
    ctx->pc = 0x345DDCu;
    {
        const bool branch_taken_0x345ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x345DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DDCu;
        // 0x345de0: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ddc) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345DE4u;
    // 0x345de4: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x345de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x345de8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x345de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x345dec: 0x2463f500  addiu       $v1, $v1, -0xB00
    ctx->pc = 0x345decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964480));
    // 0x345df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x345df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x345df4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x345df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x345df8: 0x400008  jr          $v0
    ctx->pc = 0x345DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x345E00u: goto label_345e00;
            case 0x345E18u: goto label_345e18;
            case 0x345E30u: goto label_345e30;
            case 0x345E48u: goto label_345e48;
            case 0x345E60u: goto label_345e60;
            case 0x345E78u: goto label_345e78;
            case 0x345E90u: goto label_345e90;
            case 0x345EA8u: goto label_345ea8;
            case 0x345EC0u: goto label_345ec0;
            case 0x345ED8u: goto label_345ed8;
            case 0x345EF0u: goto label_345ef0;
            case 0x345F08u: goto label_345f08;
            case 0x345F20u: goto label_345f20;
            case 0x345F38u: goto label_345f38;
            case 0x345F50u: goto label_345f50;
            case 0x345F68u: goto label_345f68;
            case 0x345F80u: goto label_345f80;
            case 0x345F98u: goto label_345f98;
            case 0x345FB0u: goto label_345fb0;
            case 0x345FC8u: goto label_345fc8;
            case 0x345FE0u: goto label_345fe0;
            case 0x345FF8u: goto label_345ff8;
            case 0x346010u: goto label_346010;
            case 0x346028u: goto label_346028;
            case 0x346040u: goto label_346040;
            case 0x346058u: goto label_346058;
            case 0x346070u: goto label_346070;
            case 0x346088u: goto label_346088;
            case 0x3460A0u: goto label_3460a0;
            case 0x3460B8u: goto label_3460b8;
            case 0x3460D0u: goto label_3460d0;
            case 0x3460E8u: goto label_3460e8;
            case 0x346100u: goto label_346100;
            case 0x346118u: goto label_346118;
            case 0x346130u: goto label_346130;
            case 0x346148u: goto label_346148;
            case 0x346160u: goto label_346160;
            case 0x346178u: goto label_346178;
            case 0x346190u: goto label_346190;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345DF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x345E00u;
label_345e00:
    // 0x345e00: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e08: 0xc0a927c  jal         func_2A49F0
    ctx->pc = 0x345E08u;
    SET_GPR_U32(ctx, 31, 0x345E10u);
    ctx->pc = 0x345E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E08u;
    // 0x345e0c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A49F0u, 0x345E08u, 0x345E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E10u;
label_345e10:
    // 0x345e10: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x345E10u;
    {
        const bool branch_taken_0x345e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E10u;
        // 0x345e14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e10) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E18u;
label_345e18:
    // 0x345e18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e20: 0xc0a928c  jal         func_2A4A30
    ctx->pc = 0x345E20u;
    SET_GPR_U32(ctx, 31, 0x345E28u);
    ctx->pc = 0x345E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E20u;
    // 0x345e24: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A30u, 0x345E20u, 0x345E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E28u;
label_345e28:
    // 0x345e28: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x345E28u;
    {
        const bool branch_taken_0x345e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E28u;
        // 0x345e2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e28) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E30u;
label_345e30:
    // 0x345e30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e38: 0xc0a929c  jal         func_2A4A70
    ctx->pc = 0x345E38u;
    SET_GPR_U32(ctx, 31, 0x345E40u);
    ctx->pc = 0x345E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E38u;
    // 0x345e3c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4A70u, 0x345E38u, 0x345E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E40u;
label_345e40:
    // 0x345e40: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x345E40u;
    {
        const bool branch_taken_0x345e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E40u;
        // 0x345e44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e40) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E48u;
label_345e48:
    // 0x345e48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e50: 0xc0a92ac  jal         func_2A4AB0
    ctx->pc = 0x345E50u;
    SET_GPR_U32(ctx, 31, 0x345E58u);
    ctx->pc = 0x345E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E50u;
    // 0x345e54: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4AB0u, 0x345E50u, 0x345E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E58u;
label_345e58:
    // 0x345e58: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x345E58u;
    {
        const bool branch_taken_0x345e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E58u;
        // 0x345e5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e58) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E60u;
label_345e60:
    // 0x345e60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e68: 0xc0a9480  jal         func_2A5200
    ctx->pc = 0x345E68u;
    SET_GPR_U32(ctx, 31, 0x345E70u);
    ctx->pc = 0x345E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E68u;
    // 0x345e6c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5200u, 0x345E68u, 0x345E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E70u;
label_345e70:
    // 0x345e70: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x345E70u;
    {
        const bool branch_taken_0x345e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E70u;
        // 0x345e74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e70) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E78u;
label_345e78:
    // 0x345e78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e80: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x345E80u;
    SET_GPR_U32(ctx, 31, 0x345E88u);
    ctx->pc = 0x345E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E80u;
    // 0x345e84: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6720u, 0x345E80u, 0x345E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E88u;
label_345e88:
    // 0x345e88: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x345E88u;
    {
        const bool branch_taken_0x345e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E88u;
        // 0x345e8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e88) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345E90u;
label_345e90:
    // 0x345e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345e94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345e98: 0xc0a99d8  jal         func_2A6760
    ctx->pc = 0x345E98u;
    SET_GPR_U32(ctx, 31, 0x345EA0u);
    ctx->pc = 0x345E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E98u;
    // 0x345e9c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6760u, 0x345E98u, 0x345EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EA0u;
label_345ea0:
    // 0x345ea0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x345EA0u;
    {
        const bool branch_taken_0x345ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EA0u;
        // 0x345ea4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ea0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345EA8u;
label_345ea8:
    // 0x345ea8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345eac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345eb0: 0xc0a99e8  jal         func_2A67A0
    ctx->pc = 0x345EB0u;
    SET_GPR_U32(ctx, 31, 0x345EB8u);
    ctx->pc = 0x345EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EB0u;
    // 0x345eb4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A67A0u, 0x345EB0u, 0x345EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EB8u;
label_345eb8:
    // 0x345eb8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x345EB8u;
    {
        const bool branch_taken_0x345eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EB8u;
        // 0x345ebc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345eb8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345EC0u;
label_345ec0:
    // 0x345ec0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345ec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345ec8: 0xc0a92cc  jal         func_2A4B30
    ctx->pc = 0x345EC8u;
    SET_GPR_U32(ctx, 31, 0x345ED0u);
    ctx->pc = 0x345ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EC8u;
    // 0x345ecc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B30u, 0x345EC8u, 0x345ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ED0u;
label_345ed0:
    // 0x345ed0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x345ED0u;
    {
        const bool branch_taken_0x345ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345ED0u;
        // 0x345ed4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ed0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345ED8u;
label_345ed8:
    // 0x345ed8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345ee0: 0xc0a92dc  jal         func_2A4B70
    ctx->pc = 0x345EE0u;
    SET_GPR_U32(ctx, 31, 0x345EE8u);
    ctx->pc = 0x345EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EE0u;
    // 0x345ee4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B70u, 0x345EE0u, 0x345EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345EE8u;
label_345ee8:
    // 0x345ee8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x345EE8u;
    {
        const bool branch_taken_0x345ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EE8u;
        // 0x345eec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ee8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345EF0u;
label_345ef0:
    // 0x345ef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345ef4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345ef8: 0xc0a92ec  jal         func_2A4BB0
    ctx->pc = 0x345EF8u;
    SET_GPR_U32(ctx, 31, 0x345F00u);
    ctx->pc = 0x345EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345EF8u;
    // 0x345efc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4BB0u, 0x345EF8u, 0x345F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F00u;
label_345f00:
    // 0x345f00: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x345F00u;
    {
        const bool branch_taken_0x345f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F00u;
        // 0x345f04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f00) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F08u;
label_345f08:
    // 0x345f08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f10: 0xc0a934c  jal         func_2A4D30
    ctx->pc = 0x345F10u;
    SET_GPR_U32(ctx, 31, 0x345F18u);
    ctx->pc = 0x345F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F10u;
    // 0x345f14: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4D30u, 0x345F10u, 0x345F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F18u;
label_345f18:
    // 0x345f18: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x345F18u;
    {
        const bool branch_taken_0x345f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F18u;
        // 0x345f1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f18) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F20u;
label_345f20:
    // 0x345f20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f28: 0xc0a935c  jal         func_2A4D70
    ctx->pc = 0x345F28u;
    SET_GPR_U32(ctx, 31, 0x345F30u);
    ctx->pc = 0x345F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F28u;
    // 0x345f2c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4D70u, 0x345F28u, 0x345F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F30u;
label_345f30:
    // 0x345f30: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x345F30u;
    {
        const bool branch_taken_0x345f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F30u;
        // 0x345f34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f30) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F38u;
label_345f38:
    // 0x345f38: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f40: 0xc0a936c  jal         func_2A4DB0
    ctx->pc = 0x345F40u;
    SET_GPR_U32(ctx, 31, 0x345F48u);
    ctx->pc = 0x345F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F40u;
    // 0x345f44: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4DB0u, 0x345F40u, 0x345F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F48u;
label_345f48:
    // 0x345f48: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x345F48u;
    {
        const bool branch_taken_0x345f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F48u;
        // 0x345f4c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f48) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F50u;
label_345f50:
    // 0x345f50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f58: 0xc0a937c  jal         func_2A4DF0
    ctx->pc = 0x345F58u;
    SET_GPR_U32(ctx, 31, 0x345F60u);
    ctx->pc = 0x345F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F58u;
    // 0x345f5c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4DF0u, 0x345F58u, 0x345F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F60u;
label_345f60:
    // 0x345f60: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x345F60u;
    {
        const bool branch_taken_0x345f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F60u;
        // 0x345f64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f60) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F68u;
label_345f68:
    // 0x345f68: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f70: 0xc0a938c  jal         func_2A4E30
    ctx->pc = 0x345F70u;
    SET_GPR_U32(ctx, 31, 0x345F78u);
    ctx->pc = 0x345F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F70u;
    // 0x345f74: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4E30u, 0x345F70u, 0x345F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F78u;
label_345f78:
    // 0x345f78: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x345F78u;
    {
        const bool branch_taken_0x345f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F78u;
        // 0x345f7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f78) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F80u;
label_345f80:
    // 0x345f80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f84: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345f88: 0xc0a939c  jal         func_2A4E70
    ctx->pc = 0x345F88u;
    SET_GPR_U32(ctx, 31, 0x345F90u);
    ctx->pc = 0x345F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345F88u;
    // 0x345f8c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4E70u, 0x345F88u, 0x345F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345F90u;
label_345f90:
    // 0x345f90: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x345F90u;
    {
        const bool branch_taken_0x345f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345F90u;
        // 0x345f94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345f90) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345F98u;
label_345f98:
    // 0x345f98: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345f9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fa0: 0xc0a93ac  jal         func_2A4EB0
    ctx->pc = 0x345FA0u;
    SET_GPR_U32(ctx, 31, 0x345FA8u);
    ctx->pc = 0x345FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FA0u;
    // 0x345fa4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4EB0u, 0x345FA0u, 0x345FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FA8u;
label_345fa8:
    // 0x345fa8: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x345FA8u;
    {
        const bool branch_taken_0x345fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FA8u;
        // 0x345fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fa8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345FB0u;
label_345fb0:
    // 0x345fb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345fb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fb8: 0xc0a933c  jal         func_2A4CF0
    ctx->pc = 0x345FB8u;
    SET_GPR_U32(ctx, 31, 0x345FC0u);
    ctx->pc = 0x345FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FB8u;
    // 0x345fbc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4CF0u, 0x345FB8u, 0x345FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FC0u;
label_345fc0:
    // 0x345fc0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x345FC0u;
    {
        const bool branch_taken_0x345fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FC0u;
        // 0x345fc4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fc0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345FC8u;
label_345fc8:
    // 0x345fc8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345fcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fd0: 0xc0a93bc  jal         func_2A4EF0
    ctx->pc = 0x345FD0u;
    SET_GPR_U32(ctx, 31, 0x345FD8u);
    ctx->pc = 0x345FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FD0u;
    // 0x345fd4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4EF0u, 0x345FD0u, 0x345FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FD8u;
label_345fd8:
    // 0x345fd8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x345FD8u;
    {
        const bool branch_taken_0x345fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FD8u;
        // 0x345fdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345fd8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345FE0u;
label_345fe0:
    // 0x345fe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345fe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x345fe8: 0xc0a93cc  jal         func_2A4F30
    ctx->pc = 0x345FE8u;
    SET_GPR_U32(ctx, 31, 0x345FF0u);
    ctx->pc = 0x345FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345FE8u;
    // 0x345fec: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4F30u, 0x345FE8u, 0x345FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345FF0u;
label_345ff0:
    // 0x345ff0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x345FF0u;
    {
        const bool branch_taken_0x345ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345FF0u;
        // 0x345ff4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ff0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x345FF8u;
label_345ff8:
    // 0x345ff8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x345ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x345ffc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x345ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346000: 0xc0a93f0  jal         func_2A4FC0
    ctx->pc = 0x346000u;
    SET_GPR_U32(ctx, 31, 0x346008u);
    ctx->pc = 0x346004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346000u;
    // 0x346004: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4FC0u, 0x346000u, 0x346008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346008u;
label_346008:
    // 0x346008: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x346008u;
    {
        const bool branch_taken_0x346008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346008u;
        // 0x34600c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346008) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346010u;
label_346010:
    // 0x346010: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346014: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346018: 0xc0a9400  jal         func_2A5000
    ctx->pc = 0x346018u;
    SET_GPR_U32(ctx, 31, 0x346020u);
    ctx->pc = 0x34601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346018u;
    // 0x34601c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5000u, 0x346018u, 0x346020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346020u;
label_346020:
    // 0x346020: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x346020u;
    {
        const bool branch_taken_0x346020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346020u;
        // 0x346024: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346020) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346028u;
label_346028:
    // 0x346028: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34602c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34602cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346030: 0xc0a9410  jal         func_2A5040
    ctx->pc = 0x346030u;
    SET_GPR_U32(ctx, 31, 0x346038u);
    ctx->pc = 0x346034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346030u;
    // 0x346034: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5040u, 0x346030u, 0x346038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346038u;
label_346038:
    // 0x346038: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x346038u;
    {
        const bool branch_taken_0x346038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346038u;
        // 0x34603c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346038) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346040u;
label_346040:
    // 0x346040: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346048: 0xc0a9420  jal         func_2A5080
    ctx->pc = 0x346048u;
    SET_GPR_U32(ctx, 31, 0x346050u);
    ctx->pc = 0x34604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346048u;
    // 0x34604c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5080u, 0x346048u, 0x346050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346050u;
label_346050:
    // 0x346050: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x346050u;
    {
        const bool branch_taken_0x346050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346050u;
        // 0x346054: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346050) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346058u;
label_346058:
    // 0x346058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34605c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34605cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346060: 0xc0a9430  jal         func_2A50C0
    ctx->pc = 0x346060u;
    SET_GPR_U32(ctx, 31, 0x346068u);
    ctx->pc = 0x346064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346060u;
    // 0x346064: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A50C0u, 0x346060u, 0x346068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346068u;
label_346068:
    // 0x346068: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x346068u;
    {
        const bool branch_taken_0x346068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346068u;
        // 0x34606c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346068) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346070u;
label_346070:
    // 0x346070: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346074: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346078: 0xc0a9440  jal         func_2A5100
    ctx->pc = 0x346078u;
    SET_GPR_U32(ctx, 31, 0x346080u);
    ctx->pc = 0x34607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346078u;
    // 0x34607c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5100u, 0x346078u, 0x346080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346080u;
label_346080:
    // 0x346080: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x346080u;
    {
        const bool branch_taken_0x346080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346080u;
        // 0x346084: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346080) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346088u;
label_346088:
    // 0x346088: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34608c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346090: 0xc0a9450  jal         func_2A5140
    ctx->pc = 0x346090u;
    SET_GPR_U32(ctx, 31, 0x346098u);
    ctx->pc = 0x346094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346090u;
    // 0x346094: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5140u, 0x346090u, 0x346098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346098u;
label_346098:
    // 0x346098: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x346098u;
    {
        const bool branch_taken_0x346098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346098u;
        // 0x34609c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346098) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x3460A0u;
label_3460a0:
    // 0x3460a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3460a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3460a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3460a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3460a8: 0xc0a9460  jal         func_2A5180
    ctx->pc = 0x3460A8u;
    SET_GPR_U32(ctx, 31, 0x3460B0u);
    ctx->pc = 0x3460ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460A8u;
    // 0x3460ac: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5180u, 0x3460A8u, 0x3460B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460B0u;
label_3460b0:
    // 0x3460b0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3460B0u;
    {
        const bool branch_taken_0x3460b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460B0u;
        // 0x3460b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460b0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x3460B8u;
label_3460b8:
    // 0x3460b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3460b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3460bc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3460bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3460c0: 0xc0a9490  jal         func_2A5240
    ctx->pc = 0x3460C0u;
    SET_GPR_U32(ctx, 31, 0x3460C8u);
    ctx->pc = 0x3460C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460C0u;
    // 0x3460c4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5240u, 0x3460C0u, 0x3460C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460C8u;
label_3460c8:
    // 0x3460c8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3460C8u;
    {
        const bool branch_taken_0x3460c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460C8u;
        // 0x3460cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460c8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x3460D0u;
label_3460d0:
    // 0x3460d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3460d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3460d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3460d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3460d8: 0xc0a94b8  jal         func_2A52E0
    ctx->pc = 0x3460D8u;
    SET_GPR_U32(ctx, 31, 0x3460E0u);
    ctx->pc = 0x3460DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460D8u;
    // 0x3460dc: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A52E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A52E0u, 0x3460D8u, 0x3460E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460E0u;
label_3460e0:
    // 0x3460e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3460E0u;
    {
        const bool branch_taken_0x3460e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460E0u;
        // 0x3460e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460e0) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x3460E8u;
label_3460e8:
    // 0x3460e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3460e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3460ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3460ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3460f0: 0xc0a94dc  jal         func_2A5370
    ctx->pc = 0x3460F0u;
    SET_GPR_U32(ctx, 31, 0x3460F8u);
    ctx->pc = 0x3460F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3460F0u;
    // 0x3460f4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5370u, 0x3460F0u, 0x3460F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3460F8u;
label_3460f8:
    // 0x3460f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3460F8u;
    {
        const bool branch_taken_0x3460f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460F8u;
        // 0x3460fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460f8) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346100u;
label_346100:
    // 0x346100: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346104: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346108: 0xc0a9504  jal         func_2A5410
    ctx->pc = 0x346108u;
    SET_GPR_U32(ctx, 31, 0x346110u);
    ctx->pc = 0x34610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346108u;
    // 0x34610c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5410u, 0x346108u, 0x346110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346110u;
label_346110:
    // 0x346110: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x346110u;
    {
        const bool branch_taken_0x346110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346110u;
        // 0x346114: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346110) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346118u;
label_346118:
    // 0x346118: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34611c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346120: 0xc0a9514  jal         func_2A5450
    ctx->pc = 0x346120u;
    SET_GPR_U32(ctx, 31, 0x346128u);
    ctx->pc = 0x346124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346120u;
    // 0x346124: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5450u, 0x346120u, 0x346128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346128u;
label_346128:
    // 0x346128: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x346128u;
    {
        const bool branch_taken_0x346128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346128u;
        // 0x34612c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346128) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346130u;
label_346130:
    // 0x346130: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346134: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346138: 0xc0a9524  jal         func_2A5490
    ctx->pc = 0x346138u;
    SET_GPR_U32(ctx, 31, 0x346140u);
    ctx->pc = 0x34613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346138u;
    // 0x34613c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5490u, 0x346138u, 0x346140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346140u;
label_346140:
    // 0x346140: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x346140u;
    {
        const bool branch_taken_0x346140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346140u;
        // 0x346144: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346140) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346148u;
label_346148:
    // 0x346148: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34614c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34614cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346150: 0xc0a9534  jal         func_2A54D0
    ctx->pc = 0x346150u;
    SET_GPR_U32(ctx, 31, 0x346158u);
    ctx->pc = 0x346154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346150u;
    // 0x346154: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A54D0u, 0x346150u, 0x346158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346158u;
label_346158:
    // 0x346158: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x346158u;
    {
        const bool branch_taken_0x346158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346158u;
        // 0x34615c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346158) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346160u;
label_346160:
    // 0x346160: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x346164: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x346164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346168: 0xc0a9544  jal         func_2A5510
    ctx->pc = 0x346168u;
    SET_GPR_U32(ctx, 31, 0x346170u);
    ctx->pc = 0x34616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346168u;
    // 0x34616c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5510u, 0x346168u, 0x346170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346170u;
label_346170:
    // 0x346170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x346170u;
    {
        const bool branch_taken_0x346170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346170u;
        // 0x346174: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346170) {
            ctx->pc = 0x346190u;
            goto label_346190;
        }
    }
    ctx->pc = 0x346178u;
label_346178:
    // 0x346178: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x346178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34617c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346180: 0xc0a9554  jal         func_2A5550
    ctx->pc = 0x346180u;
    SET_GPR_U32(ctx, 31, 0x346188u);
    ctx->pc = 0x346184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346180u;
    // 0x346184: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5550u, 0x346180u, 0x346188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346188u;
label_346188:
    // 0x346188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34618c: 0x0  nop
    ctx->pc = 0x34618cu;
    // NOP
label_346190:
    // 0x346190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x346190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x346194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x346198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x346198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34619c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34619cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3461a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3461a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3461a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3461A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3461A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461A4u;
        // 0x3461a8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3461A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3461ACu;
}
