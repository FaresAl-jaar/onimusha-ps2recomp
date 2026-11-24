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

// Function: sub_001BA290
// Address: 0x1ba290 - 0x1ba85c
void sub_001BA290_0x1ba290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA290_0x1ba290");
#endif

    switch (ctx->pc) {
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba3b4u: goto label_1ba3b4;
        case 0x1ba4a8u: goto label_1ba4a8;
        case 0x1ba4bcu: goto label_1ba4bc;
        case 0x1ba4ccu: goto label_1ba4cc;
        case 0x1ba4dcu: goto label_1ba4dc;
        case 0x1ba4ecu: goto label_1ba4ec;
        case 0x1ba4fcu: goto label_1ba4fc;
        case 0x1ba574u: goto label_1ba574;
        case 0x1ba5acu: goto label_1ba5ac;
        case 0x1ba5ecu: goto label_1ba5ec;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba664u: goto label_1ba664;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba67cu: goto label_1ba67c;
        case 0x1ba758u: goto label_1ba758;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba7a8u: goto label_1ba7a8;
        case 0x1ba7b0u: goto label_1ba7b0;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7e4u: goto label_1ba7e4;
        case 0x1ba7fcu: goto label_1ba7fc;
        case 0x1ba814u: goto label_1ba814;
        default: break;
    }

    ctx->pc = 0x1ba290u;

    // 0x1ba290: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ba290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ba294: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ba294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ba298: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ba298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ba29c: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1ba29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ba2a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ba2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ba2a4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ba2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ba2a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ba2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ba2ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ba2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ba2b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ba2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ba2b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ba2b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ba2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ba2bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ba2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2c0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA2C0u;
    {
        const bool branch_taken_0x1ba2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2C0u;
        // 0x1ba2c4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2c0) {
            ctx->pc = 0x1BA2E4u;
            goto label_1ba2e4;
        }
    }
    ctx->pc = 0x1BA2C8u;
label_1ba2c8:
    // 0x1ba2c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ba2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba2cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba2d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba2d4: 0x0  nop
    ctx->pc = 0x1ba2d4u;
    // NOP
    // 0x1ba2d8: 0x0  nop
    ctx->pc = 0x1ba2d8u;
    // NOP
    // 0x1ba2dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA2DCu;
    {
        const bool branch_taken_0x1ba2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2dc) {
            ctx->pc = 0x1BA2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba2c8;
        }
    }
    ctx->pc = 0x1BA2E4u;
label_1ba2e4:
    // 0x1ba2e4: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x1ba2e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1ba2e8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba2ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba2f0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA2F0u;
    {
        const bool branch_taken_0x1ba2f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2F0u;
        // 0x1ba2f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2f0) {
            ctx->pc = 0x1BA304u;
            goto label_1ba304;
        }
    }
    ctx->pc = 0x1BA2F8u;
    // 0x1ba2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba2fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA2FCu;
    {
        const bool branch_taken_0x1ba2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2FCu;
        // 0x1ba300: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2fc) {
            ctx->pc = 0x1BA31Cu;
            goto label_1ba31c;
        }
    }
    ctx->pc = 0x1BA304u;
label_1ba304:
    // 0x1ba304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba308: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba30c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba310: 0x0  nop
    ctx->pc = 0x1ba310u;
    // NOP
    // 0x1ba314: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba318: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba31c:
    // 0x1ba31c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1ba31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ba320: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba324: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1ba324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1ba328: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ba328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ba32c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba330: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba334: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA334u;
    {
        const bool branch_taken_0x1ba334 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA334u;
        // 0x1ba338: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba334) {
            ctx->pc = 0x1BA348u;
            goto label_1ba348;
        }
    }
    ctx->pc = 0x1BA33Cu;
    // 0x1ba33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA340u;
    {
        const bool branch_taken_0x1ba340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA340u;
        // 0x1ba344: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba340) {
            ctx->pc = 0x1BA360u;
            goto label_1ba360;
        }
    }
    ctx->pc = 0x1BA348u;
label_1ba348:
    // 0x1ba348: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba34c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba350: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba354: 0x0  nop
    ctx->pc = 0x1ba354u;
    // NOP
    // 0x1ba358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba35c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba35cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba360:
    // 0x1ba360: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1ba360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1ba364: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba368: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1ba36c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1ba36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1ba370: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba374: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba378: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA378u;
    {
        const bool branch_taken_0x1ba378 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA378u;
        // 0x1ba37c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba378) {
            ctx->pc = 0x1BA38Cu;
            goto label_1ba38c;
        }
    }
    ctx->pc = 0x1BA380u;
    // 0x1ba380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba384: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA384u;
    {
        const bool branch_taken_0x1ba384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA384u;
        // 0x1ba388: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba384) {
            ctx->pc = 0x1BA3A4u;
            goto label_1ba3a4;
        }
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba390: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba398: 0x0  nop
    ctx->pc = 0x1ba398u;
    // NOP
    // 0x1ba39c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba3a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba3a4:
    // 0x1ba3a4: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1ba3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ba3a8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ba3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ba3ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA3ACu;
    {
        const bool branch_taken_0x1ba3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3ACu;
        // 0x1ba3b0: 0xe7a00118  swc1        $f0, 0x118($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3ac) {
            ctx->pc = 0x1BA3D0u;
            goto label_1ba3d0;
        }
    }
    ctx->pc = 0x1BA3B4u;
label_1ba3b4:
    // 0x1ba3b4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ba3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba3b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba3bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba3c0: 0x0  nop
    ctx->pc = 0x1ba3c0u;
    // NOP
    // 0x1ba3c4: 0x0  nop
    ctx->pc = 0x1ba3c4u;
    // NOP
    // 0x1ba3c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA3C8u;
    {
        const bool branch_taken_0x1ba3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3c8) {
            ctx->pc = 0x1BA3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba3b4;
        }
    }
    ctx->pc = 0x1BA3D0u;
label_1ba3d0:
    // 0x1ba3d0: 0x9243001c  lbu         $v1, 0x1C($s2)
    ctx->pc = 0x1ba3d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ba3d4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba3d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba3dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA3DCu;
    {
        const bool branch_taken_0x1ba3dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3DCu;
        // 0x1ba3e0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3dc) {
            ctx->pc = 0x1BA3F0u;
            goto label_1ba3f0;
        }
    }
    ctx->pc = 0x1BA3E4u;
    // 0x1ba3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba3e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA3E8u;
    {
        const bool branch_taken_0x1ba3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E8u;
        // 0x1ba3ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e8) {
            ctx->pc = 0x1BA408u;
            goto label_1ba408;
        }
    }
    ctx->pc = 0x1BA3F0u;
label_1ba3f0:
    // 0x1ba3f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba3f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba3f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba3f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba3fc: 0x0  nop
    ctx->pc = 0x1ba3fcu;
    // NOP
    // 0x1ba400: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba404: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba408:
    // 0x1ba408: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1ba408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ba40c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba410: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ba414: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1ba418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba41c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba420: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA420u;
    {
        const bool branch_taken_0x1ba420 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA420u;
        // 0x1ba424: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba420) {
            ctx->pc = 0x1BA434u;
            goto label_1ba434;
        }
    }
    ctx->pc = 0x1BA428u;
    // 0x1ba428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba42c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA42Cu;
    {
        const bool branch_taken_0x1ba42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA42Cu;
        // 0x1ba430: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba42c) {
            ctx->pc = 0x1BA44Cu;
            goto label_1ba44c;
        }
    }
    ctx->pc = 0x1BA434u;
label_1ba434:
    // 0x1ba434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba438: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba43c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba43cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba440: 0x0  nop
    ctx->pc = 0x1ba440u;
    // NOP
    // 0x1ba444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba448: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba44c:
    // 0x1ba44c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1ba44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1ba450: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ba454: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ba458: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1ba45c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ba45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba460: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba464: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA464u;
    {
        const bool branch_taken_0x1ba464 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA464u;
        // 0x1ba468: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba464) {
            ctx->pc = 0x1BA478u;
            goto label_1ba478;
        }
    }
    ctx->pc = 0x1BA46Cu;
    // 0x1ba46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba470: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA470u;
    {
        const bool branch_taken_0x1ba470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA470u;
        // 0x1ba474: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba470) {
            ctx->pc = 0x1BA490u;
            goto label_1ba490;
        }
    }
    ctx->pc = 0x1BA478u;
label_1ba478:
    // 0x1ba478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba47c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba484: 0x0  nop
    ctx->pc = 0x1ba484u;
    // NOP
    // 0x1ba488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba48c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba48cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba490:
    // 0x1ba490: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1ba494: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ba494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ba498: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ba498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba49c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4a0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1BA4A0u;
    SET_GPR_U32(ctx, 31, 0x1BA4A8u);
    ctx->pc = 0x1BA4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4A0u;
    // 0x1ba4a4: 0xe7a00108  swc1        $f0, 0x108($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1BA4A0u, 0x1BA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4A8u;
label_1ba4a8:
    // 0x1ba4a8: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x1ba4ac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ba4b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ba4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba4b4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x1BA4B4u;
    SET_GPR_U32(ctx, 31, 0x1BA4BCu);
    ctx->pc = 0x1BA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4B4u;
    // 0x1ba4b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x1BA4B4u, 0x1BA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4BCu;
label_1ba4bc:
    // 0x1ba4bc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ba4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ba4c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4c4: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1BA4C4u;
    SET_GPR_U32(ctx, 31, 0x1BA4CCu);
    ctx->pc = 0x1BA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4C4u;
    // 0x1ba4c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BA4C4u, 0x1BA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4CCu;
label_1ba4cc:
    // 0x1ba4cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ba4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ba4d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4d4: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1BA4D4u;
    SET_GPR_U32(ctx, 31, 0x1BA4DCu);
    ctx->pc = 0x1BA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4D4u;
    // 0x1ba4d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BA4D4u, 0x1BA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4DCu;
label_1ba4dc:
    // 0x1ba4dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ba4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ba4e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4e4: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1BA4E4u;
    SET_GPR_U32(ctx, 31, 0x1BA4ECu);
    ctx->pc = 0x1BA4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4E4u;
    // 0x1ba4e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BA4E4u, 0x1BA4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4ECu;
label_1ba4ec:
    // 0x1ba4ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ba4f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba4f4: 0xc0414d6  jal         func_105358
    ctx->pc = 0x1BA4F4u;
    SET_GPR_U32(ctx, 31, 0x1BA4FCu);
    ctx->pc = 0x1BA4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4F4u;
    // 0x1ba4f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105358u, 0x1BA4F4u, 0x1BA4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4FCu;
label_1ba4fc:
    // 0x1ba4fc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x1ba4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba500: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ba500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba504: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba508: 0x27a80114  addiu       $t0, $sp, 0x114
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1ba50c: 0x27a70118  addiu       $a3, $sp, 0x118
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1ba510: 0x27a30104  addiu       $v1, $sp, 0x104
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1ba514: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1ba514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1ba518: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1ba518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1ba51c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ba520: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ba524: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba524u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba528: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1ba528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1ba52c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1ba52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba530: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba530u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba534: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1ba534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1ba538: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1ba538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba53c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba53cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba540: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x1ba540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1ba544: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1ba544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba548: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba548u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba54c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1ba54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1ba550: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1ba550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba554: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba554u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba558: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ba558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1ba55c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ba55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba560: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ba560u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ba564: 0x0  nop
    ctx->pc = 0x1ba564u;
    // NOP
    // 0x1ba568: 0x0  nop
    ctx->pc = 0x1ba568u;
    // NOP
    // 0x1ba56c: 0xc0414ca  jal         func_105328
    ctx->pc = 0x1BA56Cu;
    SET_GPR_U32(ctx, 31, 0x1BA574u);
    ctx->pc = 0x1BA570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA56Cu;
    // 0x1ba570: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x1BA56Cu, 0x1BA574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA574u;
label_1ba574:
    // 0x1ba574: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1ba574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba578: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ba578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ba57c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba580: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ba580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ba584: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ba584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ba588: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba58c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ba58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ba590: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ba590u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ba594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ba594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba59c: 0x0  nop
    ctx->pc = 0x1ba59cu;
    // NOP
    // 0x1ba5a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba5a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba5a4: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1BA5A4u;
    SET_GPR_U32(ctx, 31, 0x1BA5ACu);
    ctx->pc = 0x1BA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5A4u;
    // 0x1ba5a8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1BA5A4u, 0x1BA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5ACu;
label_1ba5ac:
    // 0x1ba5ac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1ba5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ba5b0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ba5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ba5b4: 0xc6430010  lwc1        $f3, 0x10($s2)
    ctx->pc = 0x1ba5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba5b8: 0x27b000e8  addiu       $s0, $sp, 0xE8
    ctx->pc = 0x1ba5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1ba5bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ba5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba5c0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ba5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ba5c4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ba5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ba5c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba5cc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1ba5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1ba5d0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1ba5d0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1ba5d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ba5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba5d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba5dc: 0x0  nop
    ctx->pc = 0x1ba5dcu;
    // NOP
    // 0x1ba5e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba5e4: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1BA5E4u;
    SET_GPR_U32(ctx, 31, 0x1BA5ECu);
    ctx->pc = 0x1BA5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5E4u;
    // 0x1ba5e8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1BA5E4u, 0x1BA5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5ECu;
label_1ba5ec:
    // 0x1ba5ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1ba5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1ba5f0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1ba5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1ba5f4: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x1ba5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ba5f8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ba5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ba5fc: 0xc7a500e0  lwc1        $f5, 0xE0($sp)
    ctx->pc = 0x1ba5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ba600: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ba604: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1ba604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ba608: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba60c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1ba60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1ba610: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x1ba610u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x1ba614: 0x4605281a  mula.s      $f5, $f5
    ctx->pc = 0x1ba614u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[5], ctx->f[5]));
    // 0x1ba618: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1ba618u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1ba61c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1ba61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba620: 0x46000504  c1          0x504
    ctx->pc = 0x1ba620u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ba624: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ba624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ba628: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba62c: 0x0  nop
    ctx->pc = 0x1ba62cu;
    // NOP
    // 0x1ba630: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x1ba630u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba634: 0x0  nop
    ctx->pc = 0x1ba634u;
    // NOP
    // 0x1ba638: 0x0  nop
    ctx->pc = 0x1ba638u;
    // NOP
    // 0x1ba63c: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x1BA63Cu;
    SET_GPR_U32(ctx, 31, 0x1BA644u);
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x1BA63Cu, 0x1BA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA644u;
label_1ba644:
    // 0x1ba644: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1ba644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1ba648: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ba64c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ba64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ba650: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ba650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba654: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1ba658: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1ba658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1ba65c: 0xc041442  jal         func_105108
    ctx->pc = 0x1BA65Cu;
    SET_GPR_U32(ctx, 31, 0x1BA664u);
    ctx->pc = 0x1BA660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA65Cu;
    // 0x1ba660: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1BA65Cu, 0x1BA664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA664u;
label_1ba664:
    // 0x1ba664: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1ba668: 0xc041472  jal         func_1051C8
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x1BA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA668u;
    // 0x1ba66c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x1BA668u, 0x1BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA670u;
label_1ba670:
    // 0x1ba670: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1ba670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1ba674: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA674u;
    {
        const bool branch_taken_0x1ba674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA674u;
        // 0x1ba678: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba674) {
            ctx->pc = 0x1BA698u;
            goto label_1ba698;
        }
    }
    ctx->pc = 0x1BA67Cu;
label_1ba67c:
    // 0x1ba67c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ba67cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ba680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba684: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba688: 0x0  nop
    ctx->pc = 0x1ba688u;
    // NOP
    // 0x1ba68c: 0x0  nop
    ctx->pc = 0x1ba68cu;
    // NOP
    // 0x1ba690: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA690u;
    {
        const bool branch_taken_0x1ba690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba690) {
            ctx->pc = 0x1BA67Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba67c;
        }
    }
    ctx->pc = 0x1BA698u;
label_1ba698:
    // 0x1ba698: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1ba698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ba69c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA69Cu;
    {
        const bool branch_taken_0x1ba69c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA69Cu;
        // 0x1ba6a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba69c) {
            ctx->pc = 0x1BA6B0u;
            goto label_1ba6b0;
        }
    }
    ctx->pc = 0x1BA6A4u;
    // 0x1ba6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA6A8u;
    {
        const bool branch_taken_0x1ba6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6A8u;
        // 0x1ba6ac: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6a8) {
            ctx->pc = 0x1BA6C8u;
            goto label_1ba6c8;
        }
    }
    ctx->pc = 0x1BA6B0u;
label_1ba6b0:
    // 0x1ba6b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba6b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba6b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6bc: 0x0  nop
    ctx->pc = 0x1ba6bcu;
    // NOP
    // 0x1ba6c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba6c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba6c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba6c8:
    // 0x1ba6c8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1ba6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ba6cc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1ba6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ba6d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1ba6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ba6d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ba6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ba6d8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA6D8u;
    {
        const bool branch_taken_0x1ba6d8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6D8u;
        // 0x1ba6dc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6d8) {
            ctx->pc = 0x1BA6ECu;
            goto label_1ba6ec;
        }
    }
    ctx->pc = 0x1BA6E0u;
    // 0x1ba6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA6E4u;
    {
        const bool branch_taken_0x1ba6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6E4u;
        // 0x1ba6e8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6e4) {
            ctx->pc = 0x1BA704u;
            goto label_1ba704;
        }
    }
    ctx->pc = 0x1BA6ECu;
label_1ba6ec:
    // 0x1ba6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba6f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba6f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba6f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6f8: 0x0  nop
    ctx->pc = 0x1ba6f8u;
    // NOP
    // 0x1ba6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba700: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba704:
    // 0x1ba704: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1ba704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1ba708: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1ba708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ba70c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1ba710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ba710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ba714: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA714u;
    {
        const bool branch_taken_0x1ba714 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1BA718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA714u;
        // 0x1ba718: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba714) {
            ctx->pc = 0x1BA728u;
            goto label_1ba728;
        }
    }
    ctx->pc = 0x1BA71Cu;
    // 0x1ba71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba720: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA720u;
    {
        const bool branch_taken_0x1ba720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA720u;
        // 0x1ba724: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba720) {
            ctx->pc = 0x1BA740u;
            goto label_1ba740;
        }
    }
    ctx->pc = 0x1BA728u;
label_1ba728:
    // 0x1ba728: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba72c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ba72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba730: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba734: 0x0  nop
    ctx->pc = 0x1ba734u;
    // NOP
    // 0x1ba738: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ba738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ba73c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ba73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ba740:
    // 0x1ba740: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1ba740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ba744: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ba744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba748: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1ba748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1ba74c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1ba74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba750: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1ba750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba754: 0x0  nop
    ctx->pc = 0x1ba754u;
    // NOP
label_1ba758:
    // 0x1ba758: 0x34018a00  ori         $at, $zero, 0x8A00
    ctx->pc = 0x1ba758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35328);
    // 0x1ba75c: 0x2612021  addu        $a0, $s3, $at
    ctx->pc = 0x1ba75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1ba760: 0xc041468  jal         func_1051A0
    ctx->pc = 0x1BA760u;
    SET_GPR_U32(ctx, 31, 0x1BA768u);
    ctx->pc = 0x1BA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA760u;
    // 0x1ba764: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x1BA760u, 0x1BA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA768u;
label_1ba768:
    // 0x1ba768: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1ba768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1ba76c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ba770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba774: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x1ba774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1ba778: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ba778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ba77c: 0x2e820048  sltiu       $v0, $s4, 0x48
    ctx->pc = 0x1ba77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)72) ? 1 : 0);
    // 0x1ba780: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ba784: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ba784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ba788: 0x0  nop
    ctx->pc = 0x1ba788u;
    // NOP
    // 0x1ba78c: 0x41fc3  sra         $v1, $a0, 31
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 31));
    // 0x1ba790: 0x601827  not         $v1, $v1
    ctx->pc = 0x1ba790u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1ba794: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ba794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ba798: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x1ba798u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ba79c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1BA79Cu;
    {
        const bool branch_taken_0x1ba79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA79Cu;
        // 0x1ba7a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba79c) {
            ctx->pc = 0x1BA758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba758;
        }
    }
    ctx->pc = 0x1BA7A4u;
    // 0x1ba7a4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ba7a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7a8:
    // 0x1ba7a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ba7a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba7ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ba7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba7b0:
    // 0x1ba7b0: 0x2139021  addu        $s2, $s0, $s3
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1ba7b4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ba7b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ba7b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba7bc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba7c0: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba7c0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba7c4: 0xc0707f0  jal         func_1C1FC0
    ctx->pc = 0x1BA7C4u;
    SET_GPR_U32(ctx, 31, 0x1BA7CCu);
    ctx->pc = 0x1BA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7C4u;
    // 0x1ba7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC0u, 0x1BA7C4u, 0x1BA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7CCu;
label_1ba7cc:
    // 0x1ba7cc: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1ba7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ba7d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba7d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba7d8: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba7d8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba7dc: 0xc0707f0  jal         func_1C1FC0
    ctx->pc = 0x1BA7DCu;
    SET_GPR_U32(ctx, 31, 0x1BA7E4u);
    ctx->pc = 0x1BA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7DCu;
    // 0x1ba7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC0u, 0x1BA7DCu, 0x1BA7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7E4u;
label_1ba7e4:
    // 0x1ba7e4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x1ba7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1ba7e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba7ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba7f0: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba7f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba7f4: 0xc0707f0  jal         func_1C1FC0
    ctx->pc = 0x1BA7F4u;
    SET_GPR_U32(ctx, 31, 0x1BA7FCu);
    ctx->pc = 0x1BA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7F4u;
    // 0x1ba7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC0u, 0x1BA7F4u, 0x1BA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7FCu;
label_1ba7fc:
    // 0x1ba7fc: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x1ba7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1ba800: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ba800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba804: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ba804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ba808: 0x78457a00  lq          $a1, 0x7A00($v0)
    ctx->pc = 0x1ba808u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 31232)));
    // 0x1ba80c: 0xc0707f0  jal         func_1C1FC0
    ctx->pc = 0x1BA80Cu;
    SET_GPR_U32(ctx, 31, 0x1BA814u);
    ctx->pc = 0x1BA810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA80Cu;
    // 0x1ba810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FC0u, 0x1BA80Cu, 0x1BA814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA814u;
label_1ba814:
    // 0x1ba814: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1ba814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1ba818: 0x2e8300e0  sltiu       $v1, $s4, 0xE0
    ctx->pc = 0x1ba818u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)224) ? 1 : 0);
    // 0x1ba81c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1BA81Cu;
    {
        const bool branch_taken_0x1ba81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA81Cu;
        // 0x1ba820: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba81c) {
            ctx->pc = 0x1BA7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba7b0;
        }
    }
    ctx->pc = 0x1BA824u;
    // 0x1ba824: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1ba824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba828: 0x2ea30200  sltiu       $v1, $s5, 0x200
    ctx->pc = 0x1ba828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x1ba82c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1BA82Cu;
    {
        const bool branch_taken_0x1ba82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA82Cu;
        // 0x1ba830: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba82c) {
            ctx->pc = 0x1BA7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba7a8;
        }
    }
    ctx->pc = 0x1BA834u;
    // 0x1ba834: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ba834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ba838: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ba838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ba83c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ba83cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ba840: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ba840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba844: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ba844u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba848: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ba848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba84c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ba84cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba850: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ba850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba854: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA854u;
        // 0x1ba858: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA85Cu;
}
