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

// Function: sub_0011B258
// Address: 0x11b258 - 0x11b420
void sub_0011B258_0x11b258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B258_0x11b258");
#endif

    switch (ctx->pc) {
        case 0x11b2e0u: goto label_11b2e0;
        case 0x11b2e4u: goto label_11b2e4;
        case 0x11b2e8u: goto label_11b2e8;
        case 0x11b2fcu: goto label_11b2fc;
        case 0x11b384u: goto label_11b384;
        case 0x11b38cu: goto label_11b38c;
        case 0x11b3b0u: goto label_11b3b0;
        default: break;
    }

    ctx->pc = 0x11b258u;

    // 0x11b258: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x11b258u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x11b25c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b260: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11b260u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11b264: 0x440c6800  mfc1        $t4, $f13
    ctx->pc = 0x11b264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x11b268: 0x440b6000  mfc1        $t3, $f12
    ctx->pc = 0x11b268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x11b26c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11b26cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11b270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b274: 0x18e4824  and         $t1, $t4, $t6
    ctx->pc = 0x11b274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11b278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11b278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11b27c: 0x3c0f3f80  lui         $t7, 0x3F80
    ctx->pc = 0x11b27cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16256 << 16));
    // 0x11b280: 0x158f0005  bne         $t4, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B280u;
    {
        const bool branch_taken_0x11b280 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 15));
        ctx->pc = 0x11B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B280u;
        // 0x11b284: 0x16e5024  and         $t2, $t3, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b280) {
            ctx->pc = 0x11B298u;
            goto label_11b298;
        }
    }
    ctx->pc = 0x11B288u;
    // 0x11b288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b28c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b290: 0x80479da  j           func_11E768
    ctx->pc = 0x11B290u;
    ctx->pc = 0x11B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B290u;
    // 0x11b294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E768u;
    sub_0011E768_0x11e768(rdram, ctx, runtime); return;
    ctx->pc = 0x11B298u;
label_11b298:
    // 0x11b298: 0xc7f83  sra         $t7, $t4, 30
    ctx->pc = 0x11b298u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 12), 30));
    // 0x11b29c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x11b29cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x11b2a0: 0x31ef0002  andi        $t7, $t7, 0x2
    ctx->pc = 0x11b2a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x11b2a4: 0xb6fc2  srl         $t5, $t3, 31
    ctx->pc = 0x11b2a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x11b2a8: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11b2a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11b2ac: 0x1ca702a  slt         $t6, $t6, $t2
    ctx->pc = 0x11b2acu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x11b2b0: 0x15c00011  bnez        $t6, . + 4 + (0x11 << 2)
    ctx->pc = 0x11B2B0u;
    {
        const bool branch_taken_0x11b2b0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2B0u;
        // 0x11b2b4: 0x1af8025  or          $s0, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2b0) {
            ctx->pc = 0x11B2F8u;
            goto label_11b2f8;
        }
    }
    ctx->pc = 0x11B2B8u;
    // 0x11b2b8: 0x3c0e4049  lui         $t6, 0x4049
    ctx->pc = 0x11b2b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16457 << 16));
    // 0x11b2bc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b2c0: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B2C0u;
    {
        const bool branch_taken_0x11b2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2C0u;
        // 0x11b2c4: 0x35ce0fda  ori         $t6, $t6, 0xFDA (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2c0) {
            ctx->pc = 0x11B2E4u;
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B2C8u;
    // 0x11b2c8: 0x2a0f0003  slti        $t7, $s0, 0x3
    ctx->pc = 0x11b2c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x11b2cc: 0x51e0004f  beql        $t7, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x11B2CCu;
    {
        const bool branch_taken_0x11b2cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b2cc) {
            ctx->pc = 0x11B2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B2CCu;
            // 0x11b2d0: 0x3c0ec049  lui         $t6, 0xC049 (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)49225 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B40Cu;
            goto label_11b40c;
        }
    }
    ctx->pc = 0x11B2D4u;
    // 0x11b2d4: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B2D4u;
    {
        const bool branch_taken_0x11b2d4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x11B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2D4u;
        // 0x11b2d8: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2d4) {
            ctx->pc = 0x11B2FCu;
            goto label_11b2fc;
        }
    }
    ctx->pc = 0x11B2DCu;
    // 0x11b2dc: 0x0  nop
    ctx->pc = 0x11b2dcu;
    // NOP
label_11b2e0:
    // 0x11b2e0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x11b2e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
label_11b2e4:
    // 0x11b2e4: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11b2e4u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11b2e8:
    // 0x11b2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b2ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11b2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2F0u;
        // 0x11b2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B2F8u;
label_11b2f8:
    // 0x11b2f8: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
label_11b2fc:
    // 0x11b2fc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b2fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b300: 0x1e9782a  slt         $t7, $t7, $t1
    ctx->pc = 0x11b300u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x11b304: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11B304u;
    {
        const bool branch_taken_0x11b304 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B304u;
        // 0x11b308: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b304) {
            ctx->pc = 0x11B344u;
            goto label_11b344;
        }
    }
    ctx->pc = 0x11B30Cu;
    // 0x11b30c: 0x3c0fbfc9  lui         $t7, 0xBFC9
    ctx->pc = 0x11b30cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)49097 << 16));
    // 0x11b310: 0x35ef0fda  ori         $t7, $t7, 0xFDA
    ctx->pc = 0x11b310u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4058);
    // 0x11b314: 0x48cfb000  ctc2.ni     $t7, $vi22
    ctx->pc = 0x11b314u;
    { uint32_t tmp = GPR_U32(ctx, 15); std::memcpy(&ctx->vu0_q, &tmp, sizeof(tmp)); }
    // 0x11b318: 0x4a0002ff  vnop
    ctx->pc = 0x11b318u;
    // NOP operation, no action needed for VU0
    // 0x11b31c: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B31Cu;
    {
        const bool branch_taken_0x11b31c = (GPR_S64(ctx, 11) < 0);
        ctx->pc = 0x11B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B31Cu;
        // 0x11b320: 0x3c0f3fc9  lui         $t7, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b31c) {
            ctx->pc = 0x11B330u;
            goto label_11b330;
        }
    }
    ctx->pc = 0x11B324u;
    // 0x11b324: 0x35ef0fda  ori         $t7, $t7, 0xFDA
    ctx->pc = 0x11b324u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4058);
    // 0x11b328: 0x48cfb000  ctc2.ni     $t7, $vi22
    ctx->pc = 0x11b328u;
    { uint32_t tmp = GPR_U32(ctx, 15); std::memcpy(&ctx->vu0_q, &tmp, sizeof(tmp)); }
    // 0x11b32c: 0x4a0002ff  vnop
    ctx->pc = 0x11b32cu;
    // NOP operation, no action needed for VU0
label_11b330:
    // 0x11b330: 0x4a0003bf  vwaitq
    ctx->pc = 0x11b330u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x11b334: 0x484eb000  cfc2.ni     $t6, $vi22
    ctx->pc = 0x11b334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11b338: 0x4a0002ff  vnop
    ctx->pc = 0x11b338u;
    // NOP operation, no action needed for VU0
    // 0x11b33c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x11B33Cu;
    {
        const bool branch_taken_0x11b33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B33Cu;
        // 0x11b340: 0x448e0000  mtc1        $t6, $f0 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b33c) {
            ctx->pc = 0x11B2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e8;
        }
    }
    ctx->pc = 0x11B344u;
label_11b344:
    // 0x11b344: 0x1497023  subu        $t6, $t2, $t1
    ctx->pc = 0x11b344u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11b348: 0x25ef2d38  addiu       $t7, $t7, 0x2D38
    ctx->pc = 0x11b348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11576));
    // 0x11b34c: 0xe75c3  sra         $t6, $t6, 23
    ctx->pc = 0x11b34cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 23));
    // 0x11b350: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b354: 0x29cf003d  slti        $t7, $t6, 0x3D
    ctx->pc = 0x11b354u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x11b358: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11B358u;
    {
        const bool branch_taken_0x11b358 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B358u;
        // 0x11b35c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b358) {
            ctx->pc = 0x11B394u;
            goto label_11b394;
        }
    }
    ctx->pc = 0x11B360u;
    // 0x11b360: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B360u;
    {
        const bool branch_taken_0x11b360 = (GPR_S64(ctx, 12) >= 0);
        ctx->pc = 0x11B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B360u;
        // 0x11b364: 0x29cfffc4  slti        $t7, $t6, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b360) {
            ctx->pc = 0x11B370u;
            goto label_11b370;
        }
    }
    ctx->pc = 0x11B368u;
    // 0x11b368: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B368u;
    {
        const bool branch_taken_0x11b368 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B368u;
        // 0x11b36c: 0x44800800  mtc1        $zero, $f1 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b368) {
            ctx->pc = 0x11B390u;
            goto label_11b390;
        }
    }
    ctx->pc = 0x11B370u;
label_11b370:
    // 0x11b370: 0x0  nop
    ctx->pc = 0x11b370u;
    // NOP
    // 0x11b374: 0x0  nop
    ctx->pc = 0x11b374u;
    // NOP
    // 0x11b378: 0x460d0303  div.s       $f12, $f0, $f13
    ctx->pc = 0x11b378u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[13]); }
    // 0x11b37c: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x11B37Cu;
    SET_GPR_U32(ctx, 31, 0x11B384u);
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x11B37Cu, 0x11B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B384u;
label_11b384:
    // 0x11b384: 0xc0479da  jal         func_11E768
    ctx->pc = 0x11B384u;
    SET_GPR_U32(ctx, 31, 0x11B38Cu);
    ctx->pc = 0x11B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B384u;
    // 0x11b388: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E768u, 0x11B384u, 0x11B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B38Cu;
label_11b38c:
    // 0x11b38c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x11b38cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_11b390:
    // 0x11b390: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11b390u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b394:
    // 0x11b394: 0x120f0019  beq         $s0, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x11B394u;
    {
        const bool branch_taken_0x11b394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B394u;
        // 0x11b398: 0x2a0f0002  slti        $t7, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b394) {
            ctx->pc = 0x11B3FCu;
            goto label_11b3fc;
        }
    }
    ctx->pc = 0x11B39Cu;
    // 0x11b39c: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x11B39Cu;
    {
        const bool branch_taken_0x11b39c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B39Cu;
        // 0x11b3a0: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b39c) {
            ctx->pc = 0x11B3D0u;
            goto label_11b3d0;
        }
    }
    ctx->pc = 0x11B3A4u;
    // 0x11b3a4: 0x1200ffcf  beqz        $s0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x11B3A4u;
    {
        const bool branch_taken_0x11b3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3A4u;
        // 0x11b3a8: 0x440e0800  mfc1        $t6, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3a4) {
            ctx->pc = 0x11B2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B3ACu;
    // 0x11b3ac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b3acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_11b3b0:
    // 0x11b3b0: 0x25ef2d3c  addiu       $t7, $t7, 0x2D3C
    ctx->pc = 0x11b3b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11580));
    // 0x11b3b4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b3b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11b3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11b3bc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b3bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b3c0: 0x25ef2d40  addiu       $t7, $t7, 0x2D40
    ctx->pc = 0x11b3c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11584));
    // 0x11b3c4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b3c4u;
    { uint32_t bits = FAST_READ32(0x662D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b3c8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x11B3C8u;
    {
        const bool branch_taken_0x11b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3C8u;
        // 0x11b3cc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3c8) {
            ctx->pc = 0x11B2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e0;
        }
    }
    ctx->pc = 0x11B3D0u;
label_11b3d0:
    // 0x11b3d0: 0x160ffff7  bne         $s0, $t7, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B3D0u;
    {
        const bool branch_taken_0x11b3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x11B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3D0u;
        // 0x11b3d4: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3d0) {
            ctx->pc = 0x11B3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b3b0;
        }
    }
    ctx->pc = 0x11B3D8u;
    // 0x11b3d8: 0x25ef2d3c  addiu       $t7, $t7, 0x2D3C
    ctx->pc = 0x11b3d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11580));
    // 0x11b3dc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b3e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x11b3e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11b3e4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b3e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b3e8: 0x25ef2d40  addiu       $t7, $t7, 0x2D40
    ctx->pc = 0x11b3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11584));
    // 0x11b3ec: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b3ecu;
    { uint32_t bits = FAST_READ32(0x662D40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b3f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11b3f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11b3f4: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x11B3F4u;
    {
        const bool branch_taken_0x11b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3F4u;
        // 0x11b3f8: 0x440e0800  mfc1        $t6, $f1 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3f4) {
            ctx->pc = 0x11B2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B3FCu;
label_11b3fc:
    // 0x11b3fc: 0x440e0800  mfc1        $t6, $f1
    ctx->pc = 0x11b3fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x11b400: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x11b404: 0x1000ffb7  b           . + 4 + (-0x49 << 2)
    ctx->pc = 0x11B404u;
    {
        const bool branch_taken_0x11b404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B404u;
        // 0x11b408: 0x1cf7026  xor         $t6, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b404) {
            ctx->pc = 0x11B2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B40Cu;
label_11b40c:
    // 0x11b40c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b410: 0x120fffb4  beq         $s0, $t7, . + 4 + (-0x4C << 2)
    ctx->pc = 0x11B410u;
    {
        const bool branch_taken_0x11b410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        ctx->pc = 0x11B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B410u;
        // 0x11b414: 0x35ce0fda  ori         $t6, $t6, 0xFDA (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b410) {
            ctx->pc = 0x11B2E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2e4;
        }
    }
    ctx->pc = 0x11B418u;
    // 0x11b418: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x11B418u;
    {
        const bool branch_taken_0x11b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B418u;
        // 0x11b41c: 0x3c0f007f  lui         $t7, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b418) {
            ctx->pc = 0x11B2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b2fc;
        }
    }
    ctx->pc = 0x11B420u;
}
