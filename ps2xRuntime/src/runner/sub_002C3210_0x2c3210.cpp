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

// Function: sub_002C3210
// Address: 0x2c3210 - 0x2c34ec
void sub_002C3210_0x2c3210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3210_0x2c3210");
#endif

    switch (ctx->pc) {
        case 0x2c3268u: goto label_2c3268;
        case 0x2c32bcu: goto label_2c32bc;
        case 0x2c34a4u: goto label_2c34a4;
        default: break;
    }

    ctx->pc = 0x2c3210u;

    // 0x2c3210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c3214: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2c3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c3218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c3218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c321c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3220: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c3224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c322c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c322cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3230: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3234: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c3234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c3238: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C3238u;
    {
        const bool branch_taken_0x2c3238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3238u;
        // 0x2c323c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3238) {
            ctx->pc = 0x2C3290u;
            goto label_2c3290;
        }
    }
    ctx->pc = 0x2C3240u;
    // 0x2c3240: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3244: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3244u;
    {
        const bool branch_taken_0x2c3244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3244) {
            ctx->pc = 0x2C3270u;
            goto label_2c3270;
        }
    }
    ctx->pc = 0x2C324Cu;
    // 0x2c324c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c3250: 0x10620001  beq         $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3250u;
    {
        const bool branch_taken_0x2c3250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3250) {
            ctx->pc = 0x2C3258u;
            goto label_2c3258;
        }
    }
    ctx->pc = 0x2C3258u;
label_2c3258:
    // 0x2c3258: 0x8e650088  lw          $a1, 0x88($s3)
    ctx->pc = 0x2c3258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2c325c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c325cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c3260: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C3260u;
    SET_GPR_U32(ctx, 31, 0x2C3268u);
    ctx->pc = 0x2C3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3260u;
    // 0x2c3264: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C3260u, 0x2C3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3268u;
label_2c3268:
    // 0x2c3268: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C3268u;
    {
        const bool branch_taken_0x2c3268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3268u;
        // 0x2c326c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3268) {
            ctx->pc = 0x2C32B0u;
            goto label_2c32b0;
        }
    }
    ctx->pc = 0x2C3270u;
label_2c3270:
    // 0x2c3270: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3274: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c3274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3278: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c327c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c327cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3284: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C3284u;
    {
        const bool branch_taken_0x2c3284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3284u;
        // 0x2c3288: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3284) {
            ctx->pc = 0x2C32B0u;
            goto label_2c32b0;
        }
    }
    ctx->pc = 0x2C328Cu;
    // 0x2c328c: 0x0  nop
    ctx->pc = 0x2c328cu;
    // NOP
label_2c3290:
    // 0x2c3290: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3294: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c3294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3298: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c329c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c329cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c32a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c32a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c32a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c32a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c32ac: 0x0  nop
    ctx->pc = 0x2c32acu;
    // NOP
label_2c32b0:
    // 0x2c32b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c32b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32b4: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C32B4u;
    SET_GPR_U32(ctx, 31, 0x2C32BCu);
    ctx->pc = 0x2C32B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32B4u;
    // 0x2c32b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C32B4u, 0x2C32BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32BCu;
label_2c32bc:
    // 0x2c32bc: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2C32BCu;
    {
        const bool branch_taken_0x2c32bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c32bc) {
            ctx->pc = 0x2C3438u;
            goto label_2c3438;
        }
    }
    ctx->pc = 0x2C32C4u;
    // 0x2c32c4: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2c32c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2c32c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c32c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c32cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c32ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c32d0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C32D0u;
    {
        const bool branch_taken_0x2c32d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c32d0) {
            ctx->pc = 0x2C3378u;
            goto label_2c3378;
        }
    }
    ctx->pc = 0x2C32D8u;
    // 0x2c32d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c32dc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C32DCu;
    {
        const bool branch_taken_0x2c32dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c32dc) {
            ctx->pc = 0x2C3308u;
            goto label_2c3308;
        }
    }
    ctx->pc = 0x2C32E4u;
    // 0x2c32e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c32e8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C32E8u;
    {
        const bool branch_taken_0x2c32e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c32e8) {
            ctx->pc = 0x2C3300u;
            goto label_2c3300;
        }
    }
    ctx->pc = 0x2C32F0u;
    // 0x2c32f0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C32F0u;
    {
        const bool branch_taken_0x2c32f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c32f0) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C32F8u;
    // 0x2c32f8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2C32F8u;
    {
        const bool branch_taken_0x2c32f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c32f8) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C3300u;
label_2c3300:
    // 0x2c3300: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2C3300u;
    {
        const bool branch_taken_0x2c3300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3300u;
        // 0x2c3304: 0xc6410024  lwc1        $f1, 0x24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3300) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C3308u;
label_2c3308:
    // 0x2c3308: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c330c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c330cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3310: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3318: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c331c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3320: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3320u;
    {
        const bool branch_taken_0x2c3320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3320u;
        // 0x2c3324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3320) {
            ctx->pc = 0x2C3340u;
            goto label_2c3340;
        }
    }
    ctx->pc = 0x2C3328u;
    // 0x2c3328: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c3328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c332c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c332cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3330: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3330u;
    {
        const bool branch_taken_0x2c3330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3330) {
            ctx->pc = 0x2C3340u;
            goto label_2c3340;
        }
    }
    ctx->pc = 0x2C3338u;
    // 0x2c3338: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2c3338u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c333c: 0x0  nop
    ctx->pc = 0x2c333cu;
    // NOP
label_2c3340:
    // 0x2c3340: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C3340u;
    {
        const bool branch_taken_0x2c3340 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2C3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3340u;
        // 0x2c3344: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3340) {
            ctx->pc = 0x2C3358u;
            goto label_2c3358;
        }
    }
    ctx->pc = 0x2C3348u;
    // 0x2c3348: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c3348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c334c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C334Cu;
    {
        const bool branch_taken_0x2c334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C334Cu;
        // 0x2c3350: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c334c) {
            ctx->pc = 0x2C3370u;
            goto label_2c3370;
        }
    }
    ctx->pc = 0x2C3354u;
    // 0x2c3354: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2c3354u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2c3358:
    // 0x2c3358: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c3358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c335c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c335cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c3360: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3364: 0x0  nop
    ctx->pc = 0x2c3364u;
    // NOP
    // 0x2c3368: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c3368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c336c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c336cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c3370:
    // 0x2c3370: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C3370u;
    {
        const bool branch_taken_0x2c3370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3370) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C3378u;
label_2c3378:
    // 0x2c3378: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c337c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c337cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3380: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c3384: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c3384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c3388: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c338c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3390: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c3394: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3394u;
    {
        const bool branch_taken_0x2c3394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3394u;
        // 0x2c3398: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3394) {
            ctx->pc = 0x2C33B0u;
            goto label_2c33b0;
        }
    }
    ctx->pc = 0x2C339Cu;
    // 0x2c339c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2c339cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c33a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2c33a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c33a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C33A4u;
    {
        const bool branch_taken_0x2c33a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c33a4) {
            ctx->pc = 0x2C33B0u;
            goto label_2c33b0;
        }
    }
    ctx->pc = 0x2C33ACu;
    // 0x2c33ac: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x2c33acu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2c33b0:
    // 0x2c33b0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C33B0u;
    {
        const bool branch_taken_0x2c33b0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2C33B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33B0u;
        // 0x2c33b4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33b0) {
            ctx->pc = 0x2C33C8u;
            goto label_2c33c8;
        }
    }
    ctx->pc = 0x2C33B8u;
    // 0x2c33b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c33b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C33BCu;
    {
        const bool branch_taken_0x2c33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33BCu;
        // 0x2c33c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c33bc) {
            ctx->pc = 0x2C33E0u;
            goto label_2c33e0;
        }
    }
    ctx->pc = 0x2C33C4u;
    // 0x2c33c4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2c33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2c33c8:
    // 0x2c33c8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c33c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c33cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c33ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c33d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c33d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33d4: 0x0  nop
    ctx->pc = 0x2c33d4u;
    // NOP
    // 0x2c33d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2c33d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c33dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c33dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c33e0:
    // 0x2c33e0: 0x86240006  lh          $a0, 0x6($s1)
    ctx->pc = 0x2c33e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2c33e4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2c33e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c33e8: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x2c33e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c33ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c33ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c33f0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2c33f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2c33f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c33f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c33f8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2c33f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c33fc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C33FCu;
    {
        const bool branch_taken_0x2c33fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c33fc) {
            ctx->pc = 0x2C3418u;
            goto label_2c3418;
        }
    }
    ctx->pc = 0x2C3404u;
    // 0x2c3404: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c3404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c3408: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c340c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c340cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3410: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C3410u;
    {
        const bool branch_taken_0x2c3410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3410u;
        // 0x2c3414: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3410) {
            ctx->pc = 0x2C3448u;
            goto label_2c3448;
        }
    }
    ctx->pc = 0x2C3418u;
label_2c3418:
    // 0x2c3418: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c3418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c341c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c341cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c3420: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c3420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c3424: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c3428: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c342c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2C342Cu;
    {
        const bool branch_taken_0x2c342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C342Cu;
        // 0x2c3430: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c342c) {
            ctx->pc = 0x2C3448u;
            goto label_2c3448;
        }
    }
    ctx->pc = 0x2C3434u;
    // 0x2c3434: 0x0  nop
    ctx->pc = 0x2c3434u;
    // NOP
label_2c3438:
    // 0x2c3438: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x2c3438u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c343c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x2c343cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2c3440: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2c3440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c3444: 0x0  nop
    ctx->pc = 0x2c3444u;
    // NOP
label_2c3448:
    // 0x2c3448: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C3448u;
    {
        const bool branch_taken_0x2c3448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3448) {
            ctx->pc = 0x2C34C8u;
            goto label_2c34c8;
        }
    }
    ctx->pc = 0x2C3450u;
    // 0x2c3450: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3454: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3454u;
    {
        const bool branch_taken_0x2c3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3454u;
        // 0x2c3458: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3454) {
            ctx->pc = 0x2C34B0u;
            goto label_2c34b0;
        }
    }
    ctx->pc = 0x2C345Cu;
    // 0x2c345c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C345Cu;
    {
        const bool branch_taken_0x2c345c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C345Cu;
        // 0x2c3460: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c345c) {
            ctx->pc = 0x2C3498u;
            goto label_2c3498;
        }
    }
    ctx->pc = 0x2C3464u;
    // 0x2c3464: 0x92640037  lbu         $a0, 0x37($s3)
    ctx->pc = 0x2c3464u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c3468: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c346c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c346cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3470: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3474: 0xa264004e  sb          $a0, 0x4E($s3)
    ctx->pc = 0x2c3474u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3478: 0xa2650037  sb          $a1, 0x37($s3)
    ctx->pc = 0x2c3478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c347c: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c347cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3480: 0xa263005f  sb          $v1, 0x5F($s3)
    ctx->pc = 0x2c3480u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3484: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c3484u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3488: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c3488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c348c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3490: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3490u;
    {
        const bool branch_taken_0x2c3490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3490u;
        // 0x2c3494: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3490) {
            ctx->pc = 0x2C34C0u;
            goto label_2c34c0;
        }
    }
    ctx->pc = 0x2C3498u;
label_2c3498:
    // 0x2c3498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c349c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C349Cu;
    SET_GPR_U32(ctx, 31, 0x2C34A4u);
    ctx->pc = 0x2C34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C349Cu;
    // 0x2c34a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C349Cu, 0x2C34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C34A4u;
label_2c34a4:
    // 0x2c34a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C34A4u;
    {
        const bool branch_taken_0x2c34a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c34a4) {
            ctx->pc = 0x2C34B8u;
            goto label_2c34b8;
        }
    }
    ctx->pc = 0x2C34ACu;
    // 0x2c34ac: 0x0  nop
    ctx->pc = 0x2c34acu;
    // NOP
label_2c34b0:
    // 0x2c34b0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c34b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c34b4: 0x0  nop
    ctx->pc = 0x2c34b4u;
    // NOP
label_2c34b8:
    // 0x2c34b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c34b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c34bc: 0x0  nop
    ctx->pc = 0x2c34bcu;
    // NOP
label_2c34c0:
    // 0x2c34c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C34C0u;
    {
        const bool branch_taken_0x2c34c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c34c0) {
            ctx->pc = 0x2C34D0u;
            goto label_2c34d0;
        }
    }
    ctx->pc = 0x2C34C8u;
label_2c34c8:
    // 0x2c34c8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x2c34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2c34cc: 0x0  nop
    ctx->pc = 0x2c34ccu;
    // NOP
label_2c34d0:
    // 0x2c34d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c34d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c34d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c34d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c34d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c34d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c34dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c34dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c34e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c34e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c34e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C34E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C34E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34E4u;
        // 0x2c34e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C34ECu;
}
