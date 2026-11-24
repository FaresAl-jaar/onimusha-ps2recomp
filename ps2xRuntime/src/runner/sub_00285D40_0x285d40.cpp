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

// Function: sub_00285D40
// Address: 0x285d40 - 0x2862a0
void sub_00285D40_0x285d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285D40_0x285d40");
#endif

    switch (ctx->pc) {
        case 0x285db0u: goto label_285db0;
        case 0x285de8u: goto label_285de8;
        case 0x286234u: goto label_286234;
        case 0x28624cu: goto label_28624c;
        default: break;
    }

    ctx->pc = 0x285d40u;

    // 0x285d40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x285d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x285d44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x285d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x285d48: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x285d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x285d4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x285d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x285d50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x285d50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d54: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x285d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x285d58: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x285d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285d5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x285d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x285d60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x285d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x285d64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x285d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x285d68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x285d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x285d6c: 0x84840054  lh          $a0, 0x54($a0)
    ctx->pc = 0x285d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x285d70: 0x9105001c  lbu         $a1, 0x1C($t0)
    ctx->pc = 0x285d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x285d74: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x285d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x285d78: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285D78u;
    {
        const bool branch_taken_0x285d78 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x285D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D78u;
        // 0x285d7c: 0x59082  srl         $s2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d78) {
            ctx->pc = 0x285D8Cu;
            goto label_285d8c;
        }
    }
    ctx->pc = 0x285D80u;
    // 0x285d80: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x285D80u;
    {
        const bool branch_taken_0x285d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285d80) {
            ctx->pc = 0x285D8Cu;
            goto label_285d8c;
        }
    }
    ctx->pc = 0x285D88u;
    // 0x285d88: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x285d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_285d8c:
    // 0x285d8c: 0x1460013a  bnez        $v1, . + 4 + (0x13A << 2)
    ctx->pc = 0x285D8Cu;
    {
        const bool branch_taken_0x285d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285d8c) {
            ctx->pc = 0x286278u;
            goto label_286278;
        }
    }
    ctx->pc = 0x285D94u;
    // 0x285d94: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x285d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x285d98: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x285d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x285d9c: 0x10200136  beqz        $at, . + 4 + (0x136 << 2)
    ctx->pc = 0x285D9Cu;
    {
        const bool branch_taken_0x285d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285D9Cu;
        // 0x285da0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d9c) {
            ctx->pc = 0x286278u;
            goto label_286278;
        }
    }
    ctx->pc = 0x285DA4u;
    // 0x285da4: 0x6843c  dsll32      $s0, $a2, 16
    ctx->pc = 0x285da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 16));
    // 0x285da8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x285da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285dac: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x285dacu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_285db0:
    // 0x285db0: 0x92230013  lbu         $v1, 0x13($s1)
    ctx->pc = 0x285db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x285db4: 0x1460012a  bnez        $v1, . + 4 + (0x12A << 2)
    ctx->pc = 0x285DB4u;
    {
        const bool branch_taken_0x285db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285db4) {
            ctx->pc = 0x286260u;
            goto label_286260;
        }
    }
    ctx->pc = 0x285DBCu;
    // 0x285dbc: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x285dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x285dc0: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x285dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x285dc4: 0x14830126  bne         $a0, $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x285DC4u;
    {
        const bool branch_taken_0x285dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x285DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285DC4u;
        // 0x285dc8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dc4) {
            ctx->pc = 0x286260u;
            goto label_286260;
        }
    }
    ctx->pc = 0x285DCCu;
    // 0x285dcc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x285dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x285dd0: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x285dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x285dd4: 0x26870012  addiu       $a3, $s4, 0x12
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 18));
    // 0x285dd8: 0x26880014  addiu       $t0, $s4, 0x14
    ctx->pc = 0x285dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x285ddc: 0x26890018  addiu       $t1, $s4, 0x18
    ctx->pc = 0x285ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x285de0: 0xc096da0  jal         func_25B680
    ctx->pc = 0x285DE0u;
    SET_GPR_U32(ctx, 31, 0x285DE8u);
    ctx->pc = 0x285DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285DE0u;
    // 0x285de4: 0xa6200010  sh          $zero, 0x10($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x285DE0u, 0x285DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285DE8u;
label_285de8:
    // 0x285de8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x285de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285dec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285df0: 0x34430dcd  ori         $v1, $v0, 0xDCD
    ctx->pc = 0x285df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285df4: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x285df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285df8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285dfc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285e00: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285e04: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x285e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285e08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285e0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x285e10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x285e14: 0xa2220012  sb          $v0, 0x12($s1)
    ctx->pc = 0x285e14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x285e18: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285e1c: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x285e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285e20: 0xc684000c  lwc1        $f4, 0xC($s4)
    ctx->pc = 0x285e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285e24: 0x70431018  mult1       $v0, $v0, $v1
    ctx->pc = 0x285e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285e2c: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285e30: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285e34: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x285e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285e38: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285E38u;
    {
        const bool branch_taken_0x285e38 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E38u;
        // 0x285e3c: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e38) {
            ctx->pc = 0x285E4Cu;
            goto label_285e4c;
        }
    }
    ctx->pc = 0x285E40u;
    // 0x285e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285e44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285E44u;
    {
        const bool branch_taken_0x285e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E44u;
        // 0x285e48: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e44) {
            ctx->pc = 0x285E68u;
            goto label_285e68;
        }
    }
    ctx->pc = 0x285E4Cu;
label_285e4c:
    // 0x285e4c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x285e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x285e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285e54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x285e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285e5c: 0x0  nop
    ctx->pc = 0x285e5cu;
    // NOP
    // 0x285e60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x285e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x285e64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x285e64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_285e68:
    // 0x285e68: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x285e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x285e6c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x285e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x285e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285e78: 0x0  nop
    ctx->pc = 0x285e78u;
    // NOP
    // 0x285e7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x285e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x285e80: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x285e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x285e84: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x285e84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x285e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285e8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x285E8Cu;
    {
        const bool branch_taken_0x285e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285E8Cu;
        // 0x285e90: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e8c) {
            ctx->pc = 0x285E98u;
            goto label_285e98;
        }
    }
    ctx->pc = 0x285E94u;
    // 0x285e94: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x285e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_285e98:
    // 0x285e98: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x285e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285e9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285ea0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285ea4: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x285ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285ea8: 0xc6840028  lwc1        $f4, 0x28($s4)
    ctx->pc = 0x285ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285eac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x285eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285eb4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285eb8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x285eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285ebc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x285ec0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285EC0u;
    {
        const bool branch_taken_0x285ec0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EC0u;
        // 0x285ec4: 0x460400c1  sub.s       $f3, $f0, $f4 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ec0) {
            ctx->pc = 0x285ED4u;
            goto label_285ed4;
        }
    }
    ctx->pc = 0x285EC8u;
    // 0x285ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x285ECCu;
    {
        const bool branch_taken_0x285ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ECCu;
        // 0x285ed0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ecc) {
            ctx->pc = 0x285EF0u;
            goto label_285ef0;
        }
    }
    ctx->pc = 0x285ED4u;
label_285ed4:
    // 0x285ed4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x285ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x285ed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x285edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285ee0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285ee4: 0x0  nop
    ctx->pc = 0x285ee4u;
    // NOP
    // 0x285ee8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x285ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x285eec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x285eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_285ef0:
    // 0x285ef0: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
    // 0x285ef4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x285ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x285ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285f00: 0x0  nop
    ctx->pc = 0x285f00u;
    // NOP
    // 0x285f04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x285f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x285f08: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x285f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x285f0c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x285f0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x285f10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x285f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285f14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x285F14u;
    {
        const bool branch_taken_0x285f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x285F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F14u;
        // 0x285f18: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f14) {
            ctx->pc = 0x285F20u;
            goto label_285f20;
        }
    }
    ctx->pc = 0x285F1Cu;
    // 0x285f1c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x285f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_285f20:
    // 0x285f20: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x285f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285f24: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285f28: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285f2c: 0xc684003c  lwc1        $f4, 0x3C($s4)
    ctx->pc = 0x285f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x285f30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x285f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x285f34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x285f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x285f38: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x285f38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x285f3c: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x285f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285f40: 0x41302  srl         $v0, $a0, 12
    ctx->pc = 0x285f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x285f44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285F44u;
    {
        const bool branch_taken_0x285f44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x285F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F44u;
        // 0x285f48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f44) {
            ctx->pc = 0x285F58u;
            goto label_285f58;
        }
    }
    ctx->pc = 0x285F4Cu;
    // 0x285f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x285f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x285F50u;
    {
        const bool branch_taken_0x285f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F50u;
        // 0x285f54: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f50) {
            ctx->pc = 0x285F70u;
            goto label_285f70;
        }
    }
    ctx->pc = 0x285F58u;
label_285f58:
    // 0x285f58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285f5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x285f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x285f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x285f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285f64: 0x0  nop
    ctx->pc = 0x285f64u;
    // NOP
    // 0x285f68: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x285f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x285f6c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x285f6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_285f70:
    // 0x285f70: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x285f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x285f74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x285f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x285f78: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x285f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x285f7c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x285f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x285f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x285f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x285f84: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x285f84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x285f88: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x285f88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x285f8c: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x285f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x285f90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x285f90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x285f94: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x285f94u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x285f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x285f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x285f9c: 0x0  nop
    ctx->pc = 0x285f9cu;
    // NOP
    // 0x285fa0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x285fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x285fa4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x285FA4u;
    {
        const bool branch_taken_0x285fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x285fa4) {
            ctx->pc = 0x285FB0u;
            goto label_285fb0;
        }
    }
    ctx->pc = 0x285FACu;
    // 0x285fac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x285facu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_285fb0:
    // 0x285fb0: 0x9282001f  lbu         $v0, 0x1F($s4)
    ctx->pc = 0x285fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 31)));
    // 0x285fb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x285fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x285fb8: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x285FB8u;
    {
        const bool branch_taken_0x285fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285FB8u;
        // 0x285fbc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb8) {
            ctx->pc = 0x2860C8u;
            goto label_2860c8;
        }
    }
    ctx->pc = 0x285FC0u;
    // 0x285fc0: 0x12020041  beq         $s0, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x2860C8u;
            goto label_2860c8;
        }
    }
    ctx->pc = 0x285FC8u;
    // 0x285fc8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x285fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x285fcc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x285fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x285fd0: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x285fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x285fd4: 0x96870002  lhu         $a3, 0x2($s4)
    ctx->pc = 0x285fd4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x285fd8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x285fd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x285fdc: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x285fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x285fe0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x285fe4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x285fe8: 0xaf8680e0  sw          $a2, -0x7F20($gp)
    ctx->pc = 0x285fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 6));
    // 0x285fec: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x285ff0: 0x8f8680e0  lw          $a2, -0x7F20($gp)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x285ff4: 0x63302  srl         $a2, $a2, 12
    ctx->pc = 0x285ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 12));
    // 0x285ff8: 0xc4001b  divu        $zero, $a2, $a0
    ctx->pc = 0x285ff8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x285ffc: 0x0  nop
    ctx->pc = 0x285ffcu;
    // NOP
    // 0x286000: 0x0  nop
    ctx->pc = 0x286000u;
    // NOP
    // 0x286004: 0x2010  mfhi        $a0
    ctx->pc = 0x286004u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x286008: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x286008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28600c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x28600cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x286010: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x286010u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x286014: 0x24860400  addiu       $a2, $a0, 0x400
    ctx->pc = 0x286014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x286018: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x28601c: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x28601cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x286020: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x286020u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x286024: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x286024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x286028: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28602c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x286030: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x286030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286034: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x286034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x286038: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x286038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x28603c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x28603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286040: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x286040u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x286044: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x286044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x286048: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x286048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x28604c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286050: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x286050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286054: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x286054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286058: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x286058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28605c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286060: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286064: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286068: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28606c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28606Cu;
    {
        const bool branch_taken_0x28606c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28606Cu;
        // 0x286070: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28606c) {
            ctx->pc = 0x286080u;
            goto label_286080;
        }
    }
    ctx->pc = 0x286074u;
    // 0x286074: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286078: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286078u;
    {
        const bool branch_taken_0x286078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286078u;
        // 0x28607c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286078) {
            ctx->pc = 0x28609Cu;
            goto label_28609c;
        }
    }
    ctx->pc = 0x286080u;
label_286080:
    // 0x286080: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x286080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286084: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286088: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28608c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28608cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286090: 0x0  nop
    ctx->pc = 0x286090u;
    // NOP
    // 0x286094: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286098: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x286098u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28609c:
    // 0x28609c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x2860a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2860a4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2860a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2860a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2860a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2860ac: 0x0  nop
    ctx->pc = 0x2860acu;
    // NOP
    // 0x2860b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2860b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2860b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2860b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2860b8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2860b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2860bc: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2860bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2860c0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2860C0u;
    {
        const bool branch_taken_0x2860c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860C0u;
        // 0x2860c4: 0xae22003c  sw          $v0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860c0) {
            ctx->pc = 0x286228u;
            goto label_286228;
        }
    }
    ctx->pc = 0x2860C8u;
label_2860c8:
    // 0x2860c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2860c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2860cc: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2860ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2860d0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2860d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2860d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2860d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2860d8: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2860d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2860dc: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2860e0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2860e4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2860E4u;
    {
        const bool branch_taken_0x2860e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2860E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860E4u;
        // 0x2860e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860e4) {
            ctx->pc = 0x2860F8u;
            goto label_2860f8;
        }
    }
    ctx->pc = 0x2860ECu;
    // 0x2860ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2860ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2860f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2860F0u;
    {
        const bool branch_taken_0x2860f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860F0u;
        // 0x2860f4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860f0) {
            ctx->pc = 0x286110u;
            goto label_286110;
        }
    }
    ctx->pc = 0x2860F8u;
label_2860f8:
    // 0x2860f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2860f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2860fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2860fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x286100: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286100u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286104: 0x0  nop
    ctx->pc = 0x286104u;
    // NOP
    // 0x286108: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x286108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28610c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x28610cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_286110:
    // 0x286110: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x286110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x286114: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x286114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x286118: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x286118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x28611c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28611cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286120: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286124: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286128: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28612c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28612cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x286130: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x286130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286134: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x286138: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x286138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x28613c: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x28613cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286140: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x286140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286144: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x286144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x286148: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x286148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28614c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x286150: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x286150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x286154: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x286154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x286158: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x286158u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x28615c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28615Cu;
    {
        const bool branch_taken_0x28615c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x286160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28615Cu;
        // 0x286160: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28615c) {
            ctx->pc = 0x286170u;
            goto label_286170;
        }
    }
    ctx->pc = 0x286164u;
    // 0x286164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286168u;
    {
        const bool branch_taken_0x286168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286168u;
        // 0x28616c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286168) {
            ctx->pc = 0x28618Cu;
            goto label_28618c;
        }
    }
    ctx->pc = 0x286170u;
label_286170:
    // 0x286170: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x286178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28617c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28617cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286180: 0x0  nop
    ctx->pc = 0x286180u;
    // NOP
    // 0x286184: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x286184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x286188: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x286188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_28618c:
    // 0x28618c: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x28618cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x286190: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x286190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x286194: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286198: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x286198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x28619c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28619cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861a0: 0x0  nop
    ctx->pc = 0x2861a0u;
    // NOP
    // 0x2861a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2861a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2861a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2861a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2861ac: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2861acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2861b0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2861b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2861b4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2861b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2861b8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2861b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2861bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2861bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2861c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2861c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2861c4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2861c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2861c8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2861c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2861cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2861CCu;
    {
        const bool branch_taken_0x2861cc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2861D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861CCu;
        // 0x2861d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2861cc) {
            ctx->pc = 0x2861E0u;
            goto label_2861e0;
        }
    }
    ctx->pc = 0x2861D4u;
    // 0x2861d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2861d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2861D8u;
    {
        const bool branch_taken_0x2861d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2861DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2861D8u;
        // 0x2861dc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2861d8) {
            ctx->pc = 0x2861F8u;
            goto label_2861f8;
        }
    }
    ctx->pc = 0x2861E0u;
label_2861e0:
    // 0x2861e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2861e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2861e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2861e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2861e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2861e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2861ec: 0x0  nop
    ctx->pc = 0x2861ecu;
    // NOP
    // 0x2861f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2861f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2861f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2861f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2861f8:
    // 0x2861f8: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2861f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x2861fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2861fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x286200: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x286200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x286204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x286208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28620c: 0x0  nop
    ctx->pc = 0x28620cu;
    // NOP
    // 0x286210: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x286210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x286214: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x286214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x286218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x286218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28621c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28621cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x286220: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x286220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x286224: 0x0  nop
    ctx->pc = 0x286224u;
    // NOP
label_286228:
    // 0x286228: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x286228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28622c: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x28622Cu;
    SET_GPR_U32(ctx, 31, 0x286234u);
    ctx->pc = 0x286230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28622Cu;
    // 0x286230: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x28622Cu, 0x286234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286234u;
label_286234:
    // 0x286234: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x286234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x286238: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x286238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x28623c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28623cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x286240: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x286240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286244: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x286244u;
    SET_GPR_U32(ctx, 31, 0x28624Cu);
    ctx->pc = 0x286248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286244u;
    // 0x286248: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x286244u, 0x28624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28624Cu;
label_28624c:
    // 0x28624c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286250: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x286250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x286254: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x286254u;
    {
        const bool branch_taken_0x286254 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x286258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286254u;
        // 0x286258: 0xa2230013  sb          $v1, 0x13($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286254) {
            ctx->pc = 0x286278u;
            goto label_286278;
        }
    }
    ctx->pc = 0x28625Cu;
    // 0x28625c: 0x0  nop
    ctx->pc = 0x28625cu;
    // NOP
label_286260:
    // 0x286260: 0x9283001c  lbu         $v1, 0x1C($s4)
    ctx->pc = 0x286260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x286264: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x286264u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x286268: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x286268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28626c: 0x1460fed0  bnez        $v1, . + 4 + (-0x130 << 2)
    ctx->pc = 0x28626Cu;
    {
        const bool branch_taken_0x28626c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28626Cu;
        // 0x286270: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28626c) {
            ctx->pc = 0x285DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285db0;
        }
    }
    ctx->pc = 0x286274u;
    // 0x286274: 0x0  nop
    ctx->pc = 0x286274u;
    // NOP
label_286278:
    // 0x286278: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x286278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28627c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28627cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286280: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x286280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x286284: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x286284u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286288: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x286288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28628c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28628cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286290: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x286290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x286294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286298: 0x3e00008  jr          $ra
    ctx->pc = 0x286298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286298u;
        // 0x28629c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2862A0u;
}
